#include <stdio.h>

int main(){
    
    int _kilo,vki;
    float boy;
    scanf("%d",&_kilo);
    scanf("%f",&boy);
    vki=_kilo/(boy*boy);
    printf("\nVKI = %d",vki);
    printf("\n\nVKI degerleri ve anlamlari\n");
    printf("Zayif\t\tVKI<18.5\n");
    printf("Normal\t\t18.5<=VKI<=24.9\n");
    printf("Kilolu\t\t25<=VKI<=29.9\n");
    printf("Obez\t\t30<=VKI\n");


    return 0;
}
