#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc<2) {
        printf("use: ./program ***.***.*.* \n");

    } else {
        printf("Host %s port %s \n",argv[1], argv[2]);
        return 0;
    }
}