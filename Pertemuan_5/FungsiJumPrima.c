/* Nama File          : FungsiJumPrima.c */
/* Deskripsi          : menampilkan dan menjumlahkan bilangan Prima yang dapat dibentuk dari bilangan integer N sembarang > 0  
dari elemen bilangan prima yang terbentuk dari deret tersebut */
/* Pembuat            : Rizal Adiyanto Nugroho - 24060122130084 */
/*Tanggal Pembuatan   : 27 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

/* Prototype */
int jumprime(int N);

/* Program Utama */
int main(){
  /* Kamus */
  int N; // bilangan integer sembarang > 0

  /* Algoritma */
  printf("Masukkan N: ");
  scanf("%d",&N);
  printf("Jumlah bilangan prima yang terbentuk dari deret tersebut: %d",jumprime(N));
  return 0;
}

/* Fungsi */
int jumprime(int N){
  /* Kamus Lokal */
  int jumlah,faktor,i,j;

  /* Algoritma Fungsi */
  for (i = 1; i<=N; i++){
    faktor = 0;
    for (j = 1; j<=i; j++){
      if (i % j == 0){
        faktor++;
      }
    }
      if (faktor == 2){
        printf("%d ", i);
        jumlah+=i;
      }
  }
  printf("\n");
  return jumlah;
}