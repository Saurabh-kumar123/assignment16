#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("entern  matrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("matric\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
       if(i==j)
       sum=sum+a[i][j];
       printf("%d   ",a[i][j]);
       }
       printf("\n");
    }
    printf("sum of right diagonal matric is %d",sum);
    return 0;
}