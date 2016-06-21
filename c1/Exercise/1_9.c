#include <stdio.h>

int main (){
	int c;
	while((c = getchar()) != EOF)
		if(c == ' ')
			putchar('');
		else
			putchar(c);

}
