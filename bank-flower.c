/*
Desc: cost
author: vermilion10
date: november 2024
*/

#include<stdio.h>
int main(){
    float biaya_awal, persen_bunga, total_biaya;
    printf("input biaya awal: ");
    scanf("%f", &biaya_awal);
    printf("input persen bunga: ");
    scanf("%f", &persen_bunga);
    total_biaya = biaya_awal + (biaya_awal * persen_bunga / 100);
    printf("%.2f", total_biaya);
    return 0;
}
