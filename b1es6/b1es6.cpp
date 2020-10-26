//
//  main.cpp
//  b1es6
//
//  Created by Roberto Ceola on 26/10/2020.
//  SUP che prende in ingresso un intero e calcola il valore della costante di eulero "e" con la seguente formula:
/*e = 1 + 1\1! +1 \2! + 1\3! + .....
Usare il valore in ingresso per quanto a fondo esplorare la progressione. Confrontare il valore con la funzione {exp()} presente in {math.h} con argomento 1. . Quante iterazioni sono necessarie per far scendere l'errore sotto ai millesimi?*/


#include <iostream>
#include <math.h>
using namespace std;

long long f(int x){
    long long r=1;
    for(int i=0;i<x;i++){
        r*= (x-i);
    }
    return r;
}


int main(int argc, const char * argv[]) {
    int x;
    long long e=0, Den;
    cout<<"inserisci il numero"<<endl;
    cin>>x;
    for(int i=0;i<=x;i++){
        Den= f(i);
        e += 1/Den;
    }
    cout << e<<endl;
    cout << exp(1) <<endl;
    return 0;
}
