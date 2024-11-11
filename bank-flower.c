/*
Desc: cost
author: vermilion10
date: november 2024
*/

#include<stdio.h>
int main(){
    float biaya_awal, persen_bunga, total_biaya;
    scanf("%f %f", &biaya_awal, &persen_bunga);
    total_biaya = biaya_awal + (biaya_awal * persen_bunga / 100);
    printf("%.2f", total_biaya);
    return 0;
}
