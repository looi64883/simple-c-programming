#include <stdio.h>

int main()
{
	int mnum, phy, che, bio, total;
	float per;
	printf("Enter the student matrix number \t\t : ");
	scanf("%d",&mnum);
	printf("Enter the marks of Physics, Chemistry and Biology : ");
	scanf("%d %d %d", &phy, &che, &bio);
	printf("--------------------------\n");
	printf("Matrix Number        : %d \n",mnum);
	printf("--------------------------\n");
	printf("Marks in Physics     : %d\n",phy);
	printf("Marks in Chemistry   : %d\n",che);
	printf("Marks in Biology     : %d\n",bio);
	printf("--------------------------\n");
	total = phy+che+bio;
	printf("Total Marks          : %d\n",total);
	per= total/3;
	printf("Percentage           : %.2f%%\n",per);
	if (per>79&&per<100)
	{
		char dev[]="First";
		printf("Division             : %s\n",dev);
	}
	else if (per>49&&per<80)
	{
		char dev[]="Second";
		printf("Division             : %s\n",dev);
	}
	else
	{
		char dev[]="Third";
		printf("Division             : %s\n",dev);
	}
	return 0;
}
