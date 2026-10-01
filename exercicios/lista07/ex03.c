#include <stdio.h>

float somaPonteitos(float *p[], int length) {
  float result = 0.0f;

  for (int i = 0; i < length; i++) {
    result += *p[i];
  }

  return result;
}

void ex03_07() {
  printf("escreva 5 numeros legals pls");
  float f1, f2, f3, f4, f5;
  scanf("%f", &f1);
  scanf("%f", &f2);
  scanf("%f", &f3);
  scanf("%f", &f4);
  scanf("%f", &f5);

  float *p[5];

  p[0] = &f1;
  p[1] = &f2;
  p[2] = &f3;
  p[3] = &f4;
  p[4] = &f5;

  float result = somaPonteitos(p, 5);

  printf("%f", result);
}
