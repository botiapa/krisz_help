#include <stdio.h>
#include <string.h>

#define MAX 50

void trim(char *original, char *target);

int main() {
    char name[MAX] = " szev asz ";
    char trimmed[MAX];
    trim(name, trimmed);

    printf("original: \"%s\"\n", name);
    printf("target: \"%s\"", trimmed);
    return 0;
}


// ABC
void trim(char *original, char *target) {
    int startI, endI;
    for(int i = 0; i < strlen(original); i++) {
        if(original[i] != ' ') {
            startI = i;
            break;
        }
    }
    for(int i = strlen(original) - 1; i > 0; i--) {
        if(original[i] != ' ') {
            endI = i;
            break;
        }
    }
    int j = 0;
    for(int i = startI; i <= endI; i++) {
        printf("%c\n", original[i]);
        target[j++] = original[i];
    }
    target[j++] = '\0';
}
