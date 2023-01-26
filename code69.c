#include <stdio.h>
int main() {
	char char_rst;
	scanf("%c", &char_rst);
	char_rst == 'A' ? printf("best!!!\n") : ('B' == char_rst ? printf("good\n") : ('C' == char_rst ? printf("soso\n") : printf("bad\n")));
	return 0;
}