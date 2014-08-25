#include "001_multiples3_5.h"

int multiples_3_5(){
	int i, sum=0;

	for(i=0; i<1000; ++i){
		if((i % 3) == 0){
			sum += i;
		}
		else if((i % 5) == 0){
			sum += i;
		}
	}
	return sum;
}
