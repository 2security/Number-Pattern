#include<stdio.h>
int main()
	{
		int i,j,n,c;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=n;i>=1;i--)
			{
				c=i;
				for(j=1;j<=i;j++) 
					{
						printf("%d",c++);
					}
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
