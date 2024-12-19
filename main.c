#include<stdio.h>

int main(void)
{
  char a[50];
  char b[50];
  printf("name: ");
  scanf("%s",&a);
  printf("age: ");
  scanf("%s",&b);
  printf("name: %s | age: %s\n",a,b);
}
