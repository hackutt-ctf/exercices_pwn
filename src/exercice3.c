#include <stdio.h>
#include <stdlib.h>

void foo(){
	char buf[100];
	int offset;
	char value;
	printf("Bienvenue dans ce challenge !\n");
	
	while(1==1){
	printf("Où veux tu écrire (-1 pour partir): ");
	scanf("%d",&offset);

	if(offset == -1)
		break;

	printf("Que veux tu écrire : ");
	scanf("%hhu",&value);
	buf[offset] = value;
	}
}


int main(){
	setbuf(stdout,0);
	foo();
}
