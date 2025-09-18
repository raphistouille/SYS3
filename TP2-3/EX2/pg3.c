#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argv, char argc[]){

    char data[10];
    char out[20];

    fork();
    int fd = open("./test.data",O_RDONLY);

    lseek(fd,30,SEEK_SET);
    

    read(fd,data,10);

    sprintf(out,"PID %d : \n",getpid());

    write(1,out,strlen(out));
    write(1,data,10);
    printf("\n");

    return 0;
}