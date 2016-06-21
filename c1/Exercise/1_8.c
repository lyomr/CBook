#include <stdio.h>

int main (){
	int c, nl, t, b;
	nl = t = b = 0;

	while((c = getchar()) != EOF)
		if(c == '\n')
			++nl;
		else if(c == '\t')
			++t;
		else if(c == ' ')
			++b;
	printf("There are %d newline(s), %d tab(s), %d blanks\n", nl, t, b);
}
