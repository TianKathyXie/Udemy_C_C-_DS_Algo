#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;

    int b = 30;
    r = b; // deesn't make r reference of b. Assign the value of b to a&r

    cout << a << endl << r << endl;

    return 0;
}