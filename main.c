#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int i, max = atoi(argv[1]);
    if (argc < 1) return -1;
    for (i = 0; i < max; i++) {
        printf("%d", i);
    }
}