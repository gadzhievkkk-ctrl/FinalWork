#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Russian");
long double x, y; 
printf("Введитезначение x: ");
scanf_s("%Lf", &x); 
long double a1 = 3.2 + sqrtl(1 + x); 
long double b1 = fabsl(5 * x); 
    y = cos(a / b); 
printf("Искомоезначениеy = %Lf", y); 
return 0;
}
