#include<stdio.h>
int main()
{
    int i,j,n,option;
    printf("Enter dimension of pyramid: \n");
    scanf("%d",&n);
    printf("Options : \n1: Ascending \n2: Descending \n\n Enter your Option : \n");
    scanf("%d",&option);
    printf("\nDiagram : \n");
    switch(option)
    {
      for(i=1;i<=n;i++)
        {
            case 1:
            {
                for(j=1;j<=n;j++)
                   {
                       printf("*");
                   }
                printf("\n");
            }
            case 2:
            {
                for(j=n;j>=0;j++)
                   {
                     printf("*");
                   }
                printf("\n");
            }
        }    
    }
}