//C Program to calculate subtraction of two numbers..

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a, b, sub;
  
  printf("Enter two numbers :\n");
  scanf("%d %d", &a, &b);
  
  sub = a - b;
  printf("Subtraction of two numbers is :", sub);
  
  return 0;
}
