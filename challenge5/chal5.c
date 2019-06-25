#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//gcc -m32 chal5.c -o chal5 -fno-stack-protector -no-pie

int challenge(){

	char username[30] = {0};
	char food[30] = {0};
	char color[30] = {0};
	char address[30] = {0};

	printf("What is your name?\n");
	scanf("%s", &username);
	printf("What is your favorite food?\n");
	scanf("%s", &food);
	printf("What is your favorite color?\n");
	scanf("%s", &color);
	printf("What is your address?\n");
	int c;
	while ((c = fgetc(stdin)) != '\n' && c != EOF);
	gets(address);

	printf("Your username is %s and his address is %p. This data is useless and it will be deleted! \n", username, &username);
	printf("Your favorite food is %s and his address is %p. This data is useful and it will not be deleted! \n", food, &food);
	printf("Your favorite food is %s and his address is %p. This data is useless and it will be deleted! \n", color, &color);
	printf("Your address is %s and his address is %p. This data is useless and it will be deleted! \n", address, &address);

	for (int i = 0; i < 30; i++)
	{
		username[i] = '\0';
	}

	for (int j = 0; j < 30; j++)
	{
		color[j] = '\0';
	}

	for (int j = 0; j < 30; j++)
	{
		address[j] = '\0';
	}

	return 1;
}

int main(int argc, char * argv[], char * envp[])
{
	for (int i=0; i < argc; i++){
		
		for (int j = 0; i < strlen(argv[i]); ++j)
		{
			argv[i][j] = '\0';
		}
	}
	
	for (int i =0; envp[i] != NULL; i++)
	{    
		for (int j=0; i < strlen(envp[i]); ++j)
		{
			envp[i][j] = '\0';
		}
	}

	setvbuf(stdin, NULL, _IONBF, 0); //turn off buffering
	setvbuf(stdout, NULL, _IONBF, 0); //turn off buffering

	challenge();
}
