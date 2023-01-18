#include <stdio.h>
#include<string.h>

///추후에 수정예정
///Strok로 문자열을 자른 다음 구조체에 저장하여 출력하는 방법1
///								배열에 저장하려 출력하는 방법2

typedef struct MyClork
{
	char min[10];
}MyClork;

int main() {
	char time[10], *tok;
	MyClork myClork;
	/*scanf("%s", &time);

	tok= strtok(time, ":");

	//토큰 안에 있는 걸 모두 꺼내는 식//
	while (tok != NULL) {
		printf("%s\n", tok);
		tok = strtok(NULL, ":");
	}*/

	int year, mon, day;

		scanf("%d:%d:%d", &year, &mon, &day);
		printf("%d", mon);



	return 0;
}