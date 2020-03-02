#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Programa que resuelve ecuaciones cuadráticas
int main(){
    double a; double b; double c; double e; double s; char solicitud = 's';
    do{
    printf("Par%cmetro a: \n", 160);
    scanf("%lf", &a);
    while (a==0){
        printf("Por favor introduzca un valor distinto de 0\n");
        printf("Par%cmetro a: \n", 160);
        scanf("%lf", &a);}
    printf("Par%cmetro b: \n", 160);
    scanf("%lf", &b);
    printf("Par%cmetro c: \n", 160);
    scanf("%lf", &c);
    e = 2*a;
    s = pow(b,2)-4*a*c;
    if (s==0){
        printf("x1 = x2 = %lf\n", -b/e);
    }
    else {
        if (s>0){
            printf(" x1 = %lf\n", (-b+sqrt(s))/e);
            printf(" x2 = %lf\n", (-b-sqrt(s))/e);
        }
        else {
            printf(" x1 = %lf + %lf*i \n", (-b/e), sqrt(-s)/e);
            printf(" x2 = %lf - %lf*i \n", (-b/e), sqrt(-s)/e);
        }}
    printf("Para calcular con otros parametros ingrese S, para cerrar n: ");
    scanf("%s", &solicitud);}
    while (solicitud == 's');

    return 0;
}
