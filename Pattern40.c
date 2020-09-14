#include<stdio.h>
int main()
	{
		int i,j,n,c=1;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
				if(i%2==1)
					{
						for(j=1;j<=2*i-1;j=j+2) 
							printf("%d",j);
					}
				else
					{
						for(j=2;j<=2*i;j=j+2)	
							printf("%d",j);
					}
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
