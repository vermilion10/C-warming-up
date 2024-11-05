/*
desc: display a series of numbers from x to y
author: vermilion10
date: November 2024
*/
#include<stdio.h>
int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    for(int i = X; i <= Y; i++){
        printf("%d", i);
        if (i < Y){
            printf(" ");
        }
    }
    return 0;
}
