/*
desc: display a series of numbers from x to y
author: vermilion10
date: November 2024
*/
#include<stdio.h>
int main(){
    int X, Y;
    printf("input X: ");
    scanf("%d", &X);
    printf("input Y: ");
    scanf("%d", &Y);
    for(int i = X; i <= Y; i++){
        printf("%d", i);
        if (i < Y){
            printf(" ");
        }
    }
    return 0;
}
