#include <stdio.h>

int main(){

	char karakter;
	int sayi;

	while ((karakter=getchar())!=EOF){
		
        scanf("%d",&sayi);

		switch(karakter){
			
			case 'r':

				for (int i=1;i<=sayi;i++){
				
					for (int j=i;j<=sayi;j++){
						printf("*");
					}
					
					for (int k=i;k>1;k--){
						printf("-");
					}

					printf("\n");
				
				}
                printf("\n");
				break;

			case 'l':
				
                for (int i=1;i<=sayi;i++){

					for (int k=i;k>1;k--){
                        printf("-");
					}
				
					for (int j=i;j<=sayi;j++){
			            printf("*");
				    }
					
                    printf("\n");
					
                }
                printf("\n");
				break;

			case 'd':
				
                for (int i=1;i<=sayi;i++){
				
					for (int j=i;j<sayi;j++){
				        printf("-");
				    }
					
					for (int k=i;k>=1;k--){
						printf("*");
					}

					printf("\n");
				
				}
                printf("\n");
				break;

			case 'b':

				for (int i=1;i<=sayi;i++){
				
					for (int k=i;k>=1;k--){
			            printf("*");
				    }
					
					for (int j=i;j<sayi;j++){
						printf("-");
					}

					printf("\n");
				
				}
                printf("\n");
				break;
			
            }	

	}

	return 0;
}
