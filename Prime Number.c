//program for prime numbers
#include<stdio.h>
int main()
{
	int i=2,n,flag=0;
	printf("Enter a Number: \n");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
			printf("Not Prime");
			flag=1;
			break;
		}
		i++;
	}	
 	if (flag==0);
	{
		printf("Prime");
	}
  
}
