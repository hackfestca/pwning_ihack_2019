#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define MAX 30

//gcc -m32 chal3.c -o chal3 -no-pie
int main()
{
	setvbuf(stdin, NULL, _IONBF, 0); //turn off buffering
	setvbuf(stdout, NULL, _IONBF, 0); //turn off buffering

	char password[] = "GiveMeTheFlag!";
	char input[20] = {0};
	char key[] = "\xDE\xEA\xBE\xEF\xDE\xEA\xBE\xEF\xDE\xEA\xBE\xEF\xBA\xBA";

	FILE* flagfile = NULL;
	char flag[MAX] = "";

	printf("Give me the password!\n");
	scanf("%s", &input);
	
	for (int i=0; i<strlen(password); i++)
  	{
    	password[i] = password[i] ^ key[i];
 	}

	if(strcmp(password,input) == 0){
		printf("Good job! This is your flag:\n");
		flagfile = fopen("flag3.txt", "r");
		fgets(flag,MAX,flagfile);
		printf("%s", flag);
		fclose(flagfile);
	}
	else{
		printf("Wrong password sorry!\n");
	}
}
