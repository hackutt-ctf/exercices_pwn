#include <stdio.h>
#include <stdlib.h>

void foo(){
	char buf[500];

	read(0,buf,500);

	printf(buf);
}

int main(){
	setbuf(stdout,0);
	foo();
}
