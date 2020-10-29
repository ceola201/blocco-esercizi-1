//
//  b1es5.cpp
//  b1es5
//
//  Created by Roberto Ceola on 27/10/2020.
//


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
