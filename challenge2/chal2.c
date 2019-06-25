#include <stdio.h> 
#include <stdlib.h>
#define MAX 30
//gcc -m32 chal2.c -o chal2 -no-pie
int main()
{
	setvbuf(stdin, NULL, _IONBF, 0); //turn off buffering
	setvbuf(stdout, NULL, _IONBF, 0); //turn off buffering

	char* hello = "hello";
	int password_1 = 0;
	char p_1 = 'N';
	char p_2 = 'O';
	char p_3 = 'O';
	char p_4 = 'B';
	char* username[20] = {0};

	FILE* flagfile = NULL;
	char flag[MAX] = "";

	printf("What is your name?\n");
	scanf("%s", username);
	printf("You are %s\n", username);
	printf("The actual keyword is %c.%c.%c.%c\n", p_1, p_2, p_3, p_4);
	printf("The actual password is %d\n", password_1);
	if(p_1 == 'L'){
		printf("Good!\n");
		if(p_2 == '3'){
			printf("Very well! Continue!\n");
			if(p_3 == '3'){
				printf("You like to play with the stack!\n");
				if(p_4 == 'T'){
					printf("Great! Again one step!\n");
					if(password_1 == 0xDADAFAFA){
						printf("This is your flag:\n");
						flagfile = fopen("flag2.txt", "r");
						fgets(flag,MAX,flagfile);
						printf("%s", flag);
						fclose(flagfile);
					}
					else{
						printf("The password is not good!\n");
					}
				}
			}
		}
	}
	else{
		printf("The key word is not good!\n");
	}
}
