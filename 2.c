#include <stdio.h>

int sum, i, f[2] = {0, 1};

int
main(void)
{
	while (f[i] < 4000000) {
		fprintf(stderr, "%d\n", f[i]);
		if (f[i] % 2 == 0) sum += f[i];
		f[i] += f[(i + 1) % 2];
		i = (i + 1) % 2;
	}
	printf("%d\n", sum);
	return 0;
}
