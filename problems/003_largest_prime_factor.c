#include "003_largest_prime_factor.h"

#define NUM 600851475143

int largest_prime_factor(){
	long actual = 1;
	for(long i = 1; i < NUM; ++i){
		if(NUM % i == 0){
			actual *= i;
			if(actual == NUM){
				return i;
			}
		}
	}
	return -1;
}
