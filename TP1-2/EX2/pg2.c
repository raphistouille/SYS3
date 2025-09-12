#include "stdio.h"
#include "stdlib.h"
#include "fcntl.h"

void lire(){
    char data[100];
    char os[4];
    int offset = read(0,data,100);
    sprintf(os,"%d",offset);
    write(2,os,strlen(os));
    write(1,data,offset);
}

int main(int argv, char argc[]){

    int infd = open("./test.data",O_RDONLY);
    int outfd = open("./res.data",O_WRONLY);

    dup2(infd,0);
    dup2(outfd,1);
    dup2(outfd,2);
    
    lire();

    return 0;
}
