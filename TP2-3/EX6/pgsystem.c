#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "fcntl.h"


int main(int argv, char argc[]){

    char choice[1];
    
    while(choice[0] != '4'){

        if(choice[0] != ' '){
            printf("  1/ ls\n  2/ ps -ef\n  3/ find . -name data -print\n  4/ quitter \n\n");
        }
        
        choice[0]=' ';
        read(0,choice,1);

        if(choice[0] == ' '){
        }
        else if(choice[0] == '1'){
            system("ls");
        }
        else if(choice[0] == '2'){
            system("ps -ef");
        }
        else if(choice[0] == '3'){
            system("find . -name data -print");
        }
        else if(choice[0] != '4'){
            printf("choix non reconu\n");
        }

    }
    
    return 0;
}