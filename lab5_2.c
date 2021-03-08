#include<stdio.h>
int main()
{
    int num,i,j;
    scanf("%d",&num);

    if(num%2==0)
    {
        num=num-1;
    }
    for(i=0; i<num/2; i++)
    {
        for(j=0; j<num; j++)
        {
            if(j==(num/2)+i)
            {
                printf("*");
            }
            else if(j==(num/2)-i)
            {
                printf("*");
            }
            else
                printf("_");
        }
        printf("\n");

    }
    for(i=0; i<num/2+1; i++)
    {

        for(j=0; j<num; j++)
        {
            if(j==num-i-1)
            {
                printf("*");
            }
            else if(j==i)
            {
                printf("*");
            }
            else
                printf("_");
        }
        printf("\n");

    }
}
