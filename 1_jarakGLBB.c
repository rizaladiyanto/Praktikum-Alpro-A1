/* Nama File    		: 1_jarakGLBB.c */
/* Deskripsi    		: Menghitung dan menampilkan nilai suatu jarak benda yang mengalami GLBB */
/* Pembuat      		: Rizal Adiyanto Nugroho - 24060122140156 */
/* Tanggal Pembuatan	: 21 Februari 2022 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    float v0, t, a, s;

/*Algoritma*/
    printf ("Masukkan Kecepatan Awal : ");
    scanf ("%f", & v0);

    printf ("Masukkan Waktu : ");
    scanf ("%f", & t);

    printf ("Masukkan Percepatan : ");
    scanf ("%f", & a);

    s = v0 * t + 0.5 * (a * t * t);
    printf("Jarak GLBB = %f",s);
    return 0;
}
