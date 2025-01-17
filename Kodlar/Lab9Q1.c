#include <stdio.h>

char tahta[8][8];

void get_input(void);
void bastir(void);
int kontrol(void);

int main(){

	get_input();
	bastir();

	if (kontrol()==1){

		printf("Tebrikler! Şövalye konumları sekiz şövalye problemine uygun");

	}
	else{

		printf("Şövalye konumları sekiz şövalye problemine uygun değil");

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

		tahta[row][column]='K';

	}

}

void bastir(void){

	printf("Şövalyelerin yerleştirildiği tahta:\n");

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

			if (tahta[row][column]=='K'){

				if (column-2 >-1){

					if (row-1 >-1){
						if (tahta[row-1][column-2]=='K'){
							return -1;
						}
					}

					if (row+1 <8){
						if (tahta[row+1][column-2]=='K'){
							return -1;
						}
					}
				
				}

				if (column-1 >-1){

					if (row-2 >-1){
						if (tahta[row-2][column-1]=='K'){
							return -1;
						}
					}

					if (row+2 <8){
						if (tahta[row+2][column-1]=='K'){
							return -1;
						}
					}
				
				}

				if (column+1 <8){

					if (row-2 >-1){
						if (tahta[row-2][column+1]=='K'){
							return -1;
						}
					}

					if (row+2 <8){
						if (tahta[row+2][column+1]=='K'){
							return -1;
						}
					}
				
				}

				if (column+2 <8){

					if (row-1 >-1){
						if (tahta[row-1][column+2]=='K'){
							return -1;
						}
					}

					if (row+1 <8){
						if (tahta[row+1][column+2]=='K'){
							return -1;
						}
					}
				
				}

			}

		}
	}
	
	return 1;

}
