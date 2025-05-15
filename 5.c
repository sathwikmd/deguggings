#include <stdio.h>

int main() {
  int age;
  printf("enter the age:\n");
  scanf("%d",&age);
  if(age>=18)
  {
      printf("will be able to vote");
  }
  else
  {
      printf("not able to vote");
  }
  return 0;
  
}
