#include <stdio.h>
#include <math.h>

double calDistance(double x1,double y1,double x2,double y2);
int tersiniBul(int number);

int main(){

    int secim;

    printf("Bir islem secin:\n1. Iki nokta arasindaki uzakligi hesapla\n2. Bir sayinin tersini bul\n");
    scanf("%d",&secim);
    printf("Girilen secim : %d\n",secim);

    switch(secim){

        case 1:{

            double x1,y1,x2,y2;
            printf("x1 ve y1 icin koordinatlari girin: \n");
            scanf("%lf%lf",&x1,&y1);
            printf("Girilen x1 ve y1 degeri: %.2lf, %.2lf\n",x1,y1);
            printf("x2 ve y2 icin koordinatlari girin: \n");
            scanf("%lf%lf",&x2,&y2);
            printf("Girilen x2 ve y2 degeri: %.2lf, %.2lf\n",x2,y2);
            printf("Noktalariniz arasindaki uzaklik: %.2lf\n",calDistance(x1,y1,x2,y2));

            }
            break;

        case 2:{

            int sayi;

            printf("Tersini bulmak istediginiz sayiyi girin: ");
            scanf("%d",&sayi);
            printf("Girilen sayi: %d\n",sayi);
            printf("Tersine cevrilmis sayi: %d\n",tersiniBul(sayi));
            printf("Tersine cevrilmis sayinin 2 kati: %d\n",tersiniBul(sayi)*2);

        }
            break;
        

        default:
            printf("Gecersiz Secim!\n");
            break;

    }
    return 0;
}

double calDistance(double x1,double y1,double x2,double y2){

    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));

}

int tersiniBul(int number){

    int basamakSayisi=0,temp=number,sonuc=0,basamak;

    while(temp!=0){

        temp/=10;
        basamakSayisi++;

    }

    while(number!=0){

        basamak=number%10;
        number/=10;
        sonuc+=basamak*pow(10,basamakSayisi-1);
        basamakSayisi--;

    }

    return sonuc;

}