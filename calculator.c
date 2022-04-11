#include<stdio.h>
int main()
{
    int opt,a,b;
    while(1)
    {
        printf("\n[1]add [2]sub [3]multi [4]div \nEnter:");
        scanf("%i",&opt);
        printf("Enter the value of a:");
        scanf("%i",&a);
        printf("Enter the value of b:");
        scanf("%i",&b);
        if (opt==1)
            printf("The sum is : %i",a+b);
        else if (opt==2)
            printf("The sub is : %i",a-b);
        else if (opt==3)
            printf("The multi is : %i",a*b);
        else if (opt==4)
            printf("The Div is : %i",a/b);
        else
            printf("Invalid Entery");
      
    }
  return 1;
}
