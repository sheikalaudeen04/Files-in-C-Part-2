#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<2*n-1;i+=1)
	{
		for(j=0;j<2*n-1;j+=1)
		{
			
			if (j==i || j==2*n-2-i)
				printf("%d",n-i);
			else if (j==2*n-1||j==0|| i==0)
				printf("%d",n);
			else	
			printf(" ");
		}
		printf("\n");
	}
}
