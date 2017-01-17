#include <stdio.h>
 
int main() {
 
    double a = 0, b = 0, c = 0, media = 0;
    scanf("%lf %lf %lf",&a,&b,&c);
    media = (a * 2)/10 + (b * 3)/10 + (c * 5)/10;
    printf("MEDIA = %.1f\n", media);
 
    return 0;
}
