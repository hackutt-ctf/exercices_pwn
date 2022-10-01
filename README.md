# Pwn exercices

For now, all the binaries will be compiled without any protections

For ret2stack and ret2libc, you must disable aslr on your computer:
```bash
# Disable ASLR
sudo echo 0 | sudo tee /proc/sys/kernel/randomize_va_space

# Enable ASLR
sudo echo 2 | sudo tee /proc/sys/kernel/randomize_va_space
```

## Get started
Some challenges are already pre-compiled (for linux machines), you can find them in the corresponding folder.

But you can compile them yourself:
For 32 bits binaries: run `make 32`
For 64 bits binaries: run `make 64`

and if you want to compile without the Makefile, here are the commands:
```
# For 32 bits
gcc -o prog prog.c -m32 -fno-stack-protector -no-pie -z execstack

# For 64 bits
gcc -o prog prog.c -fno-stack-protector -no-pie -z execstack
```

## Documentation
If you want to learn about how to solve these challenges, you can read my articles in notion
https://www.notion.so/hackutt/Workshops-73db45139b574fdfb7b381aafef425aa?p=899ea8db4d114cc8ae13aef9f2fedccb&pm=c
