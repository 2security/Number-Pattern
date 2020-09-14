#include<stdio.h>
int main()
	{
		int i,j,n,c;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++) 
					{
						if(i%2==0)
							printf("0");
						else
							printf("1");
					}
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
