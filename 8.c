#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("entern  matrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("upper trangular matric\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
       if(i>j)
       a[i][j]=0;
       printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
    return 0;
}