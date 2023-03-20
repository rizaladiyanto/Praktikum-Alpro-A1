/* Nama File    		: 4_volBolaKerct.c */
/* Deskripsi    		: Menghitung dan menampilkan nilai Volume dari sebuah Bola dan Kerucut */
/* Pembuat      		: Rizal Adiyanto Nugroho - 24060122140156 */
/* Tanggal Pembuatan	: 27 Februari 2022 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    float r,Vb,Vk;
    const float phi=3.1415;

    /*Algoritma*/
    printf ("Masukkan Jari-jari : ");
    scanf ("%f", & r);

    Vb = 1.33 * (phi*r*r*r);
    printf ("Volume Bola = %f\n", Vb);
    Vk = 0.5 * Vb;
    printf ("Volume Kerucut = %f", Vk);

    return 0;
}

