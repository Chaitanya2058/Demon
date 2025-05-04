# include <stdio.h>
# include <string.h>
# include <conio.h>
int main() 
{ 
char username[10];
char password[10];

printf("Enter your username:\n");
scanf ("%s",username);

printf("Enter your password:\n");
scanf ("%s",password);

if(strcmp(username,"Chaitanya")==0)
{


	if(strcmp(password,"12345678")==0)
	{
		printf("\ncorrect password\n");
    }
	else
	{
		printf("\nworng password\n");
    }
    
}
	else
	{
		printf("\nuser not defined\n");
	}
	return 0;
}

