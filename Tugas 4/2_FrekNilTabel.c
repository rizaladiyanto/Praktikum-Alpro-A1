#include <stdio.h>
#include <stdlib.h>

int main() {
    // Kamus
    int i, j; //counter
    int N; //size tabel T
    int T[10] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; //array tabel
    int count; //kemunculan elemen

    // Algoritma
    N = sizeof(T) / sizeof(T[0]);

    for (i = 0; i < N; i++) {
        if (T[i] != 0) {
            count = 1;
            for (j = i + 1; j < N; j++) {
                if (T[i] == T[j]) {
                    count++;
                    T[j] = 0;
                }
            }
            if (count > 1) {
                printf("%d ", T[i]);
            }
        }
    }

    return 0;
}