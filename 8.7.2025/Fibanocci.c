#include <stdio.h>
int main() {
    int n,t1 =0,t2=1,u;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d",t1);
        u = t1+t2;
        t1=t2;
        t2=u;
    }
    return 0;
}
