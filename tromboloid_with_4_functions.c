//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
	float n;
	printf("Enter the dimensions of tramboloid");
	scanf("%f",&n);
	return n;
}

float volume(float x,float y,float z)
{
	float a;
	a=((x*y*z)+(z/y))/3;
	return a;
}

void output(float v)
{
	printf("Volume of tramboloid = %2f",v);
}


	
int main()
{
float h,b,d,vol;
h=input();
b=input();
d=input();
vol=volume(h,b,d);
output(vol);
return 0;
}
