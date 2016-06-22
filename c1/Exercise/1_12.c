#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int c, nw = OUT;
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\n' && c != '\t') {
			nw = IN;
			putchar(c);
		} else if (nw == IN) {
			nw = OUT;
			putchar('\n');
		}
	}
}
