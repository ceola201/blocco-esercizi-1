//
//  b1es4.cpp
//  b1es4
//
//  Created by Roberto Ceola on 27/10/2020.
//

#include "b1es4.hpp"
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
