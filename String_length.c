#include<stdio.h>
int strln(char a[],int choice);
void main()
{
	char a[30];
	int len,choice;
	printf("\n enter the string:");
	gets(a);
	printf("\n enter (1) if u want to count spaces else (2) if u want to ignore spaces:\n");
	scanf("%d",&choice);
	len =  strln(a,choice);
	printf("\n the string length is:%d",len);

}
int strln(char a[],int choice)
{
	int len = 0,i=0;
	while(a[i])
	{
		if (choice == 2)// do not count spaces
		{
		if(a[i] != ' ' && a[i] != '\t' )
		{
			len++;
			i++;
		}
		else
			i++;

		}
		else if(choice ==1)//count spaces also
		{
			len++;
			i++;
		}
		

	}
	return len;
	

}