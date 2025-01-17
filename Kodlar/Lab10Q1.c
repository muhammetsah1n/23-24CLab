#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void sort(int size);

char text[3][100],words[300][100];
int occurances[100];

int main(){

	for (int i=0;i<3;i++){

		fgets(text[i],100,stdin);

		text[i][strcspn(text[i],"\n")]=' ';
		text[i][strcspn(text[i],".")]=' ';

	}

	int j=0;

	for (int i=0;i<3;i++){

		char *token=strtok(text[i]," ");

		while (token != NULL){

			strcpy(words[j++],token);

			token=strtok(NULL," ");

		}

	}

	for (int i=0;i<j;i++){

		occurances[strlen(words[i])]++;

	}

    for (int i=0;i<100;i++){

        if (occurances[i]!=0){
            printf("%d kelimenin uzunlugu %d\n",occurances[i],i);
        }

    }

    puts("");

    sort(j);

    printf("Kelimelerin alfabetik sirali listesi:\n");

    for (int i=0;i<j;i++){

		printf("\"%s\"\n",words[i]);

	}

	return 0;
}

void sort(int size){

	char temp[100];

	for (int i=1;i<size-1;i++){

		for (int j=0;j<size-1;j++){
		
			if (strcmp(words[j],words[j+1])==1){

				strcpy(temp,words[j]);
				strcpy(words[j],words[j+1]);
				strcpy(words[j+1],temp);

			}

		}

	}

}