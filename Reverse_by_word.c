#include<stdio.h>
void reversewords(char a[]);
void reverse(char a[],int i,int j);
void main()
{
	char a[100];int i=0;
	printf("\nenter the sentence:");
	gets(a);
	reversewords(a);
	for(i=0;a[i];i++)
		printf("%c",a[i]);

}
void reversewords(char a[])
{
	int i=0,j=0;
	for(i=0;a[i];i++)
	{
		if(a[i]==' '||a[i+1]=='\0')
		{
			if(a[i]==' ')
			{
					reverse(a,i-1,j);
					j=i+1;
			}
			else
			{
				reverse(a,i,j);
				j=i+1;
			}

		}
	}
	reverse(a,i-1,0);
}
void reverse(char a[],int i,int j)
{
	while(j<=i)
	{
	char *temp;
	temp = *(a+i);
	*(a+i)=*(a+j);
	*(a+j)=temp;
	j++;i--;
	}
}