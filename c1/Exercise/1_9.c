#include <stdio.h>

//TO BE CONTINUED AT A LATER TIME

int main (){
	int c;
	while((c = getchar()) != EOF)
		if(c == ' ')
			putchar('');
		else
			putchar(c);

}
