#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct mahasiswa{
	char nama[50], npm[15], jurusan[25], kelamin[15], ttl[25], alamat[50], no_hp[15];
}mhs;

int main(){
	mhs data[50];
	mhs temp;
	int ubah, menu, i=0, j, a, x, metode, urutan, pencarian;
	int pos, tengah, ketemu=0, z, awal=0, akhir;
	char yn, cari, npm[15];
	
	pilihan:
	system("cls");
	printf("Menu setting data mahasiswa\n");
	printf("1. Input data\n");
	printf("2. View data\n");
	printf("3. Ubah data\n");
	printf("4. Hapus data\n");
	printf("5. Sorting Data\n");
	printf("6. Search Data\n");
	printf("7. Exit\n");
	printf("Silahkan pilih menu yang anda ingin lakukan : ");
	scanf("%d",&menu);
	switch(menu){
		case 1:
			system ("cls");
			printf("masukkan jumlah data yang anda inginkan: ");
			scanf("%d", &a);
			for(i=0;i<a;i++){
				printf("\n===== data mahasiswa ke %d =====", i+1);
				printf("\nnama\t\t: ");
				scanf(" %[^\n]%*c", data[i].nama);
				printf("NPM\t\t: ");
				scanf(" %[^\n]%*c", data[i].npm);
				printf("Jurusan\t\t: ");
				scanf(" %[^\n]%*c", data[i].jurusan);
				printf("Nomor HP\t: ");
				scanf(" %[^\n]%*c", data[i].no_hp);
				printf("Kelamin\t\t: ");
				scanf(" %[^\n]%*c", data[i].kelamin);
				printf("TTL\t\t: ");
				scanf(" %[^\n]%*c", data[i].ttl);
				printf("Alamat\t\t: ");
				scanf(" %[^\n]%*c", data[i].alamat);
				printf("===============================\n");
			}
			printf("\n");
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
			break;
		case 2:
			system ("cls");
			for(i=0;i<a;i++){
				printf("===== data mahasiswa ke %d =====", i+1);
				printf("\nNama\t\t: %s\n", data[i].nama);
				printf("NPM\t\t: %s\n", data[i].npm);
				printf("Jurusan\t\t: %s\n", data[i].jurusan);
				printf("Nomor HP\t: %s\n", data[i].no_hp);
				printf("Kelamin\t\t: %s\n", data[i].kelamin);
				printf("TTL\t\t: %s\n", data[i].ttl);
				printf("Alamat\t\t: %s\n\n", data[i].alamat);
				printf("===============================\n\n");
			}
			printf("\n");
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
			break;
		case 3:
			system("cls");
			for(i=0;i<a;i++){
				printf("===== data mahasiswa ke %d =====", i+1);
				printf("\nNama\t\t: %s\n", data[i].nama);
				printf("NPM\t\t: %s\n", data[i].npm);
				printf("Jurusan\t\t: %s\n", data[i].jurusan);
				printf("Nomor HP\t: %s\n", data[i].no_hp);
				printf("Kelamin\t\t: %s\n", data[i].kelamin);
				printf("TTL\t\t: %s\n", data[i].ttl);
				printf("Alamat\t\t: %s\n\n", data[i].alamat);
				printf("===============================\n\n");
			}
			printf("\n");
			printf("data mahasiswa yang ingin diubah: ");
			scanf("%i", &i);
			system("cls");
			printf("===============================\n");
			printf("1. Nama\t\t\t: %s\n", data[i].nama);
			printf("2. NPM\t\t\t: %s\n", data[i].npm);
			printf("3. Jurusan\t\t: %s\n", data[i].jurusan);
			printf("4. Nomor HP\t\t: %s\n", data[i].no_hp);
			printf("5. Kelamin\t\t: %s\n", data[i].kelamin);
			printf("6. TTL\t\t\t: %s\n", data[i].ttl);
			printf("7. Alamat\t\t: %s\n\n", data[i].alamat);
			printf("===============================\n");
			printf("pilihlah bagian yang ingin di ubah: ");
			scanf("%d", &ubah);
			if(ubah==1){
				printf("nama: ");
				scanf(" %[^\n]%*c", data[i].nama);
			}
			else if(ubah==2){
				printf("NPM: ");
				scanf(" %[^\n]%*c", data[i].npm);
			}
			else if(ubah==3){
				printf("Jurusan: ");
				scanf(" %[^\n]%*c", data[i].jurusan);
			}
			else if(ubah==4){
				printf("Nomor HP: ");
				scanf(" %[^\n]%*c", data[i].no_hp);
			}
			else if(ubah==5){
				printf("Kelamin: ");
				scanf(" %[^\n]%*c", data[i].kelamin);
			}
			else if(ubah==6){
				printf("TTL: ");
				scanf(" %[^\n]%*c", data[i].ttl);
			}
			else if(ubah==7){
				printf("Alamat: ");
				scanf(" %[^\n]%*c", data[i].alamat);
			}
			else{
				printf("data tidak ada");
			}
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
			break;
		case 4:
			system("cls");
			for(i=0;i<a;i++){
				printf("===== data mahasiswa ke %d =====", i+1);
				printf("\nNama\t\t: %s\n", data[i].nama);
				printf("NPM\t\t: %s\n", data[i].npm);
				printf("Jurusan\t\t: %s\n", data[i].jurusan);
				printf("Nomor HP\t: %s\n", data[i].no_hp);
				printf("Kelamin\t\t: %s\n", data[i].kelamin);
				printf("TTL\t\t: %s\n", data[i].ttl);
				printf("Alamat\t\t: %s\n\n", data[i].alamat);
				printf("===============================\n\n");
			}
			printf("\n");
			printf("data mahasiswa yang ingin hapus: ");
			scanf("%j", &j);
			for(i=1;i<a-j;i++){
				strcpy(data[j-1+i].nama,data[j+i].nama);
				strcpy(data[j-1+i].npm,data[j+i].npm);
				strcpy(data[j-1+i].jurusan,data[j+i].jurusan);
				strcpy(data[j-1+i].no_hp,data[j+i].no_hp);
				strcpy(data[j-1+i].kelamin,data[j+i].kelamin);
				strcpy(data[j-1+i].ttl,data[j+i].ttl);
				strcpy(data[j-1+i].alamat,data[j+i].alamat);
			}
			a=a-1;
			system("cls");
			printf("\ndata sudah terhapus\n\n");
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
			break;
		case 5:
			printf("Jenis Pengurutan\n");
			printf("1.Bubble Sort\n");
			printf("2.Selection Sort\n");
			printf("Pilih jenis pengurutan: ");
			scanf("%d",&metode);
			
			if(metode==1){
				printf("\nIni adalah pengurutan Bubble sort\n");
				printf("1.Ascending\n");
				printf("2.Descending\n");
				printf("Pilih jenis urutan: ");
				scanf("%d",&urutan);
				if(urutan==1){
					clock_t start = clock()/CLOCKS_PER_SEC;
					for(j=0;j<a;j++){
						for(x=0;x<a-1;x++){
							if(strcmp(data[x].npm, data[x+1].npm)>0){
								temp = data[x];
								data[x] = data[x+1];
								data[x+1] = temp;
							}	
						}
					}
					clock_t end = clock()/CLOCKS_PER_SEC*100;
					double elapsed = (double)(end - start);
					printf("\nWaktu eksekusi = %.3f", elapsed);
					printf("\nData berhasil diurutkan berdasarkan NPM terkecil\n");
				}
				else if(urutan==2){
					clock_t start = clock()/CLOCKS_PER_SEC;
					for(j=0;j<a;j++){
						for(x=0;x<a-1;x++){
							if(strcmp(data[x].npm, data[x+1].npm)<0){
								temp = data[x];
								data[x] = data[x+1];
								data[x+1] = temp;
							}	
						}
					}
					clock_t end = clock()/CLOCKS_PER_SEC*100;
					double elapsed = (double)(end - start);
					printf("\nWaktu eksekusi = %.3f", elapsed);
					printf("\nData berhasil diurutkan berdasarkan NPM terbesar\n");	
				}
			}
			else if(metode==2){
				printf("\nIni adalah pengurutan Selection sort\n");
				printf("1.Ascending\n");
				printf("2.Descending\n");
				printf("Pilih jenis urutan: ");
				scanf("%d",&urutan);
				if(urutan==1){
					clock_t start = clock()/CLOCKS_PER_SEC;
					for(j=0;j<a-1;j++){
						pos = j;
						for(x=j+1;x<a;x++){
							if(strcmp(data[x].npm,data[pos].npm)<0){
								pos=x;
							}
						}
						if(pos != j){
							temp=data[j];
							data[j]=data[pos];
							data[pos]=temp;
						}
					}
					clock_t end = clock()/CLOCKS_PER_SEC*100;
					double elapsed = (double)(end - start);
					printf("\nWaktu eksekusi = %.3f", elapsed);
					printf("\nData berhasil diurutkan berdasarkan NPM terkecil\n");
				}
				else if(urutan==2){
					clock_t start = clock()/CLOCKS_PER_SEC;
					for(j=0;j<a-1;j++){
						pos = j;
						for(x=j+1;x<a;x++){
							if(strcmp(data[x].npm,data[pos].npm)>0){
								pos=x;
							}
						}
						if(pos != j){
							temp=data[j];
							data[j]=data[pos];
							data[pos]=temp;
						}
					}
					clock_t end = clock()/CLOCKS_PER_SEC*100;
					double elapsed = (double)(end - start);
					printf("\nWaktu eksekusi = %.3f", elapsed);
					printf("\nData berhasil diurutkan berdasarkan NPM terbesar\n");
				}
			}
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
		case 6:
			printf("\nJenis Search\n");
			printf("1.Sequential search\n");
			printf("2.Binary search\n");
			printf("3.Interpolation search\n");
			printf("Pilih jenis searching: ");
			scanf("%d",&metode);
			if(metode==1){
				printf("\nIni adalah Sequential search\n");
				printf("data yang ingin dicari: ");
				scanf(" %[^\n]%*c", &npm);
				
				j=0;
				while(j<=i-1 && ketemu==0){
					if(strcmp(data[j].npm,npm)==0){
						ketemu=j+1;
						break;
					}
					else{
						j=j+1;
					}
				}
				printf("\n");
				if (ketemu==0){
					printf("tidak ketemu\n");
				}
				else{
					printf("NPM %s ketemu pada indeks ke %d\n", npm,ketemu);
					printf("===== data mahasiswa ke %d =====", ketemu);
					printf("\nNama\t\t: %s\n", data[ketemu-1].nama);
					printf("NPM\t\t: %s\n", data[ketemu-1].npm);
					printf("Jurusan\t\t: %s\n", data[ketemu-1].jurusan);
					printf("Nomor HP\t: %s\n", data[ketemu-1].no_hp);
					printf("Kelamin\t\t: %s\n", data[ketemu-1].kelamin);
					printf("TTL\t\t: %s\n", data[ketemu-1].ttl);
					printf("Alamat\t\t: %s\n", data[ketemu-1].alamat);
					printf("===============================\n\n");
				}
			}
			else if(metode==2){
				printf("\nIni adalah Binary search\n");
				printf("data harus diurutkan terlebih dahulu\n\n");
				printf("1.Data sudah urut\n");
				printf("2.Data belum urut\n");
				printf("apakah data sudah urut? ");
				scanf("%d",&urutan);
				if(urutan==1){
					printf("data yang ingin dicari: ");
					scanf(" %[^\n]%*c", &npm);
					akhir=a-1;
					tengah=(awal+akhir)/2; 
					while(ketemu==0&&awal<=akhir){
						if(strcmp(data[tengah].npm,npm)>0){
							akhir=tengah-1;
						}
						else if(strcmp(data[tengah].npm,npm)<0){
							awal=tengah+1;
						}
						else if(strcmp(data[tengah].npm,npm)==0){
							ketemu=tengah+1;
							break;
						}
						tengah=(awal+akhir)/2;
					}
					printf("\n");
					if (ketemu==0){
						printf("tidak ketemu\n");
					}
					else{
						printf("NPM %s ketemu pada indeks ke %d\n", npm,ketemu);
						printf("===== data mahasiswa ke %d =====", ketemu);
						printf("\nNama\t\t: %s\n", data[ketemu-1].nama);
						printf("NPM\t\t: %s\n", data[ketemu-1].npm);
						printf("Jurusan\t\t: %s\n", data[ketemu-1].jurusan);
						printf("Nomor HP\t: %s\n", data[ketemu-1].no_hp);
						printf("Kelamin\t\t: %s\n", data[ketemu-1].kelamin);
						printf("TTL\t\t: %s\n", data[ketemu-1].ttl);
						printf("Alamat\t\t: %s\n", data[ketemu-1].alamat);
						printf("===============================\n\n");
					}
				}
				else{
						printf("tolong urutkan data terelebih dahulu\n\n");
				}
			}
			else if(metode==3){
				printf("\nIni adalah Binary search\n");
				printf("data yang ingin dicari: ");
				scanf(" %[^\n]%*c", &npm);
				int low, high;
				int match = 0;
				float pos1=0;
				pos=0;
				low=0;
				high=a-1;
				for(j=0;j<a;j++){
						for(x=0;x<a-1;x++){
							if(strcmp(data[x].npm, data[x+1].npm)>0){
								temp = data[x];
								data[x] = data[x+1];
								data[x+1] = temp;
							}	
						}
					}
				printf("\n=======================\n");
				printf("data berhasil diurutkan\n");
				printf("=======================\n\n");
				do{
					pos1 = (float) strcmp(npm,data[low].npm)/strcmp(data[high].npm,data[low].npm)*(high-low)+low;
					pos = floor(pos1);
					if(strcmp(data[pos].npm,npm)==0){
						match=pos;
						break;
					}
					if(strcmp(data[pos].npm,npm)>0) high=pos-1;
					else
						if(strcmp(data[pos].npm,npm)>0)low=pos+1;
				}while((strcmp(npm,data[low].npm)>=0)&&(strcmp(npm,data[high].npm))<=0);
				
				if (match==0){
					printf("data tidak ditemukan");
				}
				else{
					printf("NPM %s ketemu pada indeks ke %d\n", npm,match+1);
					printf("===== data mahasiswa ke %d =====", match+1);
					printf("\nNama\t\t: %s\n", data[match].nama);
					printf("NPM\t\t: %s\n", data[match].npm);
					printf("Jurusan\t\t: %s\n", data[match].jurusan);
					printf("Nomor HP\t: %s\n", data[match].no_hp);
					printf("Kelamin\t\t: %s\n", data[match].kelamin);
					printf("TTL\t\t: %s\n", data[match].ttl);
					printf("Alamat\t\t: %s\n", data[match].alamat);
					printf("===============================\n\n");
				}	
			}
			else{
				printf("masukkan inputan yang benar\n");
				getch();
				goto pilihan;
			}
			printf("tekan apapun untuk kembali ke menu");
			getch();
			goto pilihan;
		case 7:
			printf("\nEXIT\n");
			break;
		default:
			printf("\nMohon masukkan pilhan yang benar");
			getch();
			goto pilihan;
			break;
	}
	return 0;
	
}
