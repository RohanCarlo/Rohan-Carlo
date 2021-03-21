#include<stdio.h>

typedef struct {
  int n;
  int d;
}
fractions;

int input_number() {
  int num;
  printf("Enter the number of fractions:");
  scanf("%d", & num);
  return num;
}

void input_fractions(fractions * a, int num) {
  for (int i = 0; i < num; i++) {
    printf("Enter numerator");
    scanf("%d", & a[i].n);
    printf("Enter denominator");
    scanf("%d", & a[i].d);
  }
}
int
gcd(int x, int y) {

  int b;
  b = 1;
  for (int i = 2; i <= x && i <= y; i++)

  {

    if (x % i == 0 && y % i == 0)

    {

      b = i;

    }

  }
 
  return b;

}

fractions calc(fractions *a, int num) {

    fractions s;
    int den = 1;
    for (int i = 0; i < num; i++) {
      den = den * a[i].d;
    }
    s.d = den;
    int x = 0;
    int y = 0;
     
    for (int i = 0; i < num; i++) {
      x = a[i].n;
      for (int j = 0; j < num; j++) {
        if (i != j) {
          x = x*a[j].d;
        }
        }
       
        y = y+ x;
          
      }
     
      s.n = y/ gcd(y, den);
      s.d = den / gcd(y, den);
      return s;

    }

    void output(fractions * a, int num, fractions sum) {

      for (int i = 0; i < num; i++) {
          if(i==0){
              printf("Sum of %d/%d + ", a[i].n, a[i].d);}
          
        if (i < num - 1 && i!=0) {
          printf("Sum of %d/%d + ", a[i].n, a[i].d);
        } else if (i == num - 1) {
          printf(" %d/%d = %d/%d", a[i].n, a[i].d, sum.n, sum.d);
        }
      }
    }

    void main() {
      int number;
      fractions a[number];
      fractions s;
      number = input_number();
      input_fractions(a, number);
      
      s = calc(a, number);
      output(a, number, s);
    }

