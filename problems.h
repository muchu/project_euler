#include "problems/001_multiples3_5.h"
#include "problems/002_even_fibonacci_numbers.h"
#include "problems/003_largest_prime_factor.h"

#ifndef PROBLEMS_H
#define PROBLEMS_H

typedef int (*problem_func)();

const char *problems[] = {
		"Multiples of 3 and 5",
		"Even Fibonacci numbers",
		"Largest prime factor",
//		"Largest palindrome product"
};

const problem_func problem_functions[] = {
//const int (*problem_functions[])() = {
		multiples_3_5,
		even_fibonacci_numbers,
		largest_prime_factor
};

#endif
