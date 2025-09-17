#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argv, char argc[]){
    int exec;
    int count=0;

    do{
        exec = open("./data.txt",O_RDONLY);
        count++;
    }while(exec != -1);
    printf("%d",count-1);
    return 0;
}