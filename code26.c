#include <stdio.h>
#include<string.h>

///���Ŀ� ��������
///Strok�� ���ڿ��� �ڸ� ���� ����ü�� �����Ͽ� ����ϴ� ���1
///								�迭�� �����Ϸ� ����ϴ� ���2

typedef struct MyClork
{
	char min[10];
}MyClork;

int main() {
	char time[10], *tok;
	MyClork myClork;
	/*scanf("%s", &time);

	tok= strtok(time, ":");

	//��ū �ȿ� �ִ� �� ��� ������ ��//
	while (tok != NULL) {
		printf("%s\n", tok);
		tok = strtok(NULL, ":");
	}*/

	int year, mon, day;

		scanf("%d:%d:%d", &year, &mon, &day);
		printf("%d", mon);



	return 0;
}