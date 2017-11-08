#include<stdio.h>

int fncuadro(int , int ); /*funcion prototipo*/

int main(){
	
	int a,b;
	
	printf("Inserte el numero que definirá el alto el cuadro: ");
	scanf("%d",&a);
	printf("Inserte el numero que definirá el ancho el cuadro:  ");
	scanf("%d",&b);
	
	fncuadro(a,b);
	
	return 0;
	
}

int fncuadro(int l, int m) {
	
	int j=0;
	int k=0;
	
	for(j=1;j<=l;j=j++){
		for(k=1;k<=m;k=k++){
			
			printf("+");
		}
		printf("\n");
	}
	return 0;
}
