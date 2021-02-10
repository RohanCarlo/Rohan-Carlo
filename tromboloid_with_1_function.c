//Write a program to find the volume of a tromboloid using one function
int main()
{
	float h,b,d,vol;
printf(“Enter height,breadth,depth:”);
scanf(“%f%f%f”,&h,&b,&d);
      if(h>0 & b>0 & d>0)
{
vol=((h*d*b)+(d/b))/3;
printf(“Volume=%f”,vol);
}
      else
{
   printf("Incorrect input");
}
return 0;
}
  
