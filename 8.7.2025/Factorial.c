#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact *i;
    }
    printf("Factorial of %d is %d", n,fact);
}
