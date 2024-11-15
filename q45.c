#include<stdio.h>
#define R1 2
#define C1 4
#define R2 4
#define C2 3
#define UNFEASIBLE printf("The matric multiplcation is not possible");
int main()
{
    if(C1 != R2)
    {
        UNFEASIBLE
    }
    else
    {

    int a[R1][C1],b[R2][C2],c[R1][C2];
    int i,j,k;
    for(i=0;i<R1;i++) 
    {
        for(j=0;j<C1;j++) 
        {
            printf("Enter value for a[%d][%d]:",i,j);
            scanf("%d", &a[i][j]);
        }
    }   

    for(i=0;i<R1;i++) 
    {
        printf("\n");
        for(j=0;j<C1;j++) 
        { 
            printf("%d ",a[i][j]);
        }  
    }  
printf("\n");
    for(i=0;i<R2;i++) 
    {
        for(j=0;j<C2;j++) 
        {
            printf("Enter value for b[%d][%d]:",i,j);
            scanf("%d", &b[i][j]);
        }
    }   
    for(i=0;i<R2;i++) 
    {
        printf("\n");
        for(j=0;j<C2;j++) 
        {
            printf("%d ",b[i][j]);
        }   
    }   
    printf("\nThe Product matrix obtained is given below:\n");
    for(i=0;i<R1;i++)
    {
        for(j=0;j<C2;j++)
        {
            c[i][j]=0;
            for(k=0;k<R2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    }
return 0;
}
