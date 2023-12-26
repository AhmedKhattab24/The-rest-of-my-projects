#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age;
printf("Enter the age:\n");
scanf("%i",&age);
if (age>=18)
   {
    printf("you are adlt");
   }
    else if(age<18&&age>13)
    {
    printf("you are teenager");
    }
   else
   {
    printf("you are kids");
   }
    return 0;
}
