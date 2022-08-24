#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0,sim=0;
    printf("entern  matrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {  
       for(j=0;j<3;j++)
       {
       sum=sum+a[i][j];
       printf("%d\t",a[i][j]);
       }
       printf("->  %d",sum);
       printf("\n");
       sum=0;
       printf("\n");
    }
    for(i=0;i<3;i++)
    {  
       for(j=0;j<3;j++)
       {
        sim=sim+a[j][i];
       }
       printf("%d\t",sim);
       sim=0;
    }
    return 0;
}
