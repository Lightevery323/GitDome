#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("chcp 65001 > nul");
	int hour;
	scanf("%d", &hour);
	if (hour >= 6 && hour <= 11)
		printf("早上好\n");
	else if (hour >= 12 && hour <= 13)
		printf("中午好\n");
	else if (hour >= 14 && hour <= 18)
		printf("下午好\n");
	else
		printf("晚上好\n");
	return 0;
}