#include <stdio.h>

int main(void)
{
	int fd, fm, fy;
	int sd = 9999, sm = 9999, sy = 99999; //MAX INT
	int vfirst, vsecond;

	while (1)
	{
		printf("Enter first date (mm/dd/yy): ");
		scanf("%d/%d/%d", &fm, &fd, &fy);
		if (fm == 0 && fd == 0 && fy == 0)
			break;
		vfirst = fd + fm * 30 + 365 * (2000 + fy);
		vsecond = sd + sm * 30 + 365 * (2000 + sy);

		if (vfirst < vsecond)
		{
			sm = fm;
			sd = fd;
			sy = fy;
		}

	}

	printf("%d/%d/%d is the earliest date\n", sm, sd, sy);

	return 0;
}