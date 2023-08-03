#include<stdio.h>
int main(){
  int array[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  printf("the elements of the array are:\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("array[%d][%d]=%d\n",i,j,array[i][j]);
    }
  }

}