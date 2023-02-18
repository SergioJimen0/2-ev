#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Este programa genera una matriz 3x3 rellena de
//numeros enteros entre el 0 y el 9 con repeticion
using namespace std;

int main(){
    long semillita;
    int filas,col;
    int *matriz[3]
    
    
    
    
    semillita = time(0);
    srand(semillita);
    for(filas=0;filas<3;filas++){
        //reservamos memoria para las filas
        matriz[filas]=(int *) malloc(3*sizeof(int));
        for(col=0;col<3;col++){
            *(matriz+filas)+col= rand()%100

        }
    }
    return 0;
}