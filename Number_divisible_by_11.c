#include<stdio.h>
#include<math.h>
void main()
{
	int n,m;
	printf("enter the number:");
	scanf("%d",&n);
	 m = div(n);
	 if(m==1)
		 printf("\ndivisible by n");
	 else
		 printf("\nnot divisible by n");
}
int div(int n)
{
	int r,m=0,s,i=0,os = 0,es=0;
	s=n;
	while(n)
	{
		r = n%10;
		if(i==0)
		{
			es +=r;
			i++;
		}
		else if(i==1)
		{
			os +=r;
			i--;
		}
			
		n=n/10;
		
	}
	if(os-es !=0)
	{
		n=abs(os-es);
		if(n>11)
			m=div(n);
		return m;
	}
	else
		return 1;
	return 0;
}
