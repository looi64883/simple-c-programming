#include <stdio.h>

void identify(int);
int nEven=0, nMulti=-1;

int main()
{
	int a, i=0;
	printf("Enter integers between 1 to 9 both inclusive, outside range to stop\n");
	printf("Enter integer : ");
	scanf("%d",&a);
	
	identify(a);
	
	do
	{
		if (a>0 && a<10)
		{
			printf("Enter integer : ");
			scanf("%d",&a);
			identify (a);
		}
		i++;
	}while(i>0);
	
	printf("Total number of even integer entered is %d\n",nEven);
	printf("Total number of multiples of 3 entered is %d",nMulti);
}

void identify(int a)
{
	if (a==6)
	{
		++nEven;
		++nMulti;
	}
	else if (a%3==0)
	{
		++nMulti;
	}
	else if (a%2==0)
	{
		++nEven;
	}
}
