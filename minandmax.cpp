#include <stdio.h>

float max(float, float, float, float);
float min(float, float, float, float);
int main()
{
	float a, b, c, d, e, f, g;
	printf("Enter four numbers : ");
	scanf("%f %f %f %f",&a, &b, &c, &d);
	e = max(a,b,c,d);
	f = min(a,b,c,d);
	g= e-f;
	printf("Difference is %.4f",g);
	return 0;
}

float e, f;
float max(float a, float b, float c, float d)
{
	if(a > b && a > c && a > d)
	{
		return e = a;
	}
	else if(b > a && b > c && c > d)
	{
		return e = b;
	}
	else if(c > a && c > b && c > d) 
	{
		return e = c;
	}
	else return e = d;
}
float min(float a, float b, float c, float d)
{
	if(a < b && a < c && a < d)
	{
		return f = a;
	}
	else if(b < a && b < c && c < d)
	{
		return f = b;
	}
	else if(c < a && c < b && c < d)
	{
		return f = c;
	}
	else return f = d;
}
