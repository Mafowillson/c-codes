#include<stdio.h>
#include<stdlib.h>

int main(){
  int d,e,i,j;
  int a[d][e], b[d][e], c[d][e];
  printf("Enter the number of rows and columns of the matrix:\n");
  scanf("%d%d\n",&d,&e);
  if(d == e){
  printf("Enter the first matrix:\n");
  for(i=0;i<d;i++){
    for(j=0;j<e;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the second matrix:\n");
  for(i=0;i<d;i++){
    for(j=0;j<e;j++){
      scanf("%d",&b[i][j]);
    }
  }
  //addition of the two matrix
  printf("The resultant matrix is:\n");
  for(i=0;i<d;i++){
    for(j=0;j<e;j++){
  c[i][j] = a[i][j] + b[i][j];
    }
  }
  //displays the matrix after addition
  for(i=0;i<d;i++){
    for(j=0;j<e;j++){
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }
  }
  else{
    printf("Error the number of rows and columns1 are not equal");
  }
  return 0;
}