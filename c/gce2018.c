#include<stdio.h>
#include<stdbool.h>
int main(){
  char name[5],member_ship;
  int amount_needed,life_of_loan;
  float interest,total_amount;
  int amount_avalaible = 60000000;

  printf("Enter the fon's name: \n");
  scanf("%s",&name);
  printf("Enter your membership(true or false): \n");
  scanf("%s",&member_ship);
  printf("Enter the amount need: \n");
  scanf("%d",&amount_needed);
  printf("Enter your lift of loan: \n");
  scanf("%d",&life_of_loan);
  if(amount_avalaible >= amount_needed){
      if(member_ship == true){
        interest = 0.04 * life_of_loan * amount_needed;
      }
      else if(member_ship == false){
        interest = 0.06 * life_of_loan * amount_needed;
              }
      total_amount = amount_needed + interest;
      printf("The total amount is = %.2f",total_amount);
  }
  else{
    printf("Amount in account avalaible not sufficient");
  }
  return 0;
}