#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Rectangle{
    int length; 
    int breadth; 
};

void fun1(struct Rectangle r) {    //pass by values
    r.length = 20;
    cout << "Length " << r.length << endl << "Breadth " << r.breadth << endl;
}

void fun2(struct Rectangle *p) {    //pass by pointer
    p->length = 20;
    cout << "Length " << p->length << endl << "Breadth " << p->breadth << endl;
}

struct Rectangle *fun3() {
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 15;
    p->breadth = 7;
    return p;
}

int main() {
    struct Rectangle r = {10, 5};
    fun1(r);
    printf("Length %d \nBreadth %d \n", r.length, r.breadth);

    fun2(&r);
    printf("Length %d \nBreadth %d \n", r.length, r.breadth);

    struct Rectangle *ptr = fun3();
    cout << "Length " << ptr->length << endl << "Breadth " << ptr->breadth << endl;




    return 0;
}