#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("entern 1 st matrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("entern 2 st matrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    printf("1 st matric\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       printf("%d   ",a[i][j]);
       printf("\n");
    }
      printf("2 nd matric\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       printf("%d   ",b[i][j]);
       printf("\n");
    }
    printf("product matric\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        for(k=0;k<3;k++)
            sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
            printf("%d\t",c[i][j]);
            sum=0;
        }
            printf("\n");
    }
    return 0;
}