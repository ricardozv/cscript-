// whats the system ?
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    printf("The system is: \n");
    system("netstat -nlpt \n");
    system("pwd\n");
    system("ls\n");

    return 0;
}