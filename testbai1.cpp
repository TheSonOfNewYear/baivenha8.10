#include <stdio.h>
int main(){
	int abcd;
	int x;// tong cac so
	
	printf("\nNhap abcd = ");
	scanf("%d",&abcd);

	if(abcd>0 && abcd<9999 && (abcd/1000)%10>0 ){
		x = (abcd/1000)%10 +  (abcd/100)%10*10 +  (abcd/10)%10*100 + (abcd%10)*1000;
		printf("%d la so nghich dao ",x);
	}else if((abcd/1000)%10==0){
		x = (abcd/100)%10*10 +  (abcd/10)%10*100 + (abcd%10)*1000;
		printf("%d la so nghich dao ",x);
	}else{
		printf("%d khong phai la so nghich dao",x);
	}	
}	
