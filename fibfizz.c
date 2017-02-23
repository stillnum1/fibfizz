#include <stdint.h>
#include <stdio.h>

uint64_t fib_Pi[]={3, 4, 5, 7, 11, 13, 17, 23, 29, 43, 47, 83};


void fibfiz(uint64_t n)
{
  uint64_t i,j=0, f_neg1=0, f_neg2=1, f;

  for (i=0; i < n; i++) {
       f = f_neg2 + f_neg1;
       f_neg2 = f_neg1;
       f_neg1 = f;

       if (i+1 == fib_Pi[j]) {
	 j++;
	 printf("BuzzFizz\n");
       } else if (!(f % 15)) {
	 printf("FizzBuzz\n");
       } else if (!(f % 5)) {
	 printf("Fizz\n");
       } else if (!(f % 3)) {
	 printf("Buzz\n");
       } else 
	 printf("%llu\n",f);
  }
}

int main(int argc, char *argv[])
{
  uint64_t n;

  switch (argc) {
  case 2:
    n=strtoull(argv[1], NULL, 10);
    if (93 < n) {
      printf("n must be <= 93\n");
      return 0;
    }
    fibfiz(n);
    break;
  default:
    printf("%s: <input n>\n",argv[0]);
    return 0;
  }

  return 0;
}


