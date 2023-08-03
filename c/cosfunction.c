#include<stdio.h>
#include<math.h>

int fact(int n){
  if (n==0 || n==1){
    return 1;
  }
  else
  return n * fact(n-1);
  }
double cosine(double x){
float cos_value=0.0;
float pi = 3.14;
x = (x*pi)/180;
for(int i = 0;i<5;i++){
  cos_value += (pow(-1, i)*pow(x, 2*i ))/(fact( 2*i ));
}
return cos_value;
}


int main(){
  float angle;
  printf("enter angle: ");
  scanf("%f",&angle);
  printf("cos(%.1f)=%lf",angle,cosine(angle));
  return 0;
}