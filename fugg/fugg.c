#include <stdio.h>
#include <string.h>

#define MAX 30


int main() {
    char name[MAX];
    scanf("%30s", &name);
    for(int i = 0; i < strlen(name); i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}
