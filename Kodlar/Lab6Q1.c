#include <stdio.h>

int main(){

	int koltuklar[10]={0},secim,birinci=1,ekonomi=6;
	char cevap;
	
	while(koltuklar[4]!=1 || koltuklar[9]!=1){

		printf("Lutfen \"birinci sinif\" icin 1, \"ekonomi\" icin 2 degerini giriniz: \n");
		scanf("%d",&secim);
		
		switch(secim){

			case 1:
				if (koltuklar[4]!=1){

					printf("Birinci sinifta koltuk atamaniz %d.\n",birinci);
					koltuklar[birinci-1]=1;
					birinci+=1;

				}
				else{

					printf("Birinci sinif bolumu dolmustur. Ekonomi bolumunde oturmak ister misiniz (Y veya N)?: \n");
					scanf(" %c",&cevap);
					
					if ((cevap=='y' || cevap=='Y') && (koltuklar[9]!=1)){
					
						printf("Ekonomide koltuk atamaniz %d.\n",ekonomi);
						koltuklar[ekonomi-1]=1;
						ekonomi++;
						

					}
					if (cevap=='n' || cevap=='N'){
						printf("Sonraki ucus 3 saat sonra kalkiyor.\n");
					}

				}
			
				break;
			case 2:
				if (koltuklar[9]!=1){

					printf("Ekonomide koltuk atamaniz %d.\n",ekonomi);
					koltuklar[ekonomi-1]=1;
					ekonomi++;
				}
				else{

					printf("Ekonomi bolumu dolmustur. Birinci sinif bolumunde oturmak ister misiniz (Y veya N)?: \n");
					scanf(" %c",&cevap);

					if ((cevap=='y' || cevap=='Y') && (koltuklar[4]!=1)){
					
						printf("Birinci sinifta koltuk atamaniz %d.\n",birinci);
						koltuklar[birinci-1]=1;
						birinci+=1;
						
					}
					else{
						printf("Sonraki ucus 3 saat sonra kalkiyor.\n");
					}

				}
				break;

		}
	
	}
	printf("Bu ucusa ait tum koltuklar dolmustur.\n");

	return 0;
}