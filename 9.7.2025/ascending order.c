#include <stdio.h>
int main() {
    int n[10],t;
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++){
        printf("Number %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(n[i]>n[j]){
                t=n[i];
                n[i]=n[j];
                n[j]=t;
            }
        }
    }
    printf("Numbers in ascending order:");
    for(int i=0;i<=10;i++){
        printf("%d ",n[i]);
    }
    printf("\nNumbers in Descending Order:");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", n[i]);
    }
}
