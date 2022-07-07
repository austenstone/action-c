#include <stdio.h>
#include <stdlib.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for (int i = 3; i < num / 2; i+=2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int largest_prime_factor(int num) {
    int largest = 0;
    for (int i = 0; i < num; i++) {
        if (is_prime(i)) largest = i;
    }
    return largest;
}

int main(int argc, char **argv) {
    int number = 0;
    if (argc < 1) {
        printf("No arguments.");
        return -1;
    } else {
        number = atoi(argv[1]);
    }
    printf("::set-output name=largest-prime-factor::%d\n", largest_prime_factor(number));
    return 0;
}
