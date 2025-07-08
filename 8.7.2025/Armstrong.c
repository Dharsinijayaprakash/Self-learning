#include <stdio.h>

int main() {
    int n,o,r,res;
    printf("Enter a number:\n");
    scanf("%d",&n);
    o=n;
    while(o!=0){
        r = o%10;
        res = res+(r*r*r);
        o = o/10;
    }
    if(res == n){
        printf("It's Armstrong number.");
    } else{
         printf("It's not a Armstrong number.");
    }
}
