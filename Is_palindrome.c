#include<stdio.h>
int palindrome( char a[]);
void main()
{
	char a[20];
	int m;
	printf(" \nenter the string:");
		gets(a);
	 m = palindrome(a);
	if(m==1)
		printf("palindrome");
	else
		printf("not a palindrome");
}
int palindrome(char a[])
{
	int p=0,q=0;
	int i=0;
	while(a[i]!='\0')
		i++;
	q=i-1;
	while(p<=q)
	{
		if(*(a+p)==*(a+q))
		{
			p++;q--;

		}
		else
			return 0;
	}
	return 1;

}