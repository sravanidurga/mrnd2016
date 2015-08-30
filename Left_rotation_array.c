#include<stdio.h>
#include<conio.h>
void rol(int[],int ,int);
void main()
{
	int a[20],n,i,r;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	printf(" The array elements before rotation are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("Enter the no of rotations u want to make:\n");
	scanf("%d",&r);
	rol(a,n,r);
	printf("The array after performing %d rotations is as follows: \n ",r);
	for(i=0;i<n;i++)
			printf("%d\t",a[i]);
}
void rol(int a[],int n,int r)
{
	int temp,i,t,e=n-1;
	if(r>n)
		r=r%n;
	if(r<=n/2)
	{
		while(r>0)
		{
			temp=a[n-1];
			for(i=n-1;i>0;i--)
				a[i]=a[i-1];
			a[0]=temp;
			r--;
		}
	}
	else
	{
		

		r=n-r;
		while(r>0)
		{
			temp=a[0];
			for(i=0;i<n-1;i++)
				a[i]=a[i+1];
			a[i]=temp;
			r--;
		}
	}

}