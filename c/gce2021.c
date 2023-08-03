#include<stdio.h>
int main(){
  int i,j;
  int n,A[i][j];
  printf("Enter the value of n: \n");
  scanf("%d",&n);

  for(i = 0;i <= n; i++){
    for(j = 0;j <= i; j++){
      if(j==0 || j==i){
        A[i][j] = 1;
        printf("%d",A[i][j]);
      }
      else if(j!=0 && j!=i){
        A[i][j] = A[i-1][j-1] + A[i-1][j];
        printf("%d",A[i][j]);
      }
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}