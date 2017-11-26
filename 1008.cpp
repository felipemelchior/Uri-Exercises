#include <stdio.h>

int main(void){
	int numF, numH;
	float Valor;

	scanf("%d %d %f", &numF, &numH, &Valor);

	printf("NUMBER = %d\nSALARY = U$ %.2f\n", numF, (float)numH*(float)Valor);
}