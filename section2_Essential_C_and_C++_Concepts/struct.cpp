//
//  main.cpp
//  Udemy_C_C++_DS_Algo
//
//  Created by 谢天 on 1/6/23.
//
#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle{
    int length; //4 bytes
    int breadth; //4 bytes
    char x; //only need 1 byte, but will allocate 4 bytes because easierto handle. This is called padding
};

int main(int argc, const char * argv[]) {
    struct Rectangle r1;
    
    struct Rectangle r2 = {10,5,'a'};
    
    printf("%lu\n", sizeof(r1)); //input 12
    
    r2.length = 15;
    r2.breadth = 7;
    
    cout << r2.length << endl;
    cout << r2.breadth << endl;
    
    return 0;
}
