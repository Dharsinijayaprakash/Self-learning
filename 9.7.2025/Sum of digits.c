1. Sum of two digits
#include <stdio.h>
int main() {
    int n,sum = 0, d;
    printf("enter a two digit number:");
    scanf("%d", &n);
    while(n != 0){
        d = n % 10;
        sum = sum + d;
        n = n/10;
    }
    printf("Sum of digits is %d\n",sum);
    return 0;
}

2. sum of 5 digits
#include <stdio.h>
int main() {
    int n,sum = 0, d;
    printf("enter a five digit number:");
    scanf("%d", &n);
    while(n != 0){
        d = n % 10;
        sum = sum + d;
        n = n/10;
    }
    printf("Sum of digits is %d\n",sum);
    return 0;
}

3.sum of any digits
#include <stdio.h>
int main() {
    int n,sum = 0, d;
    printf("enter a any digit number:");
    scanf("%d", &n);
    while(n != 0){
        d = n % 10;
        sum = sum + d;
        n = n/10;
    }
    printf("Sum of digits is %d\n",sum);
    return 0;
}
