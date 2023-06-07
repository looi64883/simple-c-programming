#include <stdio.h>

void identify(int);
int nEven=0, nMulti=0;
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
	switch (a)
	{	
		case 2:
			++nEven;
			break;
					
		case 3:
			++nMulti;
			break;
					
		case 4:
			++nEven;
			break;
					
		case 6:
			++nEven;
			++nMulti;
			break;
					
		case 8:
			++nEven;
			break;
					
		case 9:
			++nMulti;
			break;
					
		default:
			break;
	}
}
