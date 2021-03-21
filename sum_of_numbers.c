//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

int
input_n() {

  int n;

  printf("Enter the number of elements");

  scanf("%d", & n);

  return n;

}

int
input_array(int n, int * a) {

  printf("Input elements");

  for (int i = 0; i < n; i++)

  {

    scanf("%d", & a[i]);
  }

}

int calculate_sum(int * a, int n) {

  int sum = 0;

  for (int i = 0; i < n; i++)

  {

    sum = sum + a[i];

  }
  return sum;

}

void display(int sum) {

  printf("Sum= %d", sum);

}

void main() {

  int a[100];

  int n;

  n = input_n();

  input_array(n, a);

  int s = calculate_sum(a, n);

  display(s);

}

