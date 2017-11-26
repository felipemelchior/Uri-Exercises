#include <stdio.h>

int main(void){
	int cod1, cod2, num1, num2;
	float valor1, valor2;

	scanf("%d %d %f", &cod1, &num1, &valor1);

	scanf("%d %d %f", &cod2, &num2, &valor2);

	printf("VALOR A PAGAR: R$ %.2f\n", (((float)num1*(float)valor1)+((float)num2*(float)valor2)));
}