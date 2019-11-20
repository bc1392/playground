#include <cstdio>

int main() {

    // Define # of terms to generate.
    const unsigned short n = 94;

    // Initialize variables.
    unsigned long long t1 = 0;
    unsigned long long t2 = 1;
    unsigned long long tn = 0;

    // Generate the sequence.
    printf("Term, Value\n1, %llu\n2, %llu", t1, t2);
    for (unsigned short i = 3; i <= n; i++) {

        tn = t1 + t2;
        t1 = t2;
        t2 = tn;

        printf("\n%hu, %llu", i, tn);

    }
    printf("\n");

    return 0;

}