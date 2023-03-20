/* Nama File    		: 2_jarakPBola.c */
/* Deskripsi    		: Menghitung dan menampilkan nilai suatu jarak benda yang mengalami gerak Parabola */
/* Pembuat      		: Rizal Adiyanto Nugroho - 24060122140156 */
/* Tanggal Pembuatan	: 21 Februari 2022 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    float v0,t,y;
    const float g=10;

    /*Algoritma*/
    printf("Masukkan Kecepatan Awal : ");
    scanf("%f", & v0);

    printf("Masukkan Waktu : ");
    scanf("%f", & t);

    y = v0 * t - 0.5 * (g * t*t);
    printf ("jarakPBola = %f", y);

    return 0;
}
