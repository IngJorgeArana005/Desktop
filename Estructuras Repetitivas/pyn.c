#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m=0,l=0,num,c=0,i;
	printf("Este programa te pedira 10 numeros y \nte dira cuantos son positivos y cuantos negativos\n");
	for(i=0;i<10;i++){
		printf("Dame el numero # %d\n",i+1);
		scanf("%d",&num);
		system("CLS");
		if(num>0){
			m++;
		}else{
			l++;
		}
		if(num>c){
			c=num;
		}
	}
	printf("Hay %d numeros psitivos y %d numeros negativos y el mayor de todos es: %d!!!",m,l,c);
	getch();
	return 0;
}
