#include<stdio.h>

int main()
{
    __int64_t number = 317584931803;
    int divisor = 2;
    while (number > 1) {
	if (0 == (number % divisor)) {
	    number /= divisor;
	    divisor--;
	}
	divisor++;
    }
    // [i]divisor[/i] is the answer
	return 0;
}