#include <stdio.h>

	int division (int num1, int num2);
	int main()
	{

	int a,b,c;
	
	printf("Añadir numerador \n");
	scanf("%d", &a);

	printf("Añade denominador \n");
	scanf("%d", &b);
	
	c=division(a,b);

		printf("El resultado de dividir %d entre %d es %d \n", a, b, c);


	return 0;	
	}
	
	int division (int num1, int num2)
	{
	
	int cont=0;

	while (num1>=num2)
	{
	cont ++;
	num1=num1-num2;
	}
	return cont;


	}
