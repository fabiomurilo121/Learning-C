//
// Created by Fabio-PC on 06/11/2020.
//
#include <stdio.h>

int determinedaycode(int year){
    int daycode;
    int d1, d2, d3;

    d1 = (year - 1.)/ 4.0;
    d2 = (year - 1.)/ 100.;
    d3 = (year - 1.)/ 400.;
    daycode = (year + d1 - d2 + d3) %7;
    return daycode;
}

int main(){
    printf("%d",determinedaycode(2018));
}