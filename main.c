#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Hello world\n");
    system("pwd");
    system("whoami");
    system("ls");
    system("cp app app2");
    system("ls");
    return 0;
}