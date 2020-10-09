#include <stdio.h>
#include <stdlib.h>

int valogatas(int t[], int x) {
    int hossz = 0;
    int i = 0;
    while (t[i] != -1) {
        if (t[i] % x != 0) {
            hossz++;
        }
        i++;
    }
    int b[hossz+1]; // +1 mivel az utolsó elem az itt is -1
    int filteredIndex = 0;
    for (int z = 0; z < i - 1; z++) {
        if (t[z] % x != 0) {
            b[filteredIndex] = t[z];
            filteredIndex++;
        }
    }
    b[hossz] = -1;
    return b[hossz];
}

int main()
{
    int tomb[6] = { 2, 4, 9, 13, 6, -1 };
    int x = 2;
    int valogatott[] = valogatas(tomb, x);

    int i = 0;
    while (valogatott[i] != -1) {
        printf("%d", valogatott[i]);
        i++;
    }

    return 0;
}