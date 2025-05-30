#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

 struct mahasiswa{
	char nim[11];
	char nama[30];
	float ipk;
};
	int main(){
		mahasiswa mhs;
		
 		printf("NIM = c030324143 "); 		scanf("%s",&mhs.nim);  fflush(stdin);	 		
		printf("Nama = Muhammad Rizqi ");		scanf("%s",&mhs.nama); fflush(stdin);
		printf("IPK = 3,23 ");		scanf("%f",&mhs.ipk);
		
 		printf("\nData Anda :\n");
		printf("NIM  = %s\n",mhs.nim);
 		printf("Nama = %s\n",mhs.nama);
 		printf("IPK  = %.2f\n",mhs.ipk);
		
	}
