#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("entern  matrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("matric\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
        b[j][i]=a[i][j];
       printf("%d   ",a[i][j]);
       }
       printf("\n");
    }
      printf("tanpose matric\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       printf("%d   ",a[j][i]);
       printf("\n");
    }
    return 0;
}