#include <stdio.h>
#include <stdlib.h>

void win(){
    system("/bin/sh");
}

void foo(){
    char d[10];
    gets(d);
}

int main (){
   foo();
}
