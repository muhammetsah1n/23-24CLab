#include <stdio.h>

int main(){

	int sudoku[9][9],girdi,toplam=0,correction=1;

	for (int i=0;i<=8;i++){

		for (int j=0;j<=8;j++){

			scanf("%d",&girdi);
			sudoku[i][j]=girdi;

		}

	}

    int kareNumarasi=1;

    for (int startRow=0;startRow!=9;startRow+=3){

		for (int startColumn=0;startColumn!=9;startColumn+=3){

            	for (int i=startRow;i<=startRow+2;i++){

		            for (int j=startColumn;j<=startColumn+2;j++){

			            toplam+=sudoku[i][j];

		            }

	            }

                if (toplam!=45){

                    printf("%d numarali karede hata var\n",kareNumarasi);
                    correction=0;

                }
                toplam=0;
                kareNumarasi++;

		}

	}

	for (int i=0;i<=8;i++){

		for (int j=0;j<=8;j++){

			toplam+=sudoku[i][j];

		}

        if (toplam!=45){

            printf("%d numarali satirda hata var\n",i+1);
            correction=0;

        }
        toplam=0;

	}

    for (int i=0;i<=8;i++){

		for (int j=0;j<=8;j++){

			toplam+=sudoku[j][i];

		}

        if (toplam!=45){

            printf("%d numarali sutunda hata var\n",i+1);
            correction=0;

        }
        toplam=0;

	}

    if (correction){

        printf("Cozumde hata yok\n");

    }

    for (int i=0;i<=8;i++){

		for (int j=0;j<=8;j++){

			if (j==3 || j==6){
                printf("|");
            }
            printf("%d ",sudoku[i][j]);

		}
        
        printf("\n");
        if (i==2 || i==5){
            printf("--------------------\n");
        }

	}
    
	return 0;
}