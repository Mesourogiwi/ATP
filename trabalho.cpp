#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdint.h>

double func_quad(double a, double b, double c){
	double delta=0, x1=0, x2=0;
	delta = pow(b, 2) - 4*a*c;
	if (delta >= 0){
		x1 = (-b + sqrt(delta))/2*a;
		x2 = (-b - sqrt(delta))/2*a;
		printf("\nOs valores de x1 e x2 s�o respectivamente: %.2lf e %.2lf\n\n", x1,x2);
	}
	else printf("\nN�o foi poss�vel achar os valores reais de x pois o delta � negativo\n\n");
}

double func_afim(double a, double b){
	double result=0;
	result = (-b)/a;
	printf("O valor de x �: %.2lf\n", result);
}

int main (void){
	double a=0, b=0, c=0, d=0;
	int op;
	setlocale(LC_ALL, "Portuguese");
	system("COLOR F1");
	do{
		system("cls");
		printf("*****************************************************************************\n");
		printf("*                                                                           *\n");
		printf("*                                                                           *\n");
		printf("*                    Trabalho ATPI - Fun��es do 3� grau                     *\n");
		printf("*                                                                           *\n");
		printf("*                                                                           *\n");
		printf("*****************************************************************************\n\n\n");
		
		printf("Funcionalidades do programa: \n\n");
		printf("1 - Este programa foi feito para calcular fun��es de 3� grau que satisfa�am ax� + bx� + cx + d = 0\n");
		printf("2 - Caso o valor de a seja 0, e o valor de b for diferente de 0, o programa ir� calcular uma fun��o de 2� grau tal que:\n");
		printf("ax� + bx + c, usando os valores de b no lugar de a, c no lugar de b e d no lugar de c\n");
		printf("3 - Se ambos os valores de a e b forem 0 e o valor de c for diferente de 0, o programa ir� calcular uma fun��o afim tal\n");
		printf("que: ax + b = 0, usando o valor de c no lugar de a, e d no lugar de b\n");
		printf("4 - Se os valores de a, b e c forem iguais a 0, n�o restar� nada para calcular.\n\n\n");
		
		printf("Digite o valor de a: \n");
		scanf("%lf", &a);
		printf("Digite o valor de b: \n");
		scanf("%lf", &b);
		printf("Digite o valor de c: \n");
		scanf("%lf", &c);
		printf("Digite o valor de d: \n");
		scanf("%lf", &d);
		if (a != 0){
			printf("Ser� calculado uma fun��o de 3� grau aqui\n");
		}
		else if (a==0 && b!=0){
			func_quad(b, c, d);
		}
		else if (a==0 && b==0 && c!=0){
			func_afim(c, d);
		}
		else{
			printf("Erro nos dados inseridos!!!\n\n");
		}
		
		printf("Deseja fazer a opera��o novamente? (Digite qualquer n�mero para repetir e 0 para sair do programa)\n\n");
		scanf("%d", &op);
	}while(op);
	getch();
	system("pause");
	return 0;
}
