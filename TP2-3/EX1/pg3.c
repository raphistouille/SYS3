#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argv, char argc[]){
    int prim = fork();
    if(prim!=0){
        prim=fork();
    }
    wait(NULL);
    wait(NULL);

    printf("PID : %d, PPID : %d, prim : %d\n",getpid(),getppid(),prim);

    if(prim!=0){
        printf("goodbye\n");
    }
    else{
        printf("before\n");
        sleep(5);
        printf("after\n");
    }
    return 0;
}