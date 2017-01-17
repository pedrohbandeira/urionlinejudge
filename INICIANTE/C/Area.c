#include <stdio.h>

int main(){
double a = 0, b = 0, c = 0, areaTriangulo = 0, areaCirculo = 0, areaTrapezio = 0, areaQuadrado = 0, areaRetangulo = 0;
scanf("%lf %lf %lf", &a, &b, &c);

areaTriangulo = (a*c)/2;
areaCirculo = 3.14159 * (c*c);
areaTrapezio =((a+b)*c)/2;
areaQuadrado =b*b;
areaRetangulo =a*b;

printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo);
return 0;
}
