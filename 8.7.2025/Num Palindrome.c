#include <stdio.h>
int main() {
    int n,o,r,rev=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    o=n;
    while(o!=0){
        r = o%10;
        rev = rev*10 +r;
        o = o/10;
    }
    if(rev == n){
        printf("It's a Palindrome.");
    } else{
        printf("It's not a Palindrome.");
    }
}
