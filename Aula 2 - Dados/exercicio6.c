#include <stdio.h>
 
int main() {
 
    int id, horas;
    float valorph, salario;
    
    scanf("%d %d %f", &id, &horas, &valorph);
    
    salario = horas * valorph;
    
    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2f\n", salario);
 
    return 0;
}