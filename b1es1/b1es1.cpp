//
//  b1es1.cpp
//  b1es1
//
//  created by Roberto Ceola on 29/10/2020.
//
// SUP che si fa dare due numeri interi x e y e calcola x^y. Fare due versioni, una che per il loop interno usa {for}, l'altra che usa {while}. Non usare {pow()}, questo perché se andate a leggere la documentazione, vedrete che prende in ingresso due {double}, significa quindi che al suo interno non compie un elevamento a potenza tra interi, ma tra numeri reali. Pur permettendoci di ottenere lo stesso risultato, questo implica che l'esecuzione sarà ben più lenta e inoltre potremmo imbatterci in errori numerici.

#include <iostream>
using namespace std;

int pf(int x, int y){       //potenza con cilco for
    int potenza= 1;
    for(int i=0; i<y; ++i){
        potenza *= x;
    }
    return potenza;
}

int pw(int x, int y){       //potenza con ciclo while
    int i=0;
    int potenza =1;
    while (i<y){
        potenza *= x;
        i++;
    }
    return potenza;
}

int main(int argc, const char * argv[]) {
    int x, y;
    cout<< "inserisci la base: "<<endl; cin>> x;
    cout<< "inserisci l'esponente: "<<endl; cin>>y;
    cout<< "il risultato è: "<< pw(x, y)<<endl;
    return 0;
}

