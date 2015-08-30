#include<stdio.h>
void sort(int a[],int n,char ch);
void main()
{
	int a[20],n,i;
	char ch;
	printf("enter the size of the array:\n");
	scanf("%d",&n);
	printf(" enter the order of elements:\n");
	ch=getchar();
	printf("enter the array elements(two should be misplaced):\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	sort(a,n,ch);
	printf("the elements in correct order:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void sort(int a[],int n,char ch)

{
	int i,j,t1=0,t2=0;
	int * temp;
	if(ch=='a')
	{
	for(i=0;*(a+i);i++)
		{
			if(*(a+i)>*(a+i+1))
			{
				t1=i;
				break;
			}
		}
		for(i=n-1;i>t1;i--)
		{
			if(*(a+i)<*(a+i-1))
			{
				t2=i;
				break;
			}
		}

		temp = *(a+t1);
	*(a+t1)=*(a+t2);
	*(a+t2)=temp;
	}
	else
	{
		for(i=0;*(a+i);i++)
		{
			if(*(a+i)<*(a+i+1))
			{
				t1=i;
				break;
			}
		}
		for(i=n-1;i>t1;i--)
		{
			if(*(a+i)>*(a+i-1))
			{
				t2=i;
				break;
			}
		}

		temp = *(a+t1);
	*(a+t1)=*(a+t2);
	*(a+t2)=temp;
		
	}
}
