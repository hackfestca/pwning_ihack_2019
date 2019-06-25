#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define MAX 30

//gcc -m32 chal4.c -o chal4 -no-pie

void challenge(){

	char input[20] = {0};
	char sushi[] = "sushi";

	printf("What is your favorite food?\n");
	scanf("%s", input);

	if(strcmp(sushi,input) == 0){
		printf("You'are a good guy but I don't give you the flag!\n");
	}
	else{
		printf("eerrrrrkkk! How can you eat this?\n");
	}
}

void secret(){
	FILE* flagfile = NULL;
	char flag[MAX] = "";

	printf("Good job! This is your flag:\n");
	flagfile = fopen("flag4.txt", "r");
	fgets(flag,MAX,flagfile);
	printf("%s", flag);
	fclose(flagfile);
}

int main()
{
	setvbuf(stdin, NULL, _IONBF, 0); //turn off buffering
	setvbuf(stdout, NULL, _IONBF, 0); //turn off buffering

	challenge();
}
