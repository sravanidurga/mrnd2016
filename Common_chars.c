#include<stdio.h>
void common(char a[],char b[]);
void main()
{
	char a[20],b[20];
	printf("\n enter two strings:");
	gets(a);
	gets(b);
	common(a,b);

}
void common(char a[], char b[])
{
	char x[256]={0},y[256]={0};
	int i=0;
	while(a[i])
	{
		x[a[i]]++;
		i++;
	}
	i=0;
	while(b[i])
	{
		y[b[i]]++;
		i++;
	}
	i=0;
/*while(a[i])
	{
		if(x[a[i]] !=0&&y[a[i]]!=0)
		{
			printf("\n%c",a[i]);
			x[a[i]]=0;
			y[a[i]]=0;
			
		}
			i++;
	}*/

	for(i=0;i<256;i++)
		if(x[i]!=0&&y[i]!=0)
			printf("%c",i);
		

}


















