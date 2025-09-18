#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argv, char argc[]){
    fork();

    char data[10];
    char out[20];
    int fd = open("./test.data",O_RDONLY);
    read(fd,data,10);

    sprintf(out,"PID %d : \n",getpid());

    write(1,out,strlen(out));
    write(1,data,10);

    return 0;
}