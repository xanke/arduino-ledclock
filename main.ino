#include <SPI.h>
#include <Ethernet.h>
#include <DHT22.h>
#include <stdio.h>
#include <DS3231.h>
#include <Wire.h>
#include <math.h>
#include <Adafruit_NeoPixel.h>
#define PIN 22
#define DHT22_PIN 31

// 初始化DHT22和 WS2812B
DHT22 myDHT22(DHT22_PIN);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(236, PIN, NEO_GRB + NEO_KHZ800);

char state = '0';
char c;
byte mac[] = { 0xCE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED};
IPAddress ip(192,168,31,190);
 
IPAddress myDns(114,114,114,114);
String myStr;
// IPAddress server(121,40,240,193); 
EthernetClient client;
boolean reading = false;


int zt,at,bt,ct,dt,et,ft;


char server[] = "wx.xank.cn";
int sensrdata = 0;
 
unsigned long lastConnectionTime = 0;
boolean lastConnected = false;

const unsigned long postingInterval = 4*1000;


float r = 0;
float g = 50;
float b = 150;


float ry = 0;
float gy = 50;
float by = 150;



DS3231 Clock;
bool Century=false;
bool h12;
bool PM;
byte ADay, AHour, AMinute, ASecond, ABits;
bool ADy, A12h, Apm;

byte year, month, date, DoW, hour, minute, second;


void setup() {

  Wire.begin();
  Serial.begin(115200);
  delay(1000);
  Ethernet.begin(mac, ip, myDns);
  Serial.print("My IP address: ");
  Serial.println(Ethernet.localIP());


  strip.begin();
  strip.show(); 

}
  
void loop(void) {
 
  //设置默认颜色
  at = 0;
  bt = 50;
  ct = 150;

  dt = 0;
  et = 50;
  ft = 150;

  while(client.available()) {

    c = client.read();
    if(c == '%') reading = true; 
    if(c == '*') reading = false;
    if(reading){
      if (c != '%' && c != '*') {
        myStr += c;
      }
    }
  }
 

  if (!client.connected() && lastConnected) {
    Serial.println("ok");
    client.stop();
    Serial.println(myStr);
    parseThangs(myStr);

  }

  delay(3000);


  if(r == 0 && g == 0 && b == 0){


  } else{
    r = 0;
    g = 0;
    b = 255;

    ry = 0;
    gy = 0;
    by = 255;

  }


  DHT22_ERROR_t errorCode;    
  Serial.print("Requesting data...");
  errorCode = myDHT22.readData();
  switch(errorCode)
  {
    case DHT_ERROR_NONE:
      Serial.print("Got Data ");
      
      int tem;
      tem = int(myDHT22.getTemperatureC());
      Serial.print(tem);
      Serial.print("C ");
    setNum(1, 11);
    setNum(0, 10);

    if(tem == 0){
      setNum(2, 0);
      setNum(3, 0);
    } else if(tem == 1){
      setNum(2, 1);
      setNum(3, 0);
      
    } else if(tem == 2){
      setNum(2, 2);
      setNum(3, 0);
      
    } else if(tem == 3){
      setNum(2, 3);
      setNum(3, 0);
      
    } else if(tem == 4){
      setNum(2, 4);
      setNum(3, 0);
      
    } else if(tem == 5){
      setNum(2, 5);
      setNum(3, 0);
    } else if(tem == 6){
      setNum(2, 6);
      setNum(3, 0);
    } else if(tem == 7){
      setNum(2, 7);
      setNum(3, 0);
    } else if(tem == 8){
      setNum(2, 8);
      setNum(3, 0);
    } else if(tem == 9){
      setNum(2, 9);
      setNum(3, 0);
    } else if(tem == 10){
      setNum(2, 0);
      setNum(3, 1);
    } 
    else if(tem == 11){
      setNum(2, 1);
      setNum(3, 1);
    } else if(tem == 12){
      setNum(2, 2);
      setNum(3, 1);
    } else if(tem == 13){
      setNum(2, 3);
      setNum(3, 1);
    } else if(tem == 14){
      setNum(2, 4);
      setNum(3, 1);
    } else if(tem == 15){
      setNum(2, 5);
      setNum(3, 1);
    } else if(tem == 16){
      setNum(2, 6);
      setNum(3, 1);
    } else if(tem == 17){
      setNum(2, 7);
      setNum(3, 1);
    } else if(tem == 18){
      setNum(2, 8);
      setNum(3, 1);
    } else if(tem == 19){
      setNum(2, 9);
      setNum(3, 1);

    } else if(tem == 20){
      setNum(2, 0);
      setNum(3, 2);
    } else if(tem == 21){
      setNum(2, 1);
      setNum(3, 2);
    } else if(tem == 22){
      setNum(2, 2);
      setNum(3, 2);
    } else if(tem == 23){
      setNum(2, 3);
      setNum(3, 2);
    } else if(tem == 24){
      setNum(2, 4);
      setNum(3, 2);
    } else if(tem == 25){
      setNum(2, 5);
      setNum(3, 2);
    } else if(tem == 26){
      setNum(2, 6);
      setNum(3, 2);
    } else if(tem == 27){
      setNum(2, 7);
      setNum(3, 2);
    } else if(tem == 28){
      setNum(2, 8);
      setNum(3, 2);
    } else if(tem == 29){
      setNum(2, 9);
      setNum(3, 2);
    } else if(tem == 30){
      setNum(2, 0);
      setNum(3, 3);
    } else if(tem == 31){
      setNum(2, 1);
      setNum(3, 3);
    } else if(tem == 32){
      setNum(2, 2);
      setNum(3, 3);
    }

    break;
  }

  delay(3000);

  //初始化时间
  int second,minute,hour,date,month,year,temperature; 
  second=Clock.getSecond();
  minute=Clock.getMinute();
  hour=Clock.getHour(h12, PM);
  date=Clock.getDate();
  month=Clock.getMonth(Century);
  year=Clock.getYear();


  r = at;
  g = bt;
  b = ct;

  ry = dt;
  gy = et;
  by = ft;


  if(hour == 0){
    setNum(2, 0);
    setNum(3, 0);
  } else if(hour == 1){
    setNum(2, 1);
    setNum(3, 0);
  } else if(hour == 2){
    setNum(2, 2);
    setNum(3, 0);
    
  } else if(hour == 3){
    setNum(2, 3);
    setNum(3, 0);
    
  } else if(hour == 4){
    setNum(2, 4);
    setNum(3, 0);
    
  } else if(hour == 5){
    setNum(2, 5);
    setNum(3, 0);
  } else if(hour == 6){
    setNum(2, 6);
    setNum(3, 0);
  } else if(hour == 7){
    setNum(2, 7);
    setNum(3, 0);
  } else if(hour == 8){
    setNum(2, 8);
    setNum(3, 0);
  } else if(hour == 9){
    setNum(2, 9);
    setNum(3, 0);
  } else if(hour == 10){
    setNum(2, 0);
    setNum(3, 1);
  } 
  else if(hour == 11){
    setNum(2, 1);
    setNum(3, 1);
  } else if(hour == 12){
    setNum(2, 2);
    setNum(3, 1);
  } else if(hour == 13){
    setNum(2, 3);
    setNum(3, 1);
  } else if(hour == 14){
    setNum(2, 4);
    setNum(3, 1);
  } else if(hour == 15){
    setNum(2, 5);
    setNum(3, 1);
  } else if(hour == 16){
    setNum(2, 6);
    setNum(3, 1);
  } else if(hour == 17){
    setNum(2, 7);
    setNum(3, 1);
  } else if(hour == 18){
    setNum(2, 8);
    setNum(3, 1);
  } else if(hour == 19){
    setNum(2, 9);
    setNum(3, 1);

  } else if(hour == 20){
    setNum(2, 0);
    setNum(3, 2);
  } else if(hour == 21){
    setNum(2, 1);
    setNum(3, 2);
  } else if(hour == 22){
    setNum(2, 2);
    setNum(3, 2);
  } else if(hour == 23){
    setNum(2, 3);
    setNum(3, 2);
  }



//分
  second = minute;
  if(second == 0){
    setNum(0, 0);
    setNum(1, 0);
  } else if(second == 1){
    setNum(0, 1);
    setNum(1, 0);
  } else if(second == 2){
    setNum(0, 2);
    setNum(1, 0);
  } else if(second == 3){
    setNum(0, 3);
    setNum(1, 0);
  } else if(second == 4){
    setNum(0, 4);
    setNum(1, 0);
  } else if(second == 5){
    setNum(0, 5);
    setNum(1, 0);
  } else if(second == 6){
    setNum(0, 6);
    setNum(1, 0);
  } else if(second == 7){
    setNum(0, 7);
    setNum(1, 0);
  } else if(second == 8){
    setNum(0, 8);
    setNum(1, 0);
  } else if(second == 9){
    setNum(0, 9);
    setNum(1, 0);
  } else if(second == 10){
    setNum(0, 0);
    setNum(1, 1);
  } 
  else if(second == 11){
    setNum(0, 1);
    setNum(1, 1);
  } else if(second == 12){
    setNum(0, 2);
    setNum(1, 1);
  } else if(second == 13){
    setNum(0, 3);
    setNum(1, 1);
  } else if(second == 14){
    setNum(0, 4);
    setNum(1, 1);
  } else if(second == 15){
    setNum(0, 5);
    setNum(1, 1);
  } else if(second == 16){
    setNum(0, 6);
    setNum(1, 1);
  } else if(second == 17){
    setNum(0, 7);
    setNum(1, 1);
  } else if(second == 18){
    setNum(0, 8);
    setNum(1, 1);
  } else if(second == 19){
    setNum(0, 9);
    setNum(1, 1);


  } else if(second == 20){
    setNum(0, 0);
    setNum(1, 2);
  } else if(second == 21){
    setNum(0, 1);
    setNum(1, 2);
  } else if(second == 22){
    setNum(0, 2);
    setNum(1, 2);
  } else if(second == 23){
    setNum(0, 3);
    setNum(1, 2);
  } else if(second == 24){
    setNum(0, 4);
    setNum(1, 2);
  } else if(second == 25){
    setNum(0, 5);
    setNum(1, 2);
  } else if(second == 26){
    setNum(0, 6);
    setNum(1, 2);
  } else if(second == 27){
    setNum(0, 7);
    setNum(1, 2);
  } else if(second == 28){
    setNum(0, 8);
    setNum(1, 2);
  } else if(second == 29){
    setNum(0, 9);
    setNum(1, 2);


  } else if(second == 30){
    setNum(0, 0);
    setNum(1, 3);
  } else if(second == 31){
    setNum(0, 1);
    setNum(1, 3);
  } else if(second == 32){
    setNum(0, 2);
    setNum(1, 3);
  } else if(second == 33){
    setNum(0, 3);
    setNum(1, 3);
  } else if(second == 34){
    setNum(0, 4);
    setNum(1, 3);
  } else if(second == 35){
    setNum(0, 5);
    setNum(1, 3);
  } else if(second == 36){
    setNum(0, 6);
    setNum(1, 3);
  } else if(second == 37){
    setNum(0, 7);
    setNum(1, 3);
  } else if(second == 38){
    setNum(0, 8);
    setNum(1, 3);
  } else if(second == 39){
    setNum(0, 9);
    setNum(1, 3);

  } else if(second == 40){
    setNum(0, 0);
    setNum(1, 4);
  } else if(second == 41){
    setNum(0, 1);
    setNum(1, 4);
  } else if(second == 42){
    setNum(0, 2);
    setNum(1, 4);
  } else if(second == 43){
    setNum(0, 3);
    setNum(1, 4);
  } else if(second == 44){
    setNum(0, 4);
    setNum(1, 4);
  } else if(second == 45){
    setNum(0, 5);
    setNum(1, 4);
  } else if(second == 46){
    setNum(0, 6);
    setNum(1, 4);
  } else if(second == 47){
    setNum(0, 7);
    setNum(1, 4);
  } else if(second == 48){
    setNum(0, 8);
    setNum(1, 4);
  } else if(second == 49){
    setNum(0, 9);
    setNum(1, 4);

  } else if(second == 50){
    setNum(0, 0);
    setNum(1, 5);
  } else if(second == 51){
    setNum(0, 1);
    setNum(1, 5);
  } else if(second == 52){
    setNum(0, 2);
    setNum(1, 5);
  } else if(second == 53){
    setNum(0, 3);
    setNum(1, 5);
  } else if(second == 54){
    setNum(0, 4);
    setNum(1, 5);
  } else if(second == 55){
    setNum(0, 5);
    setNum(1, 5);
  } else if(second == 56){
    setNum(0, 6);
    setNum(1, 5);
  } else if(second == 57){
    setNum(0, 7);
    setNum(1, 5);
  } else if(second == 58){
    setNum(0, 8);
    setNum(1, 5);
  } else if(second == 59){
    setNum(0, 9);
    setNum(1, 5);
  }
  myStr = "";


  
 
  if(!client.connected() && (millis() - lastConnectionTime > postingInterval)) {
    if (client.connect(server, 80)) {
 
      client.println("GET /index.php?s=/addon/HelloWorld/HelloWorld/show HTTP/1.1");
      client.println("Host: wx.xank.cn");
      client.println("User-Agent: Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/44.0.2403.107 Safari/537.36");
      client.println("Connection: close");
      client.println();
      lastConnectionTime = millis();
    }
    else {
      Serial.println("connection failed");
      Serial.println("disconnecting.");
      client.stop();
    }
  }
  lastConnected = client.connected();

  Serial.println("connection failed");
}


//序列号输入
void parseThangs(String str) {

  int startIndex = str.indexOf("z");
  int endIndex = str.indexOf("a");
  String zStr = str.substring(startIndex + 2, endIndex - 1);
  char tempZ[4];
  zStr.toCharArray(tempZ, sizeof(tempZ));
  zt = atoi(tempZ);

  startIndex = str.indexOf("a");
  endIndex = str.indexOf("b");
  String aStr = str.substring(startIndex + 2, endIndex -1);
  char tempA[4];
  aStr.toCharArray(tempA, sizeof(tempA));
  at = atoi(tempA);

  startIndex = str.indexOf("b");
  endIndex = str.indexOf("c");
  String bStr = str.substring(startIndex + 2, endIndex -1);
  char tempB[4];
  bStr.toCharArray(tempB, sizeof(tempB));
  bt = atoi(tempB);

  startIndex = str.indexOf("c");
  endIndex = str.indexOf("d");
  String cStr = str.substring(startIndex + 2, endIndex -1);
  char tempC[4];
  cStr.toCharArray(tempC, sizeof(tempC));
  ct = atoi(tempC);

  startIndex = str.indexOf("d");
  endIndex = str.indexOf("e");
  String dStr = str.substring(startIndex + 2, endIndex -1);
  char tempD[4];
  dStr.toCharArray(tempD, sizeof(tempD));
  dt = atoi(tempD);


  startIndex = str.indexOf("e");
  endIndex = str.indexOf("f");
  String eStr = str.substring(startIndex + 2, endIndex -1);
  char tempE[4];
  eStr.toCharArray(tempE, sizeof(tempE));
  et = atoi(tempE);

  startIndex = str.indexOf("f");
  endIndex = str.indexOf("g");
  String fStr = str.substring(startIndex + 2, endIndex -1);
  char tempF[4];
  fStr.toCharArray(tempF, sizeof(tempF));
  ft = atoi(tempF);

}

