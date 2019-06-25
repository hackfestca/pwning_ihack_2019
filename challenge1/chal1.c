#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include <unistd.h>

int main()
{
	setvbuf(stdin, NULL, _IONBF, 0); //turn off buffering
	setvbuf(stdout, NULL, _IONBF, 0); //turn off buffering

	int counter_good_answer = 0;
	int r, answer = 0;
	srand(time(NULL));
	int MAX = 99;
	int MIN = 10;

	time_t start = time(NULL);
	int end = 0;

	printf("Answer to my questions!\n");

	while(counter_good_answer < 10){
		r = (rand() % (MAX - MIN + 1)) + MIN;
		printf("The number is %d\n",r);
		printf("What is the number?\n");
		fflush(stdin);
		scanf("%d",&answer);
		int c;
		while ((c = fgetc(stdin)) != '\n' && c != EOF); /* Flush stdin */
		if(answer == r){
			printf("Good answer!\n");
			counter_good_answer++;
		}
		else{
			printf("Bad answer!\n");
			counter_good_answer = 0;
		}
	}

	end = (int)(time(NULL) - start);

	if(end > 1){
		printf("Too slow!\n");
	}
	else{
		printf("Weel done! This is your flag:\n");
		printf("FLAG_brrJI1dSHIG7Hul7pMOS\n");
	}

	return 0;
}

// SECRET FLAG: FLAG_brrJI1dSHIG7Hul7pMOS
