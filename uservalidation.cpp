#include<stdio.h>
#include <conio.h>
#include <string.h>


int main()
{
	
	int valid = 0;
	
    char name[20]="user",pass[20]="pass123";
    char username[20], password[20];

    printf("Please Enter username:");
    scanf("%s", &username);

    printf("Please enter password:");
    scanf("%s", &password);

    do
    {
    	
    	valid = strcmp( username,name ) == 0 && strcmp( password, pass ) == 0;
    	
    	if ( !valid ){
    		printf("Wrong username or password try again!\n");

        	printf("\nPlease Enter username:");
        	scanf(" %s", &username);

       		printf("Please enter password:");
        	scanf(" %s", &password);
		}

    }
    while (!valid);

    printf("Welcome");
    
    return 0;
}