//
//  main.cpp
//  b1es5
//
//  Created by Roberto Ceola on 26/10/2020.
//Il fattoriale di un numero non-negativo n si scrive n!. Ed è definito come segue:
//n! = n *(n - 1) * (n - 2) * (n - 3) .....*1
//Se n==0 allora 0! = 1.
//SUP che legge un numero non-negativo e calcolarne il fattoriale. Fino a che numero si ottengono risultati corretti? Controllare che l'utente inserisca un numero adeguato e in caso contrario scrivere un messaggio e terminare l'esecuzione.

#include <iostream>
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
    cout<<"inserisci un numero non negativo"<<endl;
    cin>>x;
    if(x>25)
        cout<<"il numero inserito è troppo grande"<<endl;
    else if(x==0){
        cout<<"il fattoriale è 1"<<endl;
    }
    else if(x<0)
        cout<<"hai inserito un numero negativo!"<<endl;
    else
        cout << "il fattoriale è "<< f(x) <<endl;
    return 0;
}
