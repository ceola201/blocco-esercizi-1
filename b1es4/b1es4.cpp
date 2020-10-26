//
//  main.cpp
//  b1es4
//
//  Created by Roberto Ceola on 24/10/2020.
//SUP che stampa senza sosta i multipli di due. Quindi 2, 4, 8, 16, eccetera. Il loop è infinito. Cosa succede e perché?

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long long i=0, j=0, stampa=1;
    while (i>=j){
        stampa *= 2;
        cout <<stampa<<endl;
        i++;
    }
    return 0;
}
