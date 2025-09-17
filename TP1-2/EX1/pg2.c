#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argv, char argc[]){
    int fd = open(argc,O_RDONLY);
    char data[10];
    int offset = read(fd,data,10);
    write(1,data,offset);
    return 0;
}