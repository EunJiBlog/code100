#include <stdio.h>

///추후에 수정예정
///Strtok 함수 사용

int main() {
	int year, mon, day;
	scanf("%d.%d.%d", &year, &mon, &day);
	printf("%d-%d-%d",day,mon,year);
	return 0;
}