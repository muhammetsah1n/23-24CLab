#include <stdio.h>

int main(){
	int secim,sayi;
	
	printf("Macera Oyununa Hoş Geldiniz!\n");
	printf("Kendinizi gizemli bir mağarada buldunuz.\n");
	printf("Bir sonraki hamlenizi seçin:\n");
	printf("Olasi hamleler:\n1. Mağaranın derinliklerine git.\n2. Çıkış ara.\n3. Dinlen.\nSeçiminizi girin: ");
	scanf("%d",&secim);
	if (secim==1){
		printf("Mağaranın derinliklerine doğru ilerliyorsunuz...\n");
		printf("Karşınıza bir ejderha çıkıyor!\n");
		printf("TBu aşamada kurtulmak için %%50 şansınız var:\n");
        printf(" Şansınızı denemek için 1 ile 10 arasinda bir sayı girin:\n");
		scanf("%d",&sayi);
		if (sayi%2==0){
			printf(" Ejderha ile arkadaş oldunuz!! Kazandınız!\n");

		}
		else {
			printf(" Ejderha sizi yedi ve kaybettiniz!\n");
		}
	}
	
	else if (secim==2){
		printf("Çıkış arıyorsunuz...\n");
		printf("Bu aşamada kurtulmak için %%80 şansınız var:\n");
        printf(" Şansınızı denemek için 1 ile 10 arasinda bir sayı girin:\n");
		scanf("%d",&sayi);

		if (sayi==1){
			printf(" Yolunuzu kaybettiniz açlıktan öldünüz kaybettiniz!");
		}
        else if (sayi==2){
			printf(" Yolunuzu kaybettiniz açlıktan öldünüz kaybettiniz!");
		}
		else {
			printf(" Bir yol buldunuz kazandınız!");
		}

	}

	else if (secim==3){
		printf("Dinlenmeye karar verdiniz...\n");
		printf("Bu aşamada kurtulmak için %%70 şansınız var: \n");
        printf(" Şansınızı denemek için 1 ile 10 arasinda bir sayı girin:\n");
		scanf("%d",&sayi);

		if (sayi==3){
			printf("Bir lamba buldunuz icinden cin çıktı dileğinizi gerçekleştirdi kazandınız!");
		}
        else if (sayi==6){
			printf("Bir lamba buldunuz icinden cin çıktı dileğinizi gerçekleştirdi kazandınız!");
		}
        else if (sayi==9){
			printf("Bir lamba buldunuz icinden cin çıktı dileğinizi gerçekleştirdi kazandınız!");
		}
		else {
			printf("Zehirli bir örümcek sizi soktu ve öldünüz kaybettiniz!\n");
		}
		
		
		

	}
	else {
		printf("Geçersiz seçim! Oyun Bitti!\n");

	}
	
	
	



	return 0;
}
