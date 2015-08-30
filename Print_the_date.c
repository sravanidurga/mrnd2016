#include<stdio.h>
int number(char d[],int j,int i);
int nodigits(int num);
int isvalid(int day, int month,int year);
void date(char d[]);
void getvisit(char d[],int k,int value);
char a[19][20]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
char b[9][10]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
char c[12][15]={"january","febrauary","march","april","may","june","july","august","september","october","november","december"};
char x[2][10]={"hundred","thousand"};
char da[20],mon[15],ye[50];
int day,month,year;	
void main()
{
	char d[15];
	printf("\n enter the date:");
	gets(d);
	date(d);
}
void date( char d[])
{
	int i,j=0,dig,r,k,count=1,valid,temp,temp1,temp2;
	for(i=0;d[i];i++)
	{
		if(d[i]=='-' || d[i]=='/')
		{
			if(count == 1)
			{
				day = number(d,j,i);
				j=i+1;
				count++;
				printf("%d\n",day);
			}
			else if(count == 2)
			{
				month = number(d,j,i);
				j=i+1;
				count++;
				printf("%d\n",month);
			}
			
		}
		else if(d[i+1]=='\0')
		{
			year = number(d,j,i+1);
			printf("%d\n",year);
		}
	}
	valid = isvalid(day,month,year);
	printf("valid is %d\n",valid);
	if(valid == 1)
	{
		getvisit(da,0,day);
		 if (month <= 12)
		{
			for(k=0;c[month-1][k];k++)
				mon[k] = c[month-1][k];
			mon[k] = '\0';
		}
	
		 k=0;
		 while(year/100)
		 {
			 dig = nodigits(year);
			 temp = year/power(10,dig-1);
			 for(r=0;a[temp-1][r];r++)
				 ye[k++] = a[temp-1][r];
			 ye[k++]=' ';
			 temp1 = dig -3;
			 r=0;
			 while(x[temp1][r])
			 {
				ye[k++] = x[temp1][r];
				r++;
			 }
			 ye[k++]=' ';
			 year = year % (temp * power(10,dig-1));
		 }
		 getvisit(ye,k,year);

	for(i=0;da[i];i++)
		printf("%c",da[i]);
	printf("\t");
	for(i=0;mon[i];i++)
		printf("%c",mon[i]);
	printf("\t");
	for(i=0;ye[i];i++)
		printf("%c",ye[i]);
}
else
	printf("\n Invalid Date......");
}
int isvalid(int day,int month,int year)
{
	int valid = 0;
	if(day<=31 && (month == 1||month == 3||month ==5||month == 7||month ==8||month==10||month==12))
	{
		valid = 1;
		
	}
	else if(day <=30 &&( month == 4||month == 6|| month == 9 || month ==11))
	{
		valid =1;
		
	}
	else if( month ==2)
	{
		if((year % 100 !=0 &&year%4 == 0)|| year %400 == 0)
		{	if (day<=29)
			valid = 1;
		}
		else if (day<=28)
			valid =1;
		
		
	}
	return valid;
	

}
int number ( char d[],int j,int i)
{
	int s= 0,temp;
	while(j<i)
	{
		temp = d[j] -'0';
		s = s*10 +temp;
		j++;
	}
	return s;
}
int nodigits(int num)
{
	int count=0,r;
	while(num)
	{
		r = num %10;
		count++;
		num = num/10;

	}
	return count;
}
void getvisit(char d[],int k,int value)
{
	int r,temp;
	if(value<=19)
		{
			for(r=0;a[value-1][r];r++)
				d[k++]=a[value-1][r];
			d[k]='\0';
		}
		else if (value >19)
		{
			temp = value/10;
				for(r=0;b[temp-1][r];r++)
					d[k++]=b[temp-1][r];
				d[k++] = ' ';
				temp= value%10;
				r=0;
				while(a[temp-1][r])
					d[k++] = a[temp-1][r++];
				d[k] = '\0';
			
		}
}
int power(int num,int exp)
{
	int pow=1;
	while(exp)
	{
		pow *= num;
		exp--;
	}
	return pow;
}