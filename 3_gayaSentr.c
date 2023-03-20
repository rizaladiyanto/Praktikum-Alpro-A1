/* Nama File    		: 3_gayaSentr.c */
/* Deskripsi    		: Menghitung dan menampilkan Gaya Sentripetal dari sebuah benda */
/* Pembuat      		: Rizal Adiyanto Nugroho - 24060122140156 */
/* Tanggal Pembuatan	: 21 Februari 2022 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    float m,v,r,F;

    /*Algoritma*/
    printf ("Masukkan Massa : ");
    scanf ("%f", & m);

    printf ("Masukkan Kecepatan : ");
    scanf ("%f", & v);

    printf ("Masukkan Jari-jari : ");
    scanf ("%f", & r);

    F = m*(v*v/r);
    printf ("gayaSentr = %f", F);

    return 0;
}
