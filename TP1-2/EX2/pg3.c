#include "stdio.h"
#include "stdlib.h"
#include "fcntl.h"

int main(int argv, char argc[]){

    int infd = open("./test.data",O_RDONLY);
    int outfd = open("./res.data",O_WRONLY);

    dup2(infd,0);
    dup2(outfd,1);
    dup2(outfd,2);
    
    lire();

    return 0;
}