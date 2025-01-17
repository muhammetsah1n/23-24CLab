#include <stdio.h>

int main(){
    
    int yolUzunlugu,litreFiyati,yakitTuketim,parkUcreti,yolUcreti;
    printf("Yol uzunlugu: ");
    scanf("%d",&yolUzunlugu);
    printf("Yakit litre fiyati: ");
    scanf("%d",&litreFiyati);
    printf("Arac yakiti: ");
    scanf("%d",&yakitTuketim);
    printf("Park ucreti: ");
    scanf("%d",&parkUcreti);
    printf("Parali yol ucreti: ");
    scanf("%d",&yolUcreti);
    printf("Toplam ucret: %d",(yakitTuketim*yolUzunlugu*litreFiyati)/100+parkUcreti+yolUcreti);

    return 0;
}
