/*
 * C program read two number and caculator product of two number using recursion
 *
 * */


int mul(int x, int y) {
    
    if (y == 0) {
        return 0;
    }

    return  x *  mul(x, y-1);
    
}

#include <stdio.h>

int main() {
    

    int x = 5, y = 10;
    int result;

    result = mul(x, y);

    printf("Result of multipli two numbers: %d\n", result);
    return 0;
}
