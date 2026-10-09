#include <stdio.h>

int main(void)
{
	int ret = 2;
	int i_2 = 1;
	int i_1 = 2;
	int t;
	while (t <= 4000000)
	{
		t = i_1 + i_2;
		i_2 = i_1;
		i_1 = t;
		if (!(t & 1))
			ret += t;
	}
	printf("%d\n", ret);
	return 0;
}