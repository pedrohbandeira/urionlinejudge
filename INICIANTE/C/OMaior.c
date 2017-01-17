#include <stdio.h>
#include <stdlib.h>
int main(){
int a = 0, b = 0, c = 0, maiorXY = 0, maiorYZ = 0;
scanf("%d %d %d",&a, &b, &c);
maiorXY = (a+b+abs(a-b))/2;
maiorYZ = (maiorXY+c+abs(maiorXY-c))/2;
printf("%d eh o maior\n",maiorYZ);
return 0;
}
