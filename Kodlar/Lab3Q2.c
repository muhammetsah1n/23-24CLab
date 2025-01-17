#include <stdio.h>
#include <math.h>

int main(){
	int derece,counter=0,payda=1;
	double hassasiyet,eklenecek=10.0,radyan,sonuc=0.0,pay=1;

	scanf("%d",&derece);
	scanf("%lf",&hassasiyet);
	radyan=derece*3.141592653589/180;
	while(fabs(eklenecek)>=hassasiyet){
		
		if (counter!=0){
			payda*=counter*(counter-1);
		}
		
		eklenecek=pay/payda;
		sonuc+=eklenecek;
		

	pay*=-radyan*radyan;
	counter+=2;
	}

	printf("cos(%d) = %lf\n",derece,sonuc);
	printf("cos(%d) from math.h = %lf\n",derece,cos(derece*3.141592653589/180));



	return 0;
}
