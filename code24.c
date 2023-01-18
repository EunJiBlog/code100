#include <stdio.h>

int main() {
	char input_words[20] = "";
	int i=0;
	scanf("%s", &input_words);

	while (input_words[i] != NULL) {
		printf("\'%c\'\n", input_words[i]);
		i++;
	}
	

	return 0;

}
