#include<stdio.h>
int main()
{
    printf("\"Welcome to abc college\"");
    printf("[1]for student [2]for staff \nEnter: ");
    int i_1;
    scanf("%i",&i_1);
    if (i_1==1)
    {
        int i_2;
        printf("[1]engineering [2]arts \nEnter:");
        scanf("%i",&i_2);
        if (i_2==1)
        {
            printf("[1]for mech [2]civil \nEnter: ");
            int i_3;
            scanf("%i",&i_3);
            if (i_3==1)
            {
                printf("mech database is boys:35 and girls:25");
            }
            else if (i_3==2)
            {
                printf("civil database is boys:40 and girls:30");
            }
            else
            {
                printf("Invalid Entery");

            }
        }
        else if (i_2==2)
        {
            printf("[1]physics [2]maths \nEnter: ");
            int i_4;
            scanf("%i",&i_4);
            if (i_4==1)
            {
                printf("physics database is boys:40 and girls:0");
            }
            else if (i_4==2)
            {
                printf("maths database is boys:45 and girls:30");
            }
        }
        
    }
    else if (i_1==2)
    {
        printf("welcom to staff database");
    }
    else
    {
        printf("Invalid Entery");
    }
}
