/* Nama File          : ProsedurJumPrima.c */
/* Deskripsi          : menampilkan dan menjumlahkan bilangan Prima yang dapat dibentuk dari bilangan integer N sembarang > 0  
dari elemen bilangan prima yang terbentuk dari deret tersebut */
/* Pembuat            : Rizal Adiyanto Nugroho - 24060122130084 */
/*Tanggal Pembuatan   : 27 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

/* Prototype */
void jumprime(int N, int *sum);

/* Program Utama */
int main(){
  /* Kamus */
  int N,sum = 0; 

  /* Algoritma */
  printf("Masukkan N: ");
  scanf("%d",&N);
  jumprime(N,&sum);
  printf("Jumlah bilangan prima yang terbentuk dari deret tersebut: %d\n", sum);
  return 0;
}

/* Procedure */
void jumprime(int N, int *sum){

  /* Kamus Lokal */
  int jumlah = 0,faktor,i,j;

  /* Algoritma Procedure */
  for (i=2; i<=N; i++){
    faktor = 0; 
    for (j=1; j<=i; j++){
      if (i % j == 0){
        faktor++;
      }
    }
    if(faktor == 2){
      printf("%d ", i);
      jumlah++;
      *sum += i;
    }
  }
  printf("\n");
}