/*
desc: temprature conversion from celcius to fahrenheit
author: vermilion10
date: november 2024
*/
#include <stdio.h>
#include <math.h>
int main(){
  float celcius, fahrenheit;
  scanf("%f", celcius);
  fahrenheit = (celcius * 9/5) + 32;
  printf("%.2f", fahrenheit);
  return 0;
}
