#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argv, char argc[]){

    int file_pipe1[2];
    int file_pipe2[2];
    char data[2];
    int child2;

    int child1 = fork();
    if(child1!=0){
        child2 = fork();
    }

    if(child1 == 0){
        
    }
    if(child2 == 0){

    }
    if(child2 != 0 && child1 != 0){
        char choice[1];
        read(0,choice,1);
    }

    printf("PID : %d, PPID : %d, prim : %d\n",getpid(),getppid(),prim);
    return 0;
}