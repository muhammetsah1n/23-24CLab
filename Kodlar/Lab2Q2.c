#include <stdio.h>

int main(){
	int secim,sayi1,sayi2,tahmin,rakam,sonuc;
	
	printf("Matematik Oyununa Hoş Geldiniz!\n");
	printf("Bir çocuğa istediği şekilde sorular sorup cevabını tahmin etmesini isteyeceksiniz...\n");
	printf("Bir sonraki hamlenizi seçin:\n");
	printf("Olası hamleler:\n1. Toplama.\n2. Tek/Çift Bulma.\n3. Küçük Sayı Bulma.\nSeçiminizi girin: ");
	scanf("%d",&secim);
	if (secim==1){
		printf("Birinci sayıyı giriniz...\n");
		scanf("%d",&sayi1);
		printf("İkinci sayıyı giriniz...\n");
		scanf("%d",&sayi2);
		printf("Tahmini hesap sonucunuzu giriniz...\n");
		scanf("%d",&tahmin);
		if (tahmin==sayi1+sayi2){
			printf("%d sonucunu başarıyla buldunuz tebrikler!",sayi1+sayi2);

		}
		else {
			printf("Biraz daha toplama işlemi çalışmalısınız. Kaybettiniz! ");
		}
	}
	
	else if (secim==2){
		printf("Tek mi çift mi olduğunu bulmak istediğiniz sayıyı giriniz.\n");
		scanf("%d",&rakam);
		printf("Tahmini hesap sonucunuzu giriniz(0-Çift,1-Tek)\n");
		scanf("%d",&tahmin);
		
		if (rakam%2==0){
			sonuc=0;

		}
		else {
			sonuc=1;
		}
		
		if (tahmin==sonuc){
			if (sonuc==1){
				printf("Tahmininiz tek sayı, Kazandınız.");
			}
			else {
				printf("Tahmininiz çift sayı, Kazandınız.");
			}

		}
		else {
			printf("Yanlış tahmin yaptınız. Kaybettiniz!");
		}

	}

	else if (secim==3){
		printf("Şimdi 2 tane sayı gireceksiniz.\n");
		printf("Birinci sayıyı giriniz...\n");
		scanf("%d",&sayi1);
		printf("İkinci sayıyı giriniz...\n");
		scanf("%d",&sayi2);
		
		if(sayi1>sayi2){
			 printf(" %d sayısı daha küçüktür.",sayi2);
		}
		else{
			 printf(" %d sayısı daha küçüktür.",sayi1);
		}
		
		
		

	}
	else {
		printf("Geçersiz seçim! Oyun Bitti!\n");

	}
	
	
	



	return 0;
}
