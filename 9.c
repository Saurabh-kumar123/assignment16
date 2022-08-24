#include<stdio.h>
int main()
{
    int a[3][3],i,j,count=0;
    printf("entern  matrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
       if(a[i][j]==0)
          count++;
       printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
    if(count>9/2)
     printf("this matrix is sparse matrix");
    else
     printf("this matrix is not sparse matrix");
    return 0;
}
