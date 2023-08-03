#include<stdio.h>
#include<stdlib.h>
int conversion(int n){
    int i;
    int a[100];
    while(n>0){
    a[i] = n % 2;
    n = n/2;
    for(int i=i-1;i>=0;i--){
        printf("the binary equivalence is %d\n",conversion(n));
        }
}
return a[i];
}
int main(){
    printf("%d\n",conversion(10));
    return 0;
}
