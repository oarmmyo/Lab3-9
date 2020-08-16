#include <stdio.h>
int main(void)
{
float a, b, c, plus, minus, multiply, divide, sum;
printf("Number1 :");
scanf("%f",&a);
printf("Number2 :");
scanf("%f",&b);
printf("Number3 :");
scanf("%f",&c);
plus  = a + b + c;
minus = a - b - c;
multiply = a * b * c;
divide = a / b;
sum   = plus + minus + multiply + divide;
printf("Divide = %f \n", divide);
printf("Multiply = %f \n", multiply);
printf("Minus = %f \n", minus);
printf("Plus  = %f \n", plus);
printf("Total = %f ", sum);
	return 0;
}
