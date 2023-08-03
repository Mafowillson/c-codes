#include<stdio.h>
int main(){
    int A[5];
    A[0] = 'j';
    A[1] = 'a';
    A[2] = 'm';
    A[3] = 'e';
    A[4] = 's';
    A[5] = '\0'
    for(int i=5;i>=0;i--){
        printf("%c",A[i]);
    }
}