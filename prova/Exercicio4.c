#include<stdio.h>
#include<math.h>
#include<conio.h>
struct bhaskara{
	float delta;
	float x1;
	float x2;
};

struct bhaskara CalcularBhaskara(float a, float b, float c);

main(){
    float a, b, c;
    struct bhaskara resultado;
	printf("Digite os valores de A, B, C: ");
	scanf("%f%f%f",&a,&b,&c);
	resultado = CalcularBhaskara(a,b,c);
	printf("Delta= %.0f, X1= %.0f, X2= %.0f",resultado.delta,resultado.x1,resultado.x2);
	getch();
}
struct bhaskara CalcularBhaskara(float a, float b, float c){
	struct bhaskara result;
	result.delta = pow(b,2) - 4 * a * c;
	result.x1 = (-b+sqrt(result.delta))/(2*a);
	result.x2 = (-b-sqrt(result.delta))/(2*a);
	return result;
}
