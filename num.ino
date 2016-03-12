

void setNum(int i, int n){



  uint32_t color = strip.Color(r, g, b);
  uint32_t energy =  strip.Color(ry, gy, by); //strip.Color(ry, gy, by);
  uint32_t black = strip.Color(0, 0, 0);

  // // i = 6;
  if(i == 0){
    i = 164;//第四位
  } else if (i == 1){
    i = 109;
  } else if (i == 2){
    i = 54;
  } else if (i == 3){
    i = -1;
  }



  if(n == 1){

    strip.setPixelColor(i + 1, black);
    strip.setPixelColor(i + 2, black);
    strip.setPixelColor(i + 3, black);
    strip.setPixelColor(i + 4, black);
    strip.setPixelColor(i + 5, black);

    strip.setPixelColor(i + 6, black);
    strip.setPixelColor(i + 7, black);
    strip.setPixelColor(i + 8, black);
    strip.setPixelColor(i + 9, black);
    strip.setPixelColor(i + 10, black);

    strip.setPixelColor(i + 11, black);
    strip.setPixelColor(i + 12, black);
    strip.setPixelColor(i + 13, black);
    strip.setPixelColor(i + 14, black);
    strip.setPixelColor(i + 15, black);

    strip.setPixelColor(i + 16, black);
    strip.setPixelColor(i + 17, black);
    strip.setPixelColor(i + 18, black);
    strip.setPixelColor(i + 19, black);
    strip.setPixelColor(i + 20, black);

    strip.setPixelColor(i + 21, black);
    strip.setPixelColor(i + 22, black);
    strip.setPixelColor(i + 23, black);
    strip.setPixelColor(i + 24, black);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, energy);
    strip.setPixelColor(i + 27, color);
    strip.setPixelColor(i + 28, energy);
    strip.setPixelColor(i + 29, color);
    strip.setPixelColor(i + 30, energy);

    strip.setPixelColor(i + 31, color);
    strip.setPixelColor(i + 32, energy);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, energy);
    strip.setPixelColor(i + 35, color);

    strip.setPixelColor(i + 36, energy);
    strip.setPixelColor(i + 37, color);
    strip.setPixelColor(i + 38, energy);
    strip.setPixelColor(i + 39, color);
    strip.setPixelColor(i + 40, energy);

    strip.setPixelColor(i + 41, color);
    strip.setPixelColor(i + 42, black);
    strip.setPixelColor(i + 43, black);
    strip.setPixelColor(i + 44, black);
    strip.setPixelColor(i + 45, black);

    strip.setPixelColor(i + 46, black);
    strip.setPixelColor(i + 47, black);
    strip.setPixelColor(i + 48, black);
    strip.setPixelColor(i + 49, black);
    strip.setPixelColor(i + 50, black);

    strip.setPixelColor(i + 51, black);
    strip.setPixelColor(i + 52, black);
    strip.setPixelColor(i + 53, black);
    strip.setPixelColor(i + 54, black);
    strip.setPixelColor(i + 55, black);


  } else if(n == 2){

    strip.setPixelColor(i + 1, color);
    strip.setPixelColor(i + 2, black);
    strip.setPixelColor(i + 3, black);
    strip.setPixelColor(i + 4, black);
    strip.setPixelColor(i + 5, black);

    strip.setPixelColor(i + 6, black);
    strip.setPixelColor(i + 7, black);
    strip.setPixelColor(i + 8, black);
    strip.setPixelColor(i + 9, color);
    strip.setPixelColor(i + 10, energy);

    strip.setPixelColor(i + 11, color);
    strip.setPixelColor(i + 12, energy);
    strip.setPixelColor(i + 13, color);
    strip.setPixelColor(i + 14, energy);
    strip.setPixelColor(i + 15, color);

    strip.setPixelColor(i + 16, energy);
    strip.setPixelColor(i + 17, color);
    strip.setPixelColor(i + 18, energy);
    strip.setPixelColor(i + 19, color);
    strip.setPixelColor(i + 20, energy);

    strip.setPixelColor(i + 21, color);
    strip.setPixelColor(i + 22, energy);
    strip.setPixelColor(i + 23, color);
    strip.setPixelColor(i + 24, energy);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, black);
    strip.setPixelColor(i + 27, black);
    strip.setPixelColor(i + 28, black);
    strip.setPixelColor(i + 29, black);
    strip.setPixelColor(i + 30, black);

    strip.setPixelColor(i + 31, black);
    strip.setPixelColor(i + 32, black);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, energy);
    strip.setPixelColor(i + 35, color);

    strip.setPixelColor(i + 36, energy);
    strip.setPixelColor(i + 37, color);
    strip.setPixelColor(i + 38, energy);
    strip.setPixelColor(i + 39, color);
    strip.setPixelColor(i + 40, energy);

    strip.setPixelColor(i + 41, color);
    strip.setPixelColor(i + 42, energy);
    strip.setPixelColor(i + 43, color);
    strip.setPixelColor(i + 44, energy);
    strip.setPixelColor(i + 45, color);

    strip.setPixelColor(i + 46, energy);
    strip.setPixelColor(i + 47, color);
    strip.setPixelColor(i + 48, energy);
    strip.setPixelColor(i + 49, energy);
    strip.setPixelColor(i + 50, color);

    strip.setPixelColor(i + 51, energy);
    strip.setPixelColor(i + 52, color);
    strip.setPixelColor(i + 53, energy);
    strip.setPixelColor(i + 54, color);
    strip.setPixelColor(i + 55, energy);


  } else if(n == 3){

    strip.setPixelColor(i + 1, color);
    strip.setPixelColor(i + 2, black);
    strip.setPixelColor(i + 3, black);
    strip.setPixelColor(i + 4, black);
    strip.setPixelColor(i + 5, black);

    strip.setPixelColor(i + 6, black);
    strip.setPixelColor(i + 7, black);
    strip.setPixelColor(i + 8, black);
    strip.setPixelColor(i + 9, color);
    strip.setPixelColor(i + 10, black);

    strip.setPixelColor(i + 11, black);
    strip.setPixelColor(i + 12, black);
    strip.setPixelColor(i + 13, black);
    strip.setPixelColor(i + 14, black);
    strip.setPixelColor(i + 15, black);

    strip.setPixelColor(i + 16, black);
    strip.setPixelColor(i + 17, color);
    strip.setPixelColor(i + 18, energy);
    strip.setPixelColor(i + 19, color);
    strip.setPixelColor(i + 20, energy);

    strip.setPixelColor(i + 21, color);
    strip.setPixelColor(i + 22, energy);
    strip.setPixelColor(i + 23, color);
    strip.setPixelColor(i + 24, energy);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, energy);
    strip.setPixelColor(i + 27, color);
    strip.setPixelColor(i + 28, energy);
    strip.setPixelColor(i + 29, color);
    strip.setPixelColor(i + 30, energy);

    strip.setPixelColor(i + 31, color);
    strip.setPixelColor(i + 32, energy);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, energy);
    strip.setPixelColor(i + 35, color);

    strip.setPixelColor(i + 36, energy);
    strip.setPixelColor(i + 37, color);
    strip.setPixelColor(i + 38, energy);
    strip.setPixelColor(i + 39, color);
    strip.setPixelColor(i + 40, energy);

    strip.setPixelColor(i + 41, color);
    strip.setPixelColor(i + 42, energy);
    strip.setPixelColor(i + 43, color);
    strip.setPixelColor(i + 44, energy);
    strip.setPixelColor(i + 45, color);

    strip.setPixelColor(i + 46, energy);
    strip.setPixelColor(i + 47, color);
    strip.setPixelColor(i + 48, energy);
    strip.setPixelColor(i + 49, energy);
    strip.setPixelColor(i + 50, color);

    strip.setPixelColor(i + 51, energy);
    strip.setPixelColor(i + 52, color);
    strip.setPixelColor(i + 53, energy);
    strip.setPixelColor(i + 54, color);
    strip.setPixelColor(i + 55, energy);


  } else if(n == 4){

    strip.setPixelColor(i + 1, color);
    strip.setPixelColor(i + 2, energy);
    strip.setPixelColor(i + 3, color);
    strip.setPixelColor(i + 4, energy);
    strip.setPixelColor(i + 5, color);

    strip.setPixelColor(i + 6, energy);
    strip.setPixelColor(i + 7, color);
    strip.setPixelColor(i + 8, energy);
    strip.setPixelColor(i + 9, color);
    strip.setPixelColor(i + 10, black);

    strip.setPixelColor(i + 11, black);
    strip.setPixelColor(i + 12, black);
    strip.setPixelColor(i + 13, black);
    strip.setPixelColor(i + 14, black);
    strip.setPixelColor(i + 15, black);

    strip.setPixelColor(i + 16, black);
    strip.setPixelColor(i + 17, black);
    strip.setPixelColor(i + 18, black);
    strip.setPixelColor(i + 19, black);
    strip.setPixelColor(i + 20, black);

    strip.setPixelColor(i + 21, black);
    strip.setPixelColor(i + 22, black);
    strip.setPixelColor(i + 23, black);
    strip.setPixelColor(i + 24, black);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, energy);
    strip.setPixelColor(i + 27, color);
    strip.setPixelColor(i + 28, energy);
    strip.setPixelColor(i + 29, color);
    strip.setPixelColor(i + 30, energy);

    strip.setPixelColor(i + 31, color);
    strip.setPixelColor(i + 32, energy);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, energy);
    strip.setPixelColor(i + 35, color);

    strip.setPixelColor(i + 36, energy);
    strip.setPixelColor(i + 37, color);
    strip.setPixelColor(i + 38, energy);
    strip.setPixelColor(i + 39, color);
    strip.setPixelColor(i + 40, energy);

    strip.setPixelColor(i + 41, color);
    strip.setPixelColor(i + 42, black);
    strip.setPixelColor(i + 43, black);
    strip.setPixelColor(i + 44, black);
    strip.setPixelColor(i + 45, black);

    strip.setPixelColor(i + 46, black);
    strip.setPixelColor(i + 47, black);
    strip.setPixelColor(i + 48, black);
    strip.setPixelColor(i + 49, energy);
    strip.setPixelColor(i + 50, color);

    strip.setPixelColor(i + 51, energy);
    strip.setPixelColor(i + 52, color);
    strip.setPixelColor(i + 53, energy);
    strip.setPixelColor(i + 54, color);
    strip.setPixelColor(i + 55, energy);


  } else if(n == 5){

    strip.setPixelColor(i + 1, color);
    strip.setPixelColor(i + 2, energy);
    strip.setPixelColor(i + 3, color);
    strip.setPixelColor(i + 4, energy);
    strip.setPixelColor(i + 5, color);

    strip.setPixelColor(i + 6, energy);
    strip.setPixelColor(i + 7, color);
    strip.setPixelColor(i + 8, energy);
    strip.setPixelColor(i + 9, color);
    strip.setPixelColor(i + 10, black);

    strip.setPixelColor(i + 11, black);
    strip.setPixelColor(i + 12, black);
    strip.setPixelColor(i + 13, black);
    strip.setPixelColor(i + 14, black);
    strip.setPixelColor(i + 15, black);

    strip.setPixelColor(i + 16, black);
    strip.setPixelColor(i + 17, color);
    strip.setPixelColor(i + 18, energy);
    strip.setPixelColor(i + 19, color);
    strip.setPixelColor(i + 20, energy);

    strip.setPixelColor(i + 21, color);
    strip.setPixelColor(i + 22, energy);
    strip.setPixelColor(i + 23, color);
    strip.setPixelColor(i + 24, energy);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, energy);
    strip.setPixelColor(i + 27, color);
    strip.setPixelColor(i + 28, energy);
    strip.setPixelColor(i + 29, color);
    strip.setPixelColor(i + 30, energy);

    strip.setPixelColor(i + 31, color);
    strip.setPixelColor(i + 32, energy);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, black);
    strip.setPixelColor(i + 35, black);

    strip.setPixelColor(i + 36, black);
    strip.setPixelColor(i + 37, black);
    strip.setPixelColor(i + 38, black);
    strip.setPixelColor(i + 39, black);
    strip.setPixelColor(i + 40, black);

    strip.setPixelColor(i + 41, color);
    strip.setPixelColor(i + 42, energy);
    strip.setPixelColor(i + 43, color);
    strip.setPixelColor(i + 44, energy);
    strip.setPixelColor(i + 45, color);

    strip.setPixelColor(i + 46, energy);
    strip.setPixelColor(i + 47, color);
    strip.setPixelColor(i + 48, energy);
    strip.setPixelColor(i + 49, energy);
    strip.setPixelColor(i + 50, color);

    strip.setPixelColor(i + 51, energy);
    strip.setPixelColor(i + 52, color);
    strip.setPixelColor(i + 53, energy);
    strip.setPixelColor(i + 54, color);
    strip.setPixelColor(i + 55, energy);


  } else if(n == 6){

    strip.setPixelColor(i + 1, color);
    strip.setPixelColor(i + 2, energy);
    strip.setPixelColor(i + 3, color);
    strip.setPixelColor(i + 4, energy);
    strip.setPixelColor(i + 5, color);

    strip.setPixelColor(i + 6, energy);
    strip.setPixelColor(i + 7, color);
    strip.setPixelColor(i + 8, energy);
    strip.setPixelColor(i + 9, color);
    strip.setPixelColor(i + 10, energy);

    strip.setPixelColor(i + 11, color);
    strip.setPixelColor(i + 12, energy);
    strip.setPixelColor(i + 13, color);
    strip.setPixelColor(i + 14, energy);
    strip.setPixelColor(i + 15, color);

    strip.setPixelColor(i + 16, energy);
    strip.setPixelColor(i + 17, color);
    strip.setPixelColor(i + 18, energy);
    strip.setPixelColor(i + 19, color);
    strip.setPixelColor(i + 20, energy);

    strip.setPixelColor(i + 21, color);
    strip.setPixelColor(i + 22, energy);
    strip.setPixelColor(i + 23, color);
    strip.setPixelColor(i + 24, energy);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, energy);
    strip.setPixelColor(i + 27, color);
    strip.setPixelColor(i + 28, energy);
    strip.setPixelColor(i + 29, color);
    strip.setPixelColor(i + 30, energy);

    strip.setPixelColor(i + 31, color);
    strip.setPixelColor(i + 32, energy);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, black);
    strip.setPixelColor(i + 35, black);

    strip.setPixelColor(i + 36, black);
    strip.setPixelColor(i + 37, black);
    strip.setPixelColor(i + 38, black);
    strip.setPixelColor(i + 39, black);
    strip.setPixelColor(i + 40, black);

    strip.setPixelColor(i + 41, color);
    strip.setPixelColor(i + 42, energy);
    strip.setPixelColor(i + 43, color);
    strip.setPixelColor(i + 44, energy);
    strip.setPixelColor(i + 45, color);

    strip.setPixelColor(i + 46, energy);
    strip.setPixelColor(i + 47, color);
    strip.setPixelColor(i + 48, energy);
    strip.setPixelColor(i + 49, energy);
    strip.setPixelColor(i + 50, color);

    strip.setPixelColor(i + 51, energy);
    strip.setPixelColor(i + 52, color);
    strip.setPixelColor(i + 53, energy);
    strip.setPixelColor(i + 54, color);
    strip.setPixelColor(i + 55, energy);


  } else if(n == 7){

    strip.setPixelColor(i + 1, color);
    strip.setPixelColor(i + 2, black);
    strip.setPixelColor(i + 3, black);
    strip.setPixelColor(i + 4, black);
    strip.setPixelColor(i + 5, black);

    strip.setPixelColor(i + 6, black);
    strip.setPixelColor(i + 7, black);
    strip.setPixelColor(i + 8, black);
    strip.setPixelColor(i + 9, black);
    strip.setPixelColor(i + 10, black);

    strip.setPixelColor(i + 11, black);
    strip.setPixelColor(i + 12, black);
    strip.setPixelColor(i + 13, black);
    strip.setPixelColor(i + 14, black);
    strip.setPixelColor(i + 15, black);

    strip.setPixelColor(i + 16, black);
    strip.setPixelColor(i + 17, black);
    strip.setPixelColor(i + 18, black);
    strip.setPixelColor(i + 19, black);
    strip.setPixelColor(i + 20, black);

    strip.setPixelColor(i + 21, black);
    strip.setPixelColor(i + 22, black);
    strip.setPixelColor(i + 23, black);
    strip.setPixelColor(i + 24, black);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, energy);
    strip.setPixelColor(i + 27, color);
    strip.setPixelColor(i + 28, energy);
    strip.setPixelColor(i + 29, color);
    strip.setPixelColor(i + 30, energy);

    strip.setPixelColor(i + 31, color);
    strip.setPixelColor(i + 32, energy);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, energy);
    strip.setPixelColor(i + 35, color);

    strip.setPixelColor(i + 36, energy);
    strip.setPixelColor(i + 37, color);
    strip.setPixelColor(i + 38, energy);
    strip.setPixelColor(i + 39, color);
    strip.setPixelColor(i + 40, energy);

    strip.setPixelColor(i + 41, color);
    strip.setPixelColor(i + 42, energy);
    strip.setPixelColor(i + 43, color);
    strip.setPixelColor(i + 44, energy);
    strip.setPixelColor(i + 45, color);

    strip.setPixelColor(i + 46, energy);
    strip.setPixelColor(i + 47, color);
    strip.setPixelColor(i + 48, energy);
    strip.setPixelColor(i + 49, black);
    strip.setPixelColor(i + 50, black);

    strip.setPixelColor(i + 51, black);
    strip.setPixelColor(i + 52, black);
    strip.setPixelColor(i + 53, black);
    strip.setPixelColor(i + 54, black);
    strip.setPixelColor(i + 55, black);


  } else if(n == 8){

    strip.setPixelColor(i + 1, color);
    strip.setPixelColor(i + 2, energy);
    strip.setPixelColor(i + 3, color);
    strip.setPixelColor(i + 4, energy);
    strip.setPixelColor(i + 5, color);

    strip.setPixelColor(i + 6, energy);
    strip.setPixelColor(i + 7, color);
    strip.setPixelColor(i + 8, energy);
    strip.setPixelColor(i + 9, color);
    strip.setPixelColor(i + 10, energy);

    strip.setPixelColor(i + 11, color);
    strip.setPixelColor(i + 12, energy);
    strip.setPixelColor(i + 13, color);
    strip.setPixelColor(i + 14, energy);
    strip.setPixelColor(i + 15, color);

    strip.setPixelColor(i + 16, energy);
    strip.setPixelColor(i + 17, color);
    strip.setPixelColor(i + 18, energy);
    strip.setPixelColor(i + 19, color);
    strip.setPixelColor(i + 20, energy);

    strip.setPixelColor(i + 21, color);
    strip.setPixelColor(i + 22, energy);
    strip.setPixelColor(i + 23, color);
    strip.setPixelColor(i + 24, energy);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, energy);
    strip.setPixelColor(i + 27, color);
    strip.setPixelColor(i + 28, energy);
    strip.setPixelColor(i + 29, color);
    strip.setPixelColor(i + 30, energy);

    strip.setPixelColor(i + 31, color);
    strip.setPixelColor(i + 32, energy);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, energy);
    strip.setPixelColor(i + 35, color);

    strip.setPixelColor(i + 36, energy);
    strip.setPixelColor(i + 37, color);
    strip.setPixelColor(i + 38, energy);
    strip.setPixelColor(i + 39, color);
    strip.setPixelColor(i + 40, energy);

    strip.setPixelColor(i + 41, color);
    strip.setPixelColor(i + 42, energy);
    strip.setPixelColor(i + 43, color);
    strip.setPixelColor(i + 44, energy);
    strip.setPixelColor(i + 45, color);

    strip.setPixelColor(i + 46, energy);
    strip.setPixelColor(i + 47, color);
    strip.setPixelColor(i + 48, energy);
    strip.setPixelColor(i + 49, energy);
    strip.setPixelColor(i + 50, color);

    strip.setPixelColor(i + 51, energy);
    strip.setPixelColor(i + 52, color);
    strip.setPixelColor(i + 53, energy);
    strip.setPixelColor(i + 54, color);
    strip.setPixelColor(i + 55, energy);


  } else if(n == 9){

    strip.setPixelColor(i + 1, color);
    strip.setPixelColor(i + 2, energy);
    strip.setPixelColor(i + 3, color);
    strip.setPixelColor(i + 4, energy);
    strip.setPixelColor(i + 5, color);

    strip.setPixelColor(i + 6, energy);
    strip.setPixelColor(i + 7, color);
    strip.setPixelColor(i + 8, energy);
    strip.setPixelColor(i + 9, color);
    strip.setPixelColor(i + 10, black);

    strip.setPixelColor(i + 11, black);
    strip.setPixelColor(i + 12, black);
    strip.setPixelColor(i + 13, black);
    strip.setPixelColor(i + 14, black);
    strip.setPixelColor(i + 15, black);

    strip.setPixelColor(i + 16, black);
    strip.setPixelColor(i + 17, color);
    strip.setPixelColor(i + 18, energy);
    strip.setPixelColor(i + 19, color);
    strip.setPixelColor(i + 20, energy);

    strip.setPixelColor(i + 21, color);
    strip.setPixelColor(i + 22, energy);
    strip.setPixelColor(i + 23, color);
    strip.setPixelColor(i + 24, energy);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, energy);
    strip.setPixelColor(i + 27, color);
    strip.setPixelColor(i + 28, energy);
    strip.setPixelColor(i + 29, color);
    strip.setPixelColor(i + 30, energy);

    strip.setPixelColor(i + 31, color);
    strip.setPixelColor(i + 32, energy);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, energy);
    strip.setPixelColor(i + 35, color);

    strip.setPixelColor(i + 36, energy);
    strip.setPixelColor(i + 37, color);
    strip.setPixelColor(i + 38, energy);
    strip.setPixelColor(i + 39, color);
    strip.setPixelColor(i + 40, energy);

    strip.setPixelColor(i + 41, color);
    strip.setPixelColor(i + 42, energy);
    strip.setPixelColor(i + 43, color);
    strip.setPixelColor(i + 44, energy);
    strip.setPixelColor(i + 45, color);

    strip.setPixelColor(i + 46, energy);
    strip.setPixelColor(i + 47, color);
    strip.setPixelColor(i + 48, energy);
    strip.setPixelColor(i + 49, energy);
    strip.setPixelColor(i + 50, color);

    strip.setPixelColor(i + 51, energy);
    strip.setPixelColor(i + 52, color);
    strip.setPixelColor(i + 53, energy);
    strip.setPixelColor(i + 54, color);
    strip.setPixelColor(i + 55, energy);


  } else if(n == 0){

    strip.setPixelColor(i + 1, color);
    strip.setPixelColor(i + 2, energy);
    strip.setPixelColor(i + 3, color);
    strip.setPixelColor(i + 4, energy);
    strip.setPixelColor(i + 5, color);

    strip.setPixelColor(i + 6, energy);
    strip.setPixelColor(i + 7, color);
    strip.setPixelColor(i + 8, energy);
    strip.setPixelColor(i + 9, color);
    strip.setPixelColor(i + 10, energy);

    strip.setPixelColor(i + 11, color);
    strip.setPixelColor(i + 12, energy);
    strip.setPixelColor(i + 13, color);
    strip.setPixelColor(i + 14, energy);
    strip.setPixelColor(i + 15, color);

    strip.setPixelColor(i + 16, energy);
    strip.setPixelColor(i + 17, color);
    strip.setPixelColor(i + 18, energy);
    strip.setPixelColor(i + 19, color);
    strip.setPixelColor(i + 20, energy);

    strip.setPixelColor(i + 21, color);
    strip.setPixelColor(i + 22, energy);
    strip.setPixelColor(i + 23, color);
    strip.setPixelColor(i + 24, energy);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, energy);
    strip.setPixelColor(i + 27, color);
    strip.setPixelColor(i + 28, energy);
    strip.setPixelColor(i + 29, color);
    strip.setPixelColor(i + 30, energy);

    strip.setPixelColor(i + 31, color);
    strip.setPixelColor(i + 32, energy);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, energy);
    strip.setPixelColor(i + 35, color);

    strip.setPixelColor(i + 36, energy);
    strip.setPixelColor(i + 37, color);
    strip.setPixelColor(i + 38, energy);
    strip.setPixelColor(i + 39, color);
    strip.setPixelColor(i + 40, energy);

    strip.setPixelColor(i + 41, color);
    strip.setPixelColor(i + 42, energy);
    strip.setPixelColor(i + 43, color);
    strip.setPixelColor(i + 44, energy);
    strip.setPixelColor(i + 45, color);

    strip.setPixelColor(i + 46, energy);
    strip.setPixelColor(i + 47, color);
    strip.setPixelColor(i + 48, energy);
    strip.setPixelColor(i + 49, black);
    strip.setPixelColor(i + 50, black);

    strip.setPixelColor(i + 51, black);
    strip.setPixelColor(i + 52, black);
    strip.setPixelColor(i + 53, black);
    strip.setPixelColor(i + 54, black);
    strip.setPixelColor(i + 55, black);
  } else if(n == 10){

    strip.setPixelColor(i + 1, black);
    strip.setPixelColor(i + 2, black);
    strip.setPixelColor(i + 3, black);
    strip.setPixelColor(i + 4, black);
    strip.setPixelColor(i + 5, black);

    strip.setPixelColor(i + 6, black);
    strip.setPixelColor(i + 7, black);
    strip.setPixelColor(i + 8, black);
    strip.setPixelColor(i + 9, black);
    strip.setPixelColor(i + 10, black);

    strip.setPixelColor(i + 11, black);
    strip.setPixelColor(i + 12, black);
    strip.setPixelColor(i + 13, black);
    strip.setPixelColor(i + 14, black);
    strip.setPixelColor(i + 15, black);

    strip.setPixelColor(i + 16, black);
    strip.setPixelColor(i + 17, black);
    strip.setPixelColor(i + 18, black);
    strip.setPixelColor(i + 19, black);
    strip.setPixelColor(i + 20, black);

    strip.setPixelColor(i + 21, black);
    strip.setPixelColor(i + 22, black);
    strip.setPixelColor(i + 23, black);
    strip.setPixelColor(i + 24, black);
    strip.setPixelColor(i + 25, black);

    strip.setPixelColor(i + 26, black);
    strip.setPixelColor(i + 27, black);
    strip.setPixelColor(i + 28, black);
    strip.setPixelColor(i + 29, black);
    strip.setPixelColor(i + 30, black);

    strip.setPixelColor(i + 31, black);
    strip.setPixelColor(i + 32, black);
    strip.setPixelColor(i + 33, black);
    strip.setPixelColor(i + 34, black);
    strip.setPixelColor(i + 35, black);

    strip.setPixelColor(i + 36, black);
    strip.setPixelColor(i + 37, black);
    strip.setPixelColor(i + 38, black);
    strip.setPixelColor(i + 39, black);
    strip.setPixelColor(i + 40, black);

    strip.setPixelColor(i + 41, black);
    strip.setPixelColor(i + 42, black);
    strip.setPixelColor(i + 43, black);
    strip.setPixelColor(i + 44, black);
    strip.setPixelColor(i + 45, black);

    strip.setPixelColor(i + 46, black);
    strip.setPixelColor(i + 47, black);
    strip.setPixelColor(i + 48, black);
    strip.setPixelColor(i + 49, black);
    strip.setPixelColor(i + 50, black);

    strip.setPixelColor(i + 51, black);
    strip.setPixelColor(i + 52, black);
    strip.setPixelColor(i + 53, black);
    strip.setPixelColor(i + 54, black);
    strip.setPixelColor(i + 55, black);
  } else if(n == 11){

    strip.setPixelColor(i + 1, black);
    strip.setPixelColor(i + 2, black);
    strip.setPixelColor(i + 3, black);
    strip.setPixelColor(i + 4, black);
    strip.setPixelColor(i + 5, black);

    strip.setPixelColor(i + 6, black);
    strip.setPixelColor(i + 7, black);
    strip.setPixelColor(i + 8, black);
    strip.setPixelColor(i + 9, color);
    strip.setPixelColor(i + 10, color);

    strip.setPixelColor(i + 11, color);
    strip.setPixelColor(i + 12, color);
    strip.setPixelColor(i + 13, color);
    strip.setPixelColor(i + 14, color);
    strip.setPixelColor(i + 15, color);

    strip.setPixelColor(i + 16, color);
    strip.setPixelColor(i + 17, color);
    strip.setPixelColor(i + 18, color);
    strip.setPixelColor(i + 19, color);
    strip.setPixelColor(i + 20, color);

    strip.setPixelColor(i + 21, color);
    strip.setPixelColor(i + 22, color);
    strip.setPixelColor(i + 23, color);
    strip.setPixelColor(i + 24, color);
    strip.setPixelColor(i + 25, color);

    strip.setPixelColor(i + 26, black);
    strip.setPixelColor(i + 27, black);
    strip.setPixelColor(i + 28, black);
    strip.setPixelColor(i + 29, black);
    strip.setPixelColor(i + 30, black);

    strip.setPixelColor(i + 31, black);
    strip.setPixelColor(i + 32, black);
    strip.setPixelColor(i + 33, color);
    strip.setPixelColor(i + 34, black);
    strip.setPixelColor(i + 35, black);

    strip.setPixelColor(i + 36, black);
    strip.setPixelColor(i + 37, black);
    strip.setPixelColor(i + 38, black);
    strip.setPixelColor(i + 39, black);
    strip.setPixelColor(i + 40, black);

    strip.setPixelColor(i + 41, black);
    strip.setPixelColor(i + 42, black);
    strip.setPixelColor(i + 43, black);
    strip.setPixelColor(i + 44, black);
    strip.setPixelColor(i + 45, black);

    strip.setPixelColor(i + 46, black);
    strip.setPixelColor(i + 47, black);
    strip.setPixelColor(i + 48, black);
    strip.setPixelColor(i + 49, color);
    strip.setPixelColor(i + 50, color);

    strip.setPixelColor(i + 51, color);
    strip.setPixelColor(i + 52, color);
    strip.setPixelColor(i + 53, color);
    strip.setPixelColor(i + 54, color);
    strip.setPixelColor(i + 55, color);
  }




  strip.show();
}