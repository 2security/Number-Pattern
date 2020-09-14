#include<stdio.h>
#include<math.h>
int main()
	{
		int i,j,n,m,c,pv,fd;
		printf("Enter the value:");
		scanf("%d",&m);
		n=m;
		
		while(n>0)
			{
				printf("%d\n",n);
				c=log10(n);
				pv=pow(10,c);
				fd=(int)(n/pv);
				n=n-pv*fd;
			}
		
		printf("\n\n");
		return 0;
	}
	
	
	
