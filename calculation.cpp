#include <math.h>
#include <stdio.h>

int main()
{
	float x, y;
	printf("Enter value of x : ");
	scanf("%f",&x);
	if (x<=0)
	{
		printf("Value of x must be nonzero: try again\n");
	}
	else
	{
		y = tan (1/x);
		printf("Value of tan(1/x) is %.4f\n",y);
	}
	return 0;
}
