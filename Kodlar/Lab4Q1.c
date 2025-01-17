#include <stdio.h>

int main(){

	char sembol;
	int sayi,sonuc;

	while ((sembol=getchar())!=EOF){

		switch(sembol){
			
			case '+':

                sonuc=0;
                scanf("%d",&sayi);

				while (sayi!=-1){

                    sonuc+=sayi;
                    scanf("%d",&sayi);

                }

                printf("%d\n",sonuc);

				break;

			case '-':
				
                scanf("%d",&sayi);
                sonuc=sayi*2;

				while (sayi!=-1){
                    
                    sonuc-=sayi;
                    scanf("%d",&sayi);

                }

                printf("%d\n",sonuc);
                
				break;

			case '*':
				
                sonuc=1;
                scanf("%d",&sayi);

				while (sayi!=-1){

                    sonuc*=sayi;
                    scanf("%d",&sayi);

                }

                printf("%d\n",sonuc);
                
				break;

			case '/':

                scanf("%d",&sayi);
                sonuc=sayi*sayi;

				while (sayi!=-1){
                    
                    sonuc/=sayi;
                    scanf("%d",&sayi);
                    if (sayi==0){
                        printf("0 ile bolum hatasi, sonuc 0 olarak basilacak\n");
                        sonuc=0;
                        break;
                    }

                }

                printf("%d\n",sonuc);
				
				break;
    
            default:
                printf("Hata! Operator dogru degil\n");

        }

    }

	return 0;
}
