#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int y;

	for (y= 1; y <= 10; y++)
	{
		printf("%.2lf ", sqrt(y));
	}
	printf("\n");
	system("pause");
	return 0;
}