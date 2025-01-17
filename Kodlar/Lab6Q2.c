#include <stdio.h>

int main(){

	int koltuklar[15]={0},secim,tekli=1,ciftli=2;
	char cevap;
	
	while(koltuklar[12]!=1 || koltuklar[14]!=1){

		printf("Lutfen \"tekli koltuk\" icin 1, \"ikili koltuk\" icin 2 degerini giriniz: \n");
		scanf("%d",&secim);
		
		switch(secim){

			case 1:
				if (koltuklar[12]!=1){

					printf("Tekli koltuklarda atamaniz %d.\n",tekli);
					koltuklar[tekli-1]=1;
					tekli+=3;

				}
				else{

					printf("Tekli koltuk bolumu dolmustur. Ikili koltuk bolumunde oturmak ister misiniz (Y veya N)?: \n");
					scanf(" %c",&cevap);
					
					if ((cevap=='y' || cevap=='Y') && (koltuklar[14]!=1)){
					
						printf("Ikili koltuklarda atamaniz %d.\n",ciftli);
						koltuklar[ciftli-1]=1;
						if (ciftli%3==0){
							ciftli+=2;
						}
						else{
							ciftli+=1;
						}
						

					}
					if (cevap=='n' || cevap=='N'){
						printf("Sonraki sefer 3 saat sonra kalkiyor.\n");
					}

				}
			
				break;
			case 2:
				if (koltuklar[14]!=1){

					printf("Ikili koltuklarda atamaniz %d.\n",ciftli);
					koltuklar[ciftli-1]=1;
					if (ciftli%3==0){
						ciftli+=2;
					}
					else{
						ciftli+=1;
					}
				}
				else{

					printf("Ikili koltuk bolumu dolmustur. Tekli koltuk bolumunde oturmak ister misiniz (Y veya N)?: \n");
					scanf(" %c",&cevap);

					if ((cevap=='y' || cevap=='Y') && (koltuklar[12]!=1)){
					
						printf("Tekli koltuklarda atamaniz %d.\n",tekli);
						koltuklar[tekli-1]=1;
						tekli+=3;
						
					}
					else{
						printf("Sonraki sefer 3 saat sonra kalkiyor.\n");
					}

				}
				break;

		}
	
	}
	printf("Bu otobuse ait tum koltuklar dolmustur.\n");

	return 0;
}
