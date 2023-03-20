#include <stdio.h>
#include <stdlib.h>

int main() {
    // Kamus
    int i, j; //counter
    int N; //size tabel T
    int T[10] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; //array tabel
    int count; //kemunculan elemen
    int sum; // jumlah dari elemen elemen yang muncul lebih dari 1

    // Algoritma
    N = sizeof(T) / sizeof(T[0]);
    sum = 0;

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
                sum = sum + (count*T[i]);
            }
        }
    }
    printf ("%d", sum);

    return 0;
}