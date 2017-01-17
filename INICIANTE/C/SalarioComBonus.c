#include <stdio.h>
 
int main() {
   char nomeVendedor[20];
   double salarioVendedor = 0, montanteVendas = 0, totalAReceber = 0;
   scanf("%s",nomeVendedor);
   scanf("%lf %lf", &salarioVendedor, &montanteVendas);
   totalAReceber = salarioVendedor + (montanteVendas * 0.15);
   printf("TOTAL = R$ %.2f\n", totalAReceber);

    return 0;
}
