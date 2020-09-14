#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,n,c=0;
		printf("Enter the value:");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
			{
				for(j=1;j<=pow(2,i);j++)
				{
					c++;
					if(c>=10)
						c=1;
					printf("%d",c);
				}
				printf("\n");
			}
		printf("\n\n");
		return 0;
	}
