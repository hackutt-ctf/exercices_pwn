#include <stdlib.h>
#include <stdio.h>

struct user{
char name[16];
void (*func)();
};
struct user my_user;

void print_name(){
	printf("Bonjour %s :)\n",my_user.name);
}

void win(){
	printf("Bravo, voila ton shell !");
	system("/bin/sh");
}


void foo(){
	printf("Bienvenue au super sécure challenge !\n");
	my_user.func = print_name;

	printf("Quel est ton nom :");
	read(0,my_user.name, 17);

	(* my_user.func)();

}

int main(){
	setbuf(stdout,0);
	foo();
}
