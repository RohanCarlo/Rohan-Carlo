//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
float input()
{
float n;
	printf("Enter number:");
scanf("%f",&n);
return n;
}

float sum(float a,float b)
{
return a+b;
}

void display(float n1,float n2,float sum)
{
	printf("Sum of %f and %f is %f",n1,n2,sum);
}

int main()
{
	float num1,num2,add;
	num1=input();
	num2=input();
	add=sum(num1,num2)
	display(num1,num2,add);
	return 0;
}
