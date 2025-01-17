#include <stdio.h>
#include <math.h>

int main(){
	int derece,counter=1,payda=1;
	double hassasiyet,eklenecek=10.0,radyan,sonuc=0.0,pay;

	scanf("%d",&derece);
	scanf("%lf",&hassasiyet);
	radyan=derece*3.141592653589/180;
	pay=radyan;
	while(fabs(eklenecek)>=hassasiyet){
		
		if (counter!=1){
			payda*=counter*(counter-1);
		}
		
		eklenecek=pay/payda;
		sonuc+=eklenecek;
		

	pay*=-radyan*radyan;
	counter+=2;
	}

	printf("sin(%d) = %lf\n",derece,sonuc);
	printf("sin(%d) from math.h = %lf\n",derece,sin(derece*3.141592653589/180));



	return 0;
}

