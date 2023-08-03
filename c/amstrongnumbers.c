/*an amstrong numbers is an inter whose digits raised to the power 3
is equal to the number itself.*/
#include<stdio.h>
int main(){
int n,n1;
int result=0,rem;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    n1=n;
    while(n1 != 0){
        rem = n1 % 10;
        result += rem*rem*rem;
        n1 = n1 / 10;
    }
    if(result == n)
    printf("\n%d is an amstrong number\n",n);
    else
    printf("%d is not an amstrong number",n);
return 0;
}