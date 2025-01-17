#include <stdio.h>

char preWorld[10][10];
char newWorld[10][10];

void get_input(void);
void bastir(void);
void copy(void);
void update(void);

int main(){

	get_input();
    
    int generation;

    scanf("%d",&generation);

    printf("Initial state:\n");
    bastir();

    for (int i=1;i<=generation;i++){

        printf("Generation %d:\n",i);
        update();
        bastir();
        copy();

    }

	return 0;
}

void get_input(void){

    int input;

	for (int row=0;row<10;row++){
        for (int column=0;column<10;column++){

            scanf("%d",&input);

            preWorld[row][column]=input;
            newWorld[row][column]=input;

        }
    }

}

void bastir(void){

	for (int row=0;row<10;row++){
        for (int column=0;column<10;column++){

            if (newWorld[row][column]==1){

                printf("%c ",'#');

            }
            else{

                printf("%c ",'.');

            }

        }
        puts("");
    }
    puts("");

}

void copy(void){

    for (int row=0;row<10;row++){
        for (int column=0;column<10;column++){

            preWorld[row][column]=newWorld[row][column];

        }
    }

}

void update(void){

    int sayac=0;

    for (int row=0;row<10;row++){
        for (int column=0;column<10;column++){

            if (row-1>-1){

                if (column-1>-1){

                    if (preWorld[row-1][column-1]==1){
                        sayac++;
                    }

                }

                if (preWorld[row-1][column]==1){
                    sayac++;
                }

                if (column+1<10){

                    if (preWorld[row-1][column+1]==1){
                        sayac++;
                    }

                }

            }

            if (column-1>-1){

                if (preWorld[row][column-1]==1){
                    sayac++;
                }

            }

            if (column+1<10){

                if (preWorld[row][column+1]==1){
                        sayac++;
                }

            }

            if (row+1<10){

                if (column-1>-1){

                    if (preWorld[row+1][column-1]==1){
                        sayac++;
                    }

                }

                if (preWorld[row+1][column]==1){
                    sayac++;
                }

                if (column+1<10){

                    if (preWorld[row+1][column+1]==1){
                        sayac++;
                    }

                }

            }

            if (preWorld[row][column]==1){

                if (sayac==2 || sayac==3){
                    newWorld[row][column]=1;
                }
                else{
                    newWorld[row][column]=0;
                }

            }

            else{

                if (sayac==3){
                    newWorld[row][column]=1;
                }
                else{
                    newWorld[row][column]=0;
                }

            }

            sayac=0;

        }
    }

}