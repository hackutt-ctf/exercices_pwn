#include <stdio.h>
#include <stdlib.h>

void win(){
    system("/bin/sh");
}

void foo(){
    char d[2];
    gets(d);
}

int main (){
   foo();
}