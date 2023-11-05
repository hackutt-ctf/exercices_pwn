#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <seccomp.h>

void init_seccomp(void)

{
  scmp_filter_ctx seccomp_filter;
  
  seccomp_filter = seccomp_init(0);
  seccomp_rule_add(seccomp_filter,0x7fff0000,2,0);
  seccomp_rule_add(seccomp_filter,0x7fff0000,0,0);
  seccomp_rule_add(seccomp_filter,0x7fff0000,1,0);
  seccomp_rule_add(seccomp_filter,0x7fff0000,0x4e,0);
  seccomp_rule_add(seccomp_filter,0x7fff0000,0xd9,0);
  seccomp_rule_add(seccomp_filter,0x7fff0000,0xe7,0);
  seccomp_rule_add(seccomp_filter,0x7fff0000,0x101,0);
  seccomp_load(seccomp_filter);
  return;
}

void init(){
    setbuf(stdin, 0);
    setbuf(stdout, 0);
    setbuf(stderr, 0);
}

int main(){
  char buffer [16];
  
  init();
  init_seccomp();
  printf("This is a helper, just for you %p\n", system);
  puts("pwn dis shit");
  read(0,buffer,0x200); 
  return 0;
}
