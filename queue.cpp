#include <iostream>
using namespace std;

int main()
{
	int q=0, rear=0;
	char data;
	char aQueue[2];
	cout<<"Enter item number:";
	cin>>data;
	aQueue[q]=data;
	for (int i=0; i<2; i++)
	{
		if(i==1)
		{
		cout<<"\nThe Queue is Full";
		}
	
		else
		{
			cout<<"\nEnter item number:";
			cin>>data;
			aQueue[q=rear]=data;
			q=rear++;
		}
	}
	return 0;
}
