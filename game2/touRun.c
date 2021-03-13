#include <stdio.h>
int main() {
    char map[5][10];

    map[0][0] = '|';
    map[4][9] ='@';

    printf("%c %c\n", map[0][0], map[4][9]);
}