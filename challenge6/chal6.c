#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
//gcc -m32 chal6.c -o chal6 -fno-stack-protector -no-pie

int challenge(){

char food[250] = {0};

printf("What is the best meal?\n");

fgets(food,250,stdin);

if(food[0]=='s' && food[1]=='u' && food[2]=='s' && food[3]=='h' && food[4]=='i'){
	printf("Yes! The best meal ever is the: ");
	printf(food);
	printf("\nFor debug purpose: The address of food is %p\n",food);
	printf("\n");
}
else{
	printf("NO! YOU'RE WRONG! I AM VERY DISAPOINTED!\n");
}

int c;
while ((c = fgetc(stdin)) != '\n' && c != EOF); /* Flush stdin */

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

	return 1;
}
