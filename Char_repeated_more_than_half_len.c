#include<stdio.h>
int repeat(char a[]);
void main()
{
	char a[20];
	int r;
	printf("\n enter the string:");
	gets(a);
	r=repeat(a);
	if(r !=-1)
		printf("\n the charecter repeated is:%c",a[r]);
	else
		printf("\nno charecter");
	
}
int repeat(char a[])
{
	int b[256]={0},count=0;
	int i;
	for(i=0;a[i];i++)
	{
		count++;
		b[a[i]]++;
		
	}
	for(i=0;a[i];i++)
	if(b[a[i]] >=( count/2))
			return i;
	return -1;
}