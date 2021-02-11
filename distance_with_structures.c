//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct distance
{
float x,y;
};

float dist(struct distance A,struct distance B)
{
float a;
a=sqrt(((A.x-B.x)*(A.x-B.x))+((A.y-B.y)*(A.y-B.y)));
	return a;
}

int main()
{
float result;
	struct distance A,B;
	printf("Enter x coordinate of point A");
	scanf("%f",&A.x);
	printf("Enter y coordinate of point A");
	scanf("%f",&A.y);
	printf("Enter x coordinate of point B");
	scanf("%f",&B.x);
	printf("Enter y coordinate of point ");
	scanf("%f",&B.y);
	result=dist(A,B);
	printf("Distance = %f",result);
	return 0;
}
