#include <stdio.h>

int main(){

	int labirent[9][9],girdi,row,column,devam=1;

	for (int i=0;i<=8;i++){

		for (int j=0;j<=8;j++){

			scanf("%d",&girdi);
			labirent[i][j]=girdi;

		}

	}

	scanf("%d%d",&row,&column);
	labirent[row][column]=5;

	while (devam!=0 ){

		if (row+1==9 || row-1==-1 || column+1==9 || column-1==-1){
			
			break;
		
		} 

		if (labirent[row][column+1]==1){

			labirent[row][column+1]=7;
			column++;
			
		}

		else if (labirent[row+1][column]==1){

			labirent[row+1][column]=7;
			row++;
			
		}

		else if (labirent[row][column-1]==1){

			labirent[row][column-1]=7;
			column--;
			
		}

		else if (labirent[row-1][column]==1){

			labirent[row-1][column]=7;
			row--;
			
		}
		
		else{

			devam=0;			

		}
		
		
	}

	if (devam){
		printf("Cikis grid[%d][%d] noktasinda bulunmustur\n",row,column);
	}
	
	else{
		printf("Gidilecek yol kalmadi\n");
	}

	
	for (int i=0;i<=8;i++){

		for (int j=0;j<=8;j++){

			printf("%d ",labirent[i][j]);

		}
		puts("");

	}
	

	return 0;
}
