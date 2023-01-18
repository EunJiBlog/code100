#include <stdio.h>
int main() {
	int front, after;
	scanf("%06d-%07d", &front, &after);
	printf("%06d-%07d", front, after);
	return 0;
}