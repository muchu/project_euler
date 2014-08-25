#include "002_even_fibonacci_numbers.h"
#include <stdio.h>

int next_fibonacci_val(int, int);

int even_fibonacci_numbers(){
	int current = 1, previous, previous_tmp, sum = 0;

	while(current < 4000000){
		previous_tmp = previous;
		printf("%d\n", current);
		if(current % 2 == 0){
			sum += current;
		}
		previous = current;
		current = next_fibonacci_val(current, previous_tmp);
	}
	return sum;
}

int next_fibonacci_val(int curr, int prev){
	if(curr == 1){
		return 2;
	}
	return curr + prev;
}
