//
//  b1es3.cpp
//  b1es3
//
//  Created by Roberto Ceola on 27/10/2020.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int pos(int n, int i){      //restituisce il numero situato nella posizione indicata(i)
    int rest;
    int parz=n;
    int j=0;
    while(j<i){
        rest=parz%10;
        parz=parz/10;
        j++;
    }
    return rest;
}

int pal(int n){
    bool esito;
    int uno = pos(n, 1);
    int due = pos(n, 2);
    int quattro = pos(n, 4);
    int cinque = pos(n, 5);
    if(uno==cinque && due==quattro)
        esito= true;
    else
        esito= false;
    return esito;
}

int palq(int n){            //palindormo di lunghezza qualsiasi (non per forza 5)
    bool esito;
    int parz=n, nCifre;
    const int NMax=10;
    int a[NMax];
    int i=0;
    do {
            parz=parz/10;
            i++;
    } while (parz!=0);
    nCifre=i;
    for (int i=1; i<=nCifre; i++){
        a[i] = 0;
    }
    for (int i=1; i<=nCifre; i++){
        a[i]= pos(n, i);
    }
    if (nCifre%2==0){
        bool verPv=true, verPf=true;
        for(int i=1;i<=nCifre/2;i++){
            if(a[i]==a[nCifre +1 -i])
                verPv = true;
            else
                verPf = false;
        }
        esito= verPv && verPf;
    }
    else if(nCifre==1)
        esito= true;
    else{
        bool verPv=true, verPf=true;
        for(int i=1;i<=(nCifre-1)/2;i++){
            if(a[i]==a[nCifre +1 -i])
                verPv =true;
            else
                verPf = false;
        }
        esito= verPv && verPf;
    }
    return esito;
}

int main(int argc, const char * argv[]) {
    int n;
    cout<<"inserisci un numero intero: "<<endl;
    cin>>n;
    bool risultato;
    risultato = palq(n);
    if(risultato == true)
        cout<<"il numero è palindromo"<<endl;
    else
        cout<<"il numero non è palindromo"<<endl;
    return 0;
}
