#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "fcntl.h"

#define N 10

int main(){
    int i = 1;
    while(fork() == 0 && i <= N)i++;
    printf("%d\n",i);
    exit(0);
}

//le proces se fork !10 fois.
