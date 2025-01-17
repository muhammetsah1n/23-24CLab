#include <stdio.h>
#include <stdlib.h>

char letters[10][4]={"","","ABC","DEF","GHI","JKL","MNO","PRS","TUV","WXY"};
char kelime[8];
int numbers[7];

int main(){

    FILE *fPtr=fopen("phone1.txt","w");

    int number,counter=0;

    while (counter<7){

        scanf("%d",&number);

        if (number!=0 && number!=1){

            numbers[counter++]=number;

        }

    }

    for (int iN1=0;iN1<3;iN1++){

        kelime[0]=letters[numbers[0]][iN1];

        for (int iN2=0;iN2<3;iN2++){

            kelime[1]=letters[numbers[1]][iN2];

            for (int iN3=0;iN3<3;iN3++){

                kelime[2]=letters[numbers[2]][iN3];

                for (int iN4=0;iN4<3;iN4++){

                    kelime[3]=letters[numbers[3]][iN4];

                    for (int iN5=0;iN5<3;iN5++){

                        kelime[4]=letters[numbers[4]][iN5];

                        for (int iN6=0;iN6<3;iN6++){

                            kelime[5]=letters[numbers[5]][iN6];

                            for (int iN7=0;iN7<3;iN7++){

                                kelime[6]=letters[numbers[6]][iN7];
                                kelime[7]='\0';

                                fprintf(fPtr,"%s\n",kelime);

                            }

                        }

                    }

                }

            }

        }

    }

    fprintf(fPtr,"\nPhone number is %d%d%d-%d%d%d%d",numbers[0],numbers[1],numbers[2],numbers[3],numbers[4],numbers[5],numbers[6]);

    return 0;

}