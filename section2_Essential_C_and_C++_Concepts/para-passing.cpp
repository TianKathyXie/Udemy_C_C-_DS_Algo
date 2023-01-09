#include <iostream>
using namespace std;
void swap1(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap3(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    //para by value
    //won't swap successfully
    int num1 = 10, num2 = 15;
    swap1(num1, num2);
    cout << num1 << " " << num2 << endl;

    //para by address, when you want to modify the value of parameters
    swap2(&num1, &num2);
    cout << num1 << " " << num2 << endl;

    //para by reference
    //It may become an inline function, supported by C++
    swap3(num1, num2);
    cout << num1 << " " << num2 << endl;
}