#include <stdio.h>
#include <stdbool.h>

int main(){
	int c;
	bool flag;

	while((c = getchar()) != EOF){
		flag = false;
		if(c == '\t'){ putchar('\\'); putchar('t'); flag = true;}
		if(c == '\b'){ putchar('\\'); putchar('b'); flag = true;}
		if(c == '\\'){ putchar('\\'); putchar('\\');flag = true;}
		if(flag == false)
			putchar(c);
	}
}
