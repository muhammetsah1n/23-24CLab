#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct customer{

    int accountNumber;
    char name[50],surname[50];
    double balance;

};

void update(int accountNumber,double currentAmount);

int main(){

    FILE *trans = fopen( "trans.txt" , "r" );
    FILE *output = fopen( "output.txt", "w");

    fprintf(output,"Processing....\n");
    
    int accountNumber;
    double add;
    struct customer customer;

    while (2==fscanf(trans,"%d%lf",&accountNumber,&add)){

        FILE *oldmast = fopen( "oldmast.txt" , "r");

        int process=0;

        while (4==fscanf(oldmast,"%d%s%s%lf",&customer.accountNumber,customer.name,customer.surname,&customer.balance)){

            if (customer.accountNumber==accountNumber){

                process=1;

                fprintf(output,"%d %s %s %.2lf\n",customer.accountNumber,customer.name,customer.surname,customer.balance+add);

                fclose(oldmast);

                update(accountNumber,customer.balance+add);

                break;

            }

        }

        if (process==0){
            fprintf(output,"Unmatched transaction record for account %d\n",accountNumber);
        }

        fclose(oldmast);

    }

    fclose(trans);

    FILE *oldmast = fopen( "oldmast.txt" , "r");

    while (4==fscanf(oldmast,"%d%s%s%lf",&customer.accountNumber,customer.name,customer.surname,&customer.balance)){

        trans = fopen( "trans.txt" , "r" );

        int present=0;

        while (2==fscanf(trans,"%d%lf",&accountNumber,&add)){

            if (accountNumber==customer.accountNumber){

                present=1;
                break;

            }

        }

        if (present==0){
            fprintf(output,"%d %s %s %.2lf\n",customer.accountNumber,customer.name,customer.surname,customer.balance);
        }

        fclose(trans);
    
    }

    return 0;
}

void update(int accountNumber,double currentAmount){

    FILE *oldmast = fopen( "oldmast.txt", "r" );
    FILE *newmast = fopen( "newmast.txt", "w" );

    struct customer customer;

    while ( 4==fscanf(oldmast,"%d%s%s%lf",&customer.accountNumber,customer.name,customer.surname,&customer.balance )){

        if (customer.accountNumber==accountNumber){

            fprintf(newmast,"%d %s %s %.2lf\n",customer.accountNumber,customer.name,customer.surname,currentAmount);
        }
        else{

            fprintf(newmast,"%d %s %s %.2lf\n",customer.accountNumber,customer.name,customer.surname,customer.balance);
        
        }

    }

    fclose(oldmast);
    fclose(newmast);

    oldmast = fopen( "oldmast.txt", "w" );
    newmast = fopen( "newmast.txt", "r" );

    while ( 4==fscanf(newmast,"%d%s%s%lf",&customer.accountNumber,customer.name,customer.surname,&customer.balance )){

        fprintf(oldmast,"%d %s %s %.2lf\n",customer.accountNumber,customer.name,customer.surname,customer.balance);

    }

    fclose(oldmast);
    fclose(newmast);

}