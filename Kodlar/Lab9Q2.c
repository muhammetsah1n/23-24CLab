#include <stdio.h>

char tahta[8][8];

void get_input(void);
void bastir(void);
int kontrol(void);

int main(){

	get_input();
	bastir();

	if (kontrol()==1){

		printf("Tebrikler! Vezir konumlari sekiz vezir problemine uygun \n");

	}
	else{

		printf("Vezir konumlari sekiz vezir problemine uygun degil \n");

	}

	return 0;
}

void get_input(void){

	for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){

			tahta[i][j]='-';

		}
	}

	int row,column;

	for (int i=1;i<=8;i++){

		scanf("%d%d",&row,&column);

		tahta[row][column]='Q';

	}

}

void bastir(void){

	printf("Vezirlerin yerlestirildigi tahta:\n");

	for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){

			printf("%c ",tahta[i][j]);

		}
		printf("\n");
	}

}

int kontrol(void){

	for (int row=0;row<8;row++){
		for (int column=0;column<8;column++){

			if (tahta[row][column]=='Q'){

                for (int cColumn=0;cColumn<8;cColumn++){

                    if (cColumn==column){
                        continue;
                    }

                    if (tahta[row][cColumn]=='Q'){
                        return -1;
                    }

                }

                for (int cRow=0;cRow<8;cRow++){

                    if (cRow==row){
                        continue;
                    }

                    if (tahta[cRow][column]=='Q'){
                        return -1;
                    }

                }

                for (int cRow=row-1,cColumn=column+1;cRow>-1 && cColumn<8;cRow--,cColumn++){

                    if (tahta[cRow][cColumn]=='Q'){
                        return -1;
                    }

                }

                for (int cRow=row-1,cColumn=column-1;cRow>-1 && cColumn>-1;cRow--,cColumn--){

                    if (tahta[cRow][cColumn]=='Q'){
                        return -1;
                    }

                }

                for (int cRow=row+1,cColumn=column-1;cRow<8 && cColumn>-1;cRow++,cColumn--){

                    if (tahta[cRow][cColumn]=='Q'){
                        return -1;
                    }

                }

                for (int cRow=row+1,cColumn=column+1;cRow<8 && cColumn<8;cRow++,cColumn++){

                    if (tahta[cRow][cColumn]=='Q'){
                        return -1;
                    }

                }

            }

		}
	}
	
	return 1;

}
