#include <stdio.h>

int main() {
double raioEsfera = 0, volumeEsfera = 0;
scanf("%lf",&raioEsfera);
volumeEsfera = (4.0/3) * 3.14159 * (raioEsfera * raioEsfera * raioEsfera);
printf("VOLUME = %.3f\n",volumeEsfera);

return 0;
}
