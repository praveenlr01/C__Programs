#include<stdio.h>
#include<stdbool.h>
int main()
{
//arithmetic
    int i,j;
    printf("Enter the value of i: ");
    scanf("%i",&i);
    printf("Enter the value of j: ");
    scanf("%i",&j);
    printf("sum is %i",i+j);
    printf("\nsub is %i",i-j);
    printf("\nmul is %i",i*j);
    printf("\ndiv is %i",i/j);
//logical
    int l=i<j;
    printf("\n%i",l);
    int g=i>j;
    printf("\n%i",g);
    int le=i<=j;
    printf("\n%i",le);
    int ge=i>=j;
    printf("\n%i",ge);
    int eq=i==j;
    printf("\n%i",eq);
    int nq=i!=j;
    printf("\n%i",nq);
//logical
    bool and=i>j && j<i,or=i<j || i==j;
    printf("\n%i",and);
    printf("\n%i",or);
//assignment
    int ass=1;
    ass+=1;
    printf("\n%i",ass);
    ass-=1;
    printf("\n%i",ass);
    ass*=2;
    printf("\n%i",ass);
    ass/=2;
    printf("\n%i",ass);
    return 1;
}
