#include<stdio.h>
int klast(char [],int );
void main()
{
	char a[20];
	int k,ch;
	printf("Enter the string:\n");
	scanf("%s",a);
	printf("Enter the k(the position from last) value:\n");
	scanf("%d",&k);
	 ch=klast(a,k);
	 printf("the %d last charecter is %c\n",k,a[ch]);

}
int klast(char a[],int k)
{
	int r=k,j=0;
	int i=0;
	while(*(a+i))
	{
		while(*(a+r)!='\0')
		{
			j++;
			r++;
			i=r-1;
		}

		i++;
	}
	return j;
}