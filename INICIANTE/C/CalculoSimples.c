#include <stdio.h>

int main(){

int codigoPeca1 = 0, qtdPeca1 = 0; float valorPeca1 = 0;
int codigoPeca2 = 0, qtdPeca2 = 0; float valorPeca2 = 0;
float totalCompra = 0;
scanf("%d %d %f", &codigoPeca1, &qtdPeca1, &valorPeca1);
scanf("%d %d %f", &codigoPeca2, &qtdPeca2, &valorPeca2);
totalCompra = (qtdPeca1 * valorPeca1) + (qtdPeca2 * valorPeca2);
printf("VALOR A PAGAR: R$ %.2f\n", totalCompra);
return 0;
}
