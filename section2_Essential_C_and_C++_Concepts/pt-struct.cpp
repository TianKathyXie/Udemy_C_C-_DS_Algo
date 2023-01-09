#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Rectangle{
    int length; 
    int breadth; 
};

int main() {
    Rectangle r = {10,5}; //in C++, we can skip "struct" when declared

    Rectangle *p = &r;
    cout << p->length << endl;
    cout << p->breadth << endl;

    //in heap
    struct Rectangle *p1; //C style
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1->length = 20;
    p1->breadth = 17;
    cout << p1->length << endl;
    cout << p1->breadth << endl;



    return 0;
}