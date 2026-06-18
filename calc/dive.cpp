#include "sub.h"

int dive(int x, int y)
{
	int cnt = 0;
	while (x > y)
	{
		cnt++;
		x = sud(x, y);
	}
	return cnt;
}
