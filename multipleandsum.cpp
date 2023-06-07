#include <stdio.h>

int main()
{
	int a, x, y, z, sum, multi;
	printf("Enter a +ve no less than 1000: ");
	scanf("%d",&a);
	x = a;
	if (x < 0 || x > 1000) 
    {
      printf("Entered number is out of range\n");
    } 
    else 
    {
    	z = x%10;
    	y = a%100;
    	y /= 10;
    	x /= 10;
    	x /= 10;
    	sum = x+y+z;
    	multi = x*y*z;
		printf("Sum of the digits : %d+%d+%d is %d\n", x, y, z,sum);
		printf("Multiplication result : %d*%d*%d is %d\n", x, y, z, multi);
	}
	return 0;
}
