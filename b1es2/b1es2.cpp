//
//  b1es2.cpp
//  b1es2
//
//  Created by Roberto Ceola on 29/10/2020.
//

#include <iostream>
using namespace std;

int pos(int n, int i){
    int rest;
    int parz=n;
    int j=1;
    rest= n%10;
    if(i==1)
        rest=n%10;
    else{
        while(j<i){
            parz=parz/10;
            rest=parz%10;
            j++;
        }
    }
    return rest;
}

int main(int argc, const char * argv[]) {
    int n,i;
    cout<< "inserisci il numero(intero) e l'indice"<<endl;
    cin>> n >> i;
    cout<<"la cira cercata è: "<< pos(n, i)<<endl;
    return 0;
}
