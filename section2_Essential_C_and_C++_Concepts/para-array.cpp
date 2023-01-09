#include <iostream>
using namespace std;

//only use address(pointer) as parameter to pass

void fun(int A[]){
    cout << sizeof(A)/sizeof(int) << endl;//sizeof(A) gives the size of a pointer
}

void fun1(int *A, int n){  //ususally pass array's size as a parameter
    for(int i = 0; i<n; i++)
    cout << A[i] << " ";
    cout << endl;
}

int * fun2(int size){  //return type is an int pointer, can represent an array
    int *p;
    p = new int[size];

    for(int i = 0; i<size; i++){
        p[i] = i+1;
    }
    return p;
}

int main() {
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;
    fun(A);
    cout << sizeof(A)/sizeof(int) << endl;//sizeof(A) gives the size of an integer array

    fun1(A, n);

    int *ptr, sz = 5;
    ptr = fun2(sz);
    for(int i = 0; i<sz; i++){
        cout << ptr[i]<< endl;
    }

    return 0;
}