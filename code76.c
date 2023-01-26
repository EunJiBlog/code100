#include <stdio.h>

int main() {
	char alpa;
	scanf("%c", &alpa);
	for (char c='a';c<alpa+1;c++)
	{
		printf("%c ", c);
	}
	return 0;
}