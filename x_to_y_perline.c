/*
desc: display a series of numbers from x to y perline
author: vermilion10
date: november 2024
*/
#include <stdio.h>
int main(){
  int X, Y;
  scanf("%d %d", &X, &Y);
  for(int i = X, i <= Y, i++){
    printf("%d\n", i);
  }
  return 0;
}
