#include <stdio.h>

#define 	N (long)600851475143

int main(void)
{
	long ret = N;
	for (long i = 2; i < ret; ++i)
		if (ret % i == 0)
			ret = ret / i;
	printf("%ld\n", ret);
	return 0;
}