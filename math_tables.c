#include<stdio.h>
int main()
{
    int a,i=1;
    while(1)
    {
        printf("Enter the number : ");
        scanf("%i",&a);
        while(i<=20)
        {
            printf("%i * %i = %i\n",a,i,a*i);
            i++;
        }
    }
    return 1;
}
