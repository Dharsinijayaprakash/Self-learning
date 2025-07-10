#include <stdio.h>
int main() {
    int a[5],sum = 0,n;
    n=sizeof(a)/sizeof(a[0]);
    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum = sum+a[i];
    }
    printf("Sum of elements: %d",sum);
    return 0;
}
