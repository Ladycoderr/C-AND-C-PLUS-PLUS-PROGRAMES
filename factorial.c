#include <stdio.h>

//Compiler version gcc  6.3.0

int factorial(int num)
{
  long long fact=1;
  for(int i=1;i <= num;i++)
  {
    fact*=i;
  }
  return fact;
}

int main()
{
  
  printf("The factorial is %d",factorial(10));
  return 0;
}