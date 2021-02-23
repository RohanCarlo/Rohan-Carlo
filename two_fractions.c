//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct
{
  int n, d;
} FRA;

FRA
add (FRA X, FRA Y, FRA* C)
{
//printf("%d",X.n);
  C->n = (X.n * Y.d) + (Y.n * X.d);
  C->d = X.d * Y.d;
  
  return *C;
}

FRA
GCD (FRA * A)
{
  
  int h;
  if (A->n < A->d)
    {
      h = A->n;
    }
  else if (A->n > A->d)
    {
      h = A->d;
    }
  else if (A->n == A->d)
    {
      A->n = 1;
      A->d = 1;
      return *A;
    }
  for (int i = 2; i <=h; i++)
    {
    label:if (A->n % i == 0 && A->d % i == 0)
	{
	  A->n = A->n / i;
	  A->d = A->d / i;
	  goto label;
	  return *A;
	}
    }
}

FRA
input (FRA * Z)
{
  printf ("Enter the numerator:\n");
  scanf ("%d", &Z->n);
  printf ("Enter the denominator:\n");
  scanf ("%d", &Z->d);
  return *Z;
}

FRA
Output (FRA * B)
{
  printf ("Sum of given fractions is %d/%d", B->n, B->d);
}

int
main ()
{
  FRA X;
  FRA Y;
  FRA C;
  input (&X);
  input (&Y);
  add (X, Y, &C);
  GCD (&C);
   
  Output (&C);
  return 0;
}
