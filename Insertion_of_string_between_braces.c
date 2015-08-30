#include<stdio.h>
int balparanthesis(char a[]);
void stringins(char a[],char b[]);
int length (char a[]);
void main()
{
	char x[20],y[20];
	int m,n,i=0;
	printf("\n enter two strings:\n");
	gets(x);
	gets(y);
	m = balparanthesis(x);
	n=balparanthesis(y);
	if(m!=-1 && n!= -1)
	{
		printf("\n Okay.......");
		stringins(x,y);
		while(x[i])
		{
			printf("%c",x[i]);
			i++;
		}
		
	}
	else
	{	
		if(m==-1)
		printf("\n m  Incorrect Syntax .....");
		if(n==-1)
			printf("\n n   incorrect syntax");
		return;
	}
}

int balparanthesis( char a[])
{
	int i=0,j=0;
	char b[20];
	while(a[i])
	{
		if(a[i]=='{'||a[i] == '[' ||a[i] == '<' || a[i] == '(')
			b[j++] = a[i++];
		else
			i++;
		
	}
	i=0;
	while(a[i])
	{
		if(a[i]==']' || a[i] == '}' || a[i] == ')' || a[i] == '>')
			break;
		else
			i++;
	}
	j=j-1;
	
	
	while(j>=0&&a[i]!='\0')
	{
		if(a[i] == '}' && b[j] == '{' || a[i] == ']' && b[j] == '[' || a[i] == '>' && b[j] == '<' || a[i] == ')'&&b[j]=='(')
		{
			j--;
			i++;

		}
		else if(j >= 0)
			return -1;
		else
			i++;
	}
	return 1;
	


}
void stringins(char a[], char b[])
{
	int i=0,n,m,j,k=0;
	n=length(b);
	m=n;
	while(a[i])
	{
		if(a[i]==']' || a[i] == '}' || a[i] == ')' || a[i] == '>')
			break;
		else
			i++;
	}
	j=i;
	while(m)
	{
		*(a+n+j)=*(a+j);
		j++;
		m--;
	}
	*(a+n+j)='\0';
	while(b[k])
	{
		*(a+i)=*(b+k);
		k++;
		i++;
	}
	
}
int length (char a[])
{
	int i=0,count=0;
	while(a[i])
	{
		count++;
		i++;
	
	}
	return count;
}