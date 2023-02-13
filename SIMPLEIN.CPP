#include<stdio.h>
int main()
{
  float principle, rate, time, SI;
  printf("Enter principle (amount): ");
  scanf("%", &principle);
  printf("Enter time: ");
  scanf("%f", &time);
  printf("Enter rate: ");
  scanf("%f",&rate);
  SI = (principle * time * rate) / 100;
  printf("Simple Interest = %f", SI);
  return 0;
}


