/**
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

  double a, b, x;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);
    if(a>0){
      printf("a is positive!\n")
      printf("the value of sqrt(a) = %f\n", sqrt(a));
    } else {
      printf("a is not positive, cannot compute its square root\n");
    }
      

  printf("Enter operand b: ");
  scanf("%lf", &b);
    if(b>0){
      printf("b is positive!\n")
      printf("the value of sqrt(b) = %f\n", sqrt(b));
    } else {
      printf("b is not positive, cannot compute its square root\n");
    } else if(b == 0) {
      printf("b is zero, its square root is zero\n");
      printf("%f\n", sqrt(b*-1.0));
    }

  
double Calculator;
  printf("Enter operation:\n");
  printf("1. Addition\n");
  scanf("%lf", &Calculator);
  printf("2. Subtraction\n");
  scanf("%lf", &Calculator);
  printf("3. Multiplication\n");
  scanf("%lf", &Calculator);
  printf("4.  Division\n");
  scanf("%lf", &Calculator);
  
  switch(Calculator){
    case 1:
        printf("%lf\n",a+b);
        break;
      case2:
        printf("%lf\n",a-b);
        break;
      case3:
        printf("%lf\n",a*b);
        break;
      case4:x=a/b
        printf("%lf\n",a/b);
        break;
     
  }

log(doubleX))//TODO: process the results here


  return 0;
}
