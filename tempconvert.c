/*
desc: temprature conversion from celcius to fahrenheit
author: vermilion10
date: november 2024
*/
#include <stdio.h>
#include <math.h>
int main(){
  float celcius, fahrenheit;
  printf("Enter the temperature in celcius: ");
  scanf("%f", &celcius);
  fahrenheit = (celcius * 9/5) + 32;
  printf("The temperature in fahrenheit is: %.2f", fahrenheit);
  return 0;
}
