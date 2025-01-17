#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void sort(int size);

char text[3][100],words[300][100];

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

	sort(j);
	int number=1,x;

	for (int i=0;i<j;){

		for (x=i;  strcmp(words[x],words[x+1])==0  ;x++){

			number++;

		}

		printf("\"%s\" %d kere var\n",words[i],number);

		i=i+number;
		number=1;

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