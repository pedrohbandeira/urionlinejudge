#include <stdio.h>
 
int main() {
 
   int numFuncionario = 0, qtdHoras = 0;
   float valorHora = 0, salario = 0;
   scanf("%d %d %f", &numFuncionario, &qtdHoras, &valorHora);
   salario = qtdHoras * valorHora;
   printf("NUMBER = %d\nSALARY = U$ %.2f\n", numFuncionario,salario);

    return 0;
}
