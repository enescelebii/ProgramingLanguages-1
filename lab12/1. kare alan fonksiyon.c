#include<stdio.h>
int kareAL(int);
int main(){
	int a;
	printf("Bu program karenin alan�n� fonksiyon ile hesaplar\n");
	scanf("%d",&a);
	printf("sonuc:%d",kareAL(a));
}

int kareAL(int a){
	int x;
	x=a*a;
	return x;
}
