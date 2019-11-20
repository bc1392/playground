#include <cstdio>

int main() {

    // Define # of terms to generate.
    const unsigned long long n = 94;

    // Initialize variables.
    unsigned long long t1 = 0;
    unsigned long long t2 = 1;
    unsigned long long tn = 0;

    // Generate the sequence.
    printf("Fibonacci\n%llu\n%llu", t1, t2);
    for (int i = 3; i <= n; i++) {

        tn = t1 + t2;
        t1 = t2;
        t2 = tn;

        printf("\n%llu", tn);

    }
    printf("\n");

    return 0;

}