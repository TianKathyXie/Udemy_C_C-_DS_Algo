#include <stdio.h>

int fun(int n) {
    static int x = 0;  //x is static and there is only one copy. Same result if x is global
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main() {
    int r;
    r = fun(5);
    printf("%d\n", r);
    return 0;
}
