#include <stdio.h>
int main(){
	char char_str[2000] ="";
	scanf("%[^\n]", char_str); /// %[^\n]   ���͸� ������ ��� ���ڿ��� �޴´�
	printf("%s", char_str);
	return 0;
}