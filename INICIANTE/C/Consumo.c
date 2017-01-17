#include <stdio.h>

int main(){
int x = 0; //distancia percorrida
float y = 0; //combustivel gasto
float consumo = 0;

scanf("%d %f",&x, &y);
consumo = (float)(x/y);
printf("%.3f km/l\n",consumo);
return 0;
}
