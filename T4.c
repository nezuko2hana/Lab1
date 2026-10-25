#include <stdio.h>

int main (){
    float amount,discount,finalAmount;
    scanf("%f", &amount);
  if (amount > 5000)
  {
    discount=amount * 0.20;
  }
  else if (amount>2000){
    discount=amount * 0.10;
  }
  else {
    discount=0;
  }
  finalAmount= amount - discount;
  printf ("Final Amount : %f\n", finalAmount);
  return 0;
}
