#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argv, char argc[]){
    int prim = fork();
    if(prim!=0){
        prim=fork();
    }

    printf("PID : %d, PPID : %d, prim : %d\n",getpid(),getppid(),prim);
    return 0;
}