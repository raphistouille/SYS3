#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void lire(){
    char data[100];
    char os[4];
    int offset = read(0,data,100);
    sprintf(os,"%d",offset);
    write(2,os,strlen(os));
    write(1,data,offset);
}

int main(int argv, char argc[]){
    lire();
}
