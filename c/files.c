#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j;
    FILE* fptr;
    fptr = fopen("multiplication.txt","w+");
    if(fptr!=NULL){
        while (i<13){
            for(j=1;j<=i;j++){
        fprintf(fptr,"%d*%d=%d\n",i,j,i*j);
            }
        }
    }
    else{
        printf("file open unsucessful");
    }
    fclose(fptr);
    return 0;
}