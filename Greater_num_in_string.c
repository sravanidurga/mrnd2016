#include<stdio.h>
#include<conio.h>
int largst(char[],char[]);
int lar(char [] ,char [] ,int ,int);
void main()
{
	char a[20], b[20];
	int m,i;
	printf(" Enter the two numbers:\n");
	scanf("%s%s",a,b); 
	printf(" the two numbers are:%s,%s\n",a,b);
	 m = largst(a,b);
	 if(m==1)
		 printf("the Largest number is %s \n",a);
	 else if (m==2)
		 printf("the Largest number is %s \n",b);
	 else if(m==0)
		 printf("Both the numbers are equal....\n");
	
}
int largst(char a[], char b[])
{
	int i=0,j=0,k=0 ,c1=0,c2=0;
	while(a[i]=='0')
	{
		j++;
		i++;
	}

	i=0;
	
	while(b[i]=='0')
	{
		i++;
		k++;
	}

	for(i=j;a[i];i++)
		c1++;
	for(i=k;b[i];i++)
		c2++;

	if(c1>c2)
		return 1;
	else if(c2>c1)
		return 2;
	else
		lar(a,b,j,k);
}
int lar(char a[],char b[],int j,int k)
{
	
	while(a[j])
	{		
		if(a[j]>b[k])
		{
			return 1;
		
		}
		else if(b[k]>a[j])
		{

			return 2;
		}
		k++;
		j++;
	}
	return 0;
}