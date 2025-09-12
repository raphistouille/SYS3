#include "stdio.h"
#include "stdlib.h"
#include <sys/types.h>
#include "fcntl.h"

int main(int argc, char* argv[]){
    fork();
    char data[10];
    char out[20];
    int fd = open("./test.data",O_RDONLY);
    read(fd,data,10);

    sprintf(out,"%d : ",getpid());

    write(1,out,strlen(out));
    write(1,data,10);

    return 0;

}
