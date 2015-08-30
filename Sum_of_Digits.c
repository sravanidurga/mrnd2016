#include<stdio.h>
void main()
{
	int n,count,valid=0;
	printf("\n Enter the number:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("\n enter (1) if all digits are -ve else if first digit is negative then enter (2)");
		scanf("%d",&valid);

	}
	count = sum(n,valid);
	printf("\n The sum of digits in number is %d",count);
}
int sum(int num,int valid)
{
	int r,s=0;
	if(valid == 0 || valid == 1)
	{
		while(num)
		{
		r = num %10;
		s += r;
		num = num/10;
		}
		return s;
		

	}
	else if (valid ==2)
	{
		num = -num;
		while(num >9 )
		{
			r = num %10;
			s += r;
			num = num/10;

		}
		s -= num;
		return s;
	}
}