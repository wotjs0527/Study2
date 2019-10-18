#include <stdio.h>

int main(void)
{
	for(int i = 1; i < 4; i++)
	{
		for(int j = 0; j < 10; j++)
			{
			  int	sum = i*j;
				printf("%d x %d = %2d", i, j, sum);
			}
		printf("\n");
	}
	return 0;
}
