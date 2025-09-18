#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "fcntl.h"

int main(int argc, char* argv[]){
    fork();//fork1
    fork();//fork2
    fork();//fork3
    /**
    main-+-fork1-+-fork2---fork3
         |       `fork3
         |
         |-fork2---fork3
         |-fork3  
    */
    exit(0);
}
