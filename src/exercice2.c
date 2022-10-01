#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void foo(char **envp){
	char buf[100];
	

	for (char **env = envp; *env!=0; env++){
		char *thisEnv = *env;
		if (strstr(thisEnv,"/bin/sh")){
			printf("Tu ne m'auras petit hacker !\n");
			exit(-1);
		}
	}

	printf("Petit coup de pouce: %p\n",buf);

	read(0,buf,130);

}

int main(int argc, char **argv, char **envp){
	foo(envp);
}
