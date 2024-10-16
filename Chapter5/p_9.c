#include <stdio.h>

int main(void)
{
	int fd, fm, fy, sd, sm, sy;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &fm, &fd, &fy);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &sm, &sd, &sy);

	int vfirst, vsecond;
	vfirst = fd + fm * 30 + 365 * (2000 + fy);
	vsecond = sd + sm * 30 + 365 * (2000 + sy);

	if (vfirst < vsecond)
	{
		printf("%d/%d/%d is earlier than %d/%d/%d\n", fm, fd, fy, sm, sd, sy);
	}
	else {
		printf("%d/%d/%d is earlier than %d/%d/%d\n", sm, sd, sy, fm, fd, fy);
	}

	return 0;
}
