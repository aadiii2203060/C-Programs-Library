// Factorial using recursion 
#include <stdio.h>

long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %ld\n", num, factorial(num));
    return 0;
}
