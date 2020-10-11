#include <stdio.h>
#include <string.h>

void trim(char *from, char *to){
    int j = 0;
    for(int i=0; from[i] != '\0'; i++){
        if (from[i] != ' '  || (from[i-1] != ' ' && from[i] == ' ' && from[i+1] != ' ')){
            to[j] = from[i];
            j++;
        }
    }
    to[j++] = '\0';
}

int main()
{
    char niggerlicious[50] ="  szev asz  ";
    char antinigerlicious[50];
    trim(niggerlicious, antinigerlicious);
    printf(":%s:", antinigerlicious);

    return 0;
}