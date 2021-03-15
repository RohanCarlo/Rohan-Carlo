#include<stdio.h>
typedef struct 
{
  
int n;
   
int d;
 
} fractions;

 
 
fractions input () 
{
  
fractions f;
  
printf ("Enter the numerator:");
  
scanf ("%d", &f.n);
  
printf ("Enter the denominator:");
  
scanf ("%d", &f.d);
  
return f;

}

int
gcd (int n, int d) 
{
  
int b;
  
for (int i = 2; i <= n && i <= d; i++)
    
    {
      
if (n % i == 0 && d % i == 0)
	
	{
	  
b = i;
	
}
    
}
  
return b;

}

fractions compute (fractions f1, fractions f2) 
{
  
fractions s;
  
s.n = f1.n * f2.d + f1.d * f2.n;
  
s.d = f1.d * f2.d;
  
int a;
  
a = gcd (s.n, s.d);
  
s.n = s.n / a;
  
s.d = s.d / a;
  
return s;

}





 
fractions output (fractions S) 
{
  
printf ("sum = %d / %d", S.n, S.d);

}


int
main () 
{
  
fractions fra1, fra2, sum;
  
fra1 = input ();
  
fra2 = input ();
  
sum = compute (fra1, fra2);
  
output (sum);
  
return 0;

}


