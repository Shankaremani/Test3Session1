#include <stdio.h>
#include <math.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numerator and denominator of first fraction\n");
  scanf("%d %d", num1, den1);
  printf("Enter the numerator and denominator of second fraction\n");
  scanf("%d %d", num2, den2);
}

void add(int num1, int den1, int num2, int den2, int *num3, int *den3)
{
  int smallest;
  *num3 = (num1*den2) + (num2*den1);
  *den3 = (den1*den2);
  if (*num3 > *den3)
  
    {
        smallest = *den3;
    }
      
    else 
    {
        smallest = *num3;
    }
  
    for (int i = smallest; i > 1; i--) 
    {

        if ((*num3 % i == 0) && (*den3 % i == 0)) 
        {

            *num3 = *num3 / i;
            *den3 = *den3 / i;

        }

    }
}

void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("The Sum of %d/%d and %d/%d is %d/%d", num1, den1, num2, den2, num3, den3);
}

int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}