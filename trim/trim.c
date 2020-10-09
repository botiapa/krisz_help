#include <stdio.h>
#include <string.h>

#define MAX 30

void trim(char *original, char *target);

int main() {
    char name[MAX] = "   hello, mizu?   ";
    char trimmed[MAX];
    trim(name, trimmed);

    printf("original: %s\n", name);
    printf("target: %s", trimmed);
    return 0;
}

void trim(char *original, char *target) {
    for(int i,j = 0; i < strlen(original); i++) 
        if(original[i] != ' ' || (original[i] == ' ' && original[i+1] != ' '))
            target[j++] = original[i];
}
