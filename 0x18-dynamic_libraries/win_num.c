#include <stdlib.h>

static int i = 0;
static int num[] = {9, 8, 10, 24, 75, 9};

int rand(void)
{
	if (i < 6)
	{
		return (num[i++]);
	}
	else
	{
		i = 0;
		return (num[i++]);
	}
}
