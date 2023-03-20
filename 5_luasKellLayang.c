/* Nama File    		: 5_luasKellLayang.c */
/* Deskripsi    		: Menghitung dan menampilkan nilai Luas dan Keliling dari sebuah Layang layang */
/* Pembuat      		: Rizal Adiyanto Nugroho - 24060122140156 */
/* Tanggal Pembuatan	: 27 Februari 2022 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/
    float s1,s2,d1,d2,Luas,Kell;

    /*Algoritma*/
    printf ("Masukkan Diagonal 1 : ");
    scanf ("%f", & d1);

    printf ("Masukkan Diagonal 2 : ");
    scanf ("%f", & d2);

    printf ("Masukkan Sisi 1 : ");
    scanf ("%f", & s1);

    printf ("Masukkan Sisi 2 : ");
    scanf ("%f", & s2);

    Luas = 0.5 * d1 * d2;
    printf ("Luas Layang-layang = %f\n", Luas);
    Kell = 2 * (s1 + s2);
    printf ("Keliling Layang-layang = %f", Kell);

    return 0;
}
