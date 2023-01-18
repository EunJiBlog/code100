#include <stdio.h>
int main() {
	int year, mon, day;
	scanf("%d.%d.%d", &year, &mon, &day);
	printf("%04d.%02d.%02d", year, mon, day);
	return 0;
}