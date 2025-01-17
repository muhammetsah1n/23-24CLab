#include <stdio.h>
#include <math.h>

double calArea(double x1,double y1,double x2,double y2,double x3,double y3);
int factorial(int number);
int permutation(int n,int r);
int combination(int n,int r);

int main(){

    int secim;

    printf("Bir islem secin:\n1. Ucgenin Alanini Hesapla\n2. PermUtasyon Hesapla\n3. Kombinasyon Hesapla\n");
    scanf("%d",&secim);
    printf("Girilen secim: %d\n",secim);

    switch(secim){

        case 1:{

            double x1,y1,x2,y2,x3,y3;
            printf("Ucgenin koordinatlarini girin:\n");
            scanf("%lf%lf",&x1,&y1);
            scanf("%lf%lf",&x2,&y2);
            scanf("%lf%lf",&x3,&y3);
            printf("Nokta 1 (x1, y1): \nGirilen x1 ve y1 degeri: %.2lf, %.2lf\n",x1,y1);
            printf("Nokta 2 (x2, y2): \nGirilen x2 ve y2 degeri: %.2lf, %.2lf\n",x2,y2);
            printf("Nokta 3 (x3, y3): \nGirilen x3 ve y3 degeri: %.2lf, %.2lf\n",x3,y3);
            printf("Ucgenin alani: %.2lf\n",calArea(x1,y1,x2,y2,x3,y3));

            }
            break;

        case 2:{

            int n,r;
            printf("Permutasyon icin n ve r degerlerini girin:\n\n");
            scanf("%d%d",&n,&r);
            printf("Girilen n ve r degeri: %d, %d\n",n,r);
            printf("Permutasyon P(%d, %d) = %d\n",n,r,permutation(n,r));

            }
            break;
        
        case 3:{

            int n,r;
            printf("Kombinasyon icin n ve r degerlerini girin:\n\n");
            scanf("%d%d",&n,&r);
            printf("Girilen n ve r degeri: %d, %d\n",n,r);
            printf("Kombinasyon P(%d, %d) = %d\n",n,r,combination(n,r));

            }
            break;

        default:
            printf("Gecersiz Secim!\n");
            break;

    }

    return 0;
}

double calArea(double x1,double y1,double x2,double y2,double x3,double y3){

    return fabs(0.5*(x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3));

}

int permutation(int n,int r){

    return factorial(n)/factorial(n-r);

}

int combination(int n,int r){

    return factorial(n)/(factorial(r)*factorial(n-r));

}

int factorial(int number){

    if (number==0||number==1){

        return 1;

    }

    else{

        return number*factorial(number-1);

    }

}

