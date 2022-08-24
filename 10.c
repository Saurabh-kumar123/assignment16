#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0,max=0,index;
    printf("entern  matrix\n\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {  
       for(j=0;j<3;j++)
       {
         if(a[i][j]==1)
         sum=sum+a[i][j];
       printf("%d\t",a[i][j]);
       }
       printf("\n\n");
       if(sum>max)
       {
       max=sum;
       index=i;
       }
       sum=0;
    }
    printf("maximum 1's is row  %d",index+1);
    return 0;
}
