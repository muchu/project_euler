#include <stdio.h>

#include "problems.h"

void print_menu();

int main(int argc, char *argv[]){
	int problem_choice, result;
	print_menu();
	scanf("%d\n", &problem_choice);

	if(problem_choice < 1 || problem_choice > sizeof(problem_functions)/sizeof(*problem_functions)){
		printf("Wrong Choice!\n");
		return 0;
	}

	result = (*problem_functions[problem_choice-1])();

	printf("You choose %d - %s.\n", problem_choice, problems[problem_choice-1]);
	printf("Result is %d\n", result);

	return 0;
}

void print_menu(){
	printf("Select problem number:\n\n");
	for(int i=0; i<sizeof(problems)/sizeof(*problems); ++i){
		printf("%d - %s\n", i+1, problems[i]);
	}
}
