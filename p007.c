#include <stdio.h>

int main(void)
{
	int i = 3;
	int count = 1;
	while (1)
	{
		int is_prime = 1;
		for (int j = 2; j < i / 2; ++j)
		{
			if (i % j == 0)
			{
				is_prime = 0;
				break;
			}
		}
		if (is_prime)
		{
			++count;
			if (count == 10001)
				break;
		}
		i = i + 2;
	}
	printf("%d\n", i);
	return 0;
}