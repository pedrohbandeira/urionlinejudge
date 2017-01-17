#include <stdio.h>
 
int main() {
 
    double a = 0, b = 0, media = 0;
    scanf("%lf %lf",&a,&b);
    media = ((a * 3.5)/11 + (b * 7.5)/11);
    printf("MEDIA = %.5f\n", media);
 
    return 0;
}
