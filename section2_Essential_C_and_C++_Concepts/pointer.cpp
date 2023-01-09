//
//  pointer.cpp
//  Udemy_C_C++_DS_Algo
//
//  Created by 谢天 on 1/9/23.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Rectangle{
    int length; 
    int breadth; 
};

int main(){
    //part 1 - pointer and integer
   /* int a = 10;
    int *p;
    p = &a;

    cout << a << endl;
    printf("using pointer %d %d %d ", *p, p, &a);*/

    //part 2 - pointer and array
   /* int A[5] = {2, 4, 6, 8, 10};
    int *p;
    p = A;
    //p1 = &A[0]; //also correct

    for(int i = 0; i<5; i++) 
    cout << p[i] << endl;
    */

    //part 3 - pointer and heap
/*    int *p;
    //p = (int *)malloc(5*sizeof(int)); //C language
    p = new int[5]; //C++
    p[0] = 10; p[1] = 13; p[2] = 16; p[3] = 29; p[4] = 16;

    for(int i = 0; i<5; i++) 
    cout << p[i] << endl;

    //delete when finish using after dynamic allocating
    //free(p); //C language
    delete []p; //C++  */

    //part 4 - 
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    //They are all 8 bytes because 64-bit machine produces pointers with 8 bytes(64 bits)
    



    return 0;

}


