#include <stdio.h>
 
int main() {
 
   double n = 3.14159, raio = 0, area = 0;
   scanf("%lf",&raio);
   area = n * (raio * raio);
   printf("A=%.4f\n",area);
    return 0;
}
