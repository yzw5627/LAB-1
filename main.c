//Author: Yue Wu yzw5627@psu.edu
//Collabaraoter: Shengyou Jiang sjj5492@psu.edu
//Collabaraoter: Michael Artlip mva5905@psu.edu
//Collabaraoter: Joel John jmj6182@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *celsius = readline("Enter temperature in celsius: ");
  double c = atof(celsius);
  double f = (c * 1.8) + 32; 
  printf("%f° in Celsius is equivalent to %f° Fahrenheit. \n" ,c, f); 

  return 0; 
}