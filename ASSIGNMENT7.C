Assignment =7
Q=1
/*

#include <stdio.h>

// Function to find the nth Fibonacci number
int fib(int n)
{
    if (n <= 1) {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 8;

    printf("F(n) = %d", fib(n));

    return 0;
}
*\
Q=2
/*
#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
*\
Q=3
/*
#include <stdio.h>
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
*\
Q=4
/*
#include<stdio.h>

int main()
{
    int num1 = 36, num2 = 60, hcf = 1;

    for(int i = 1; i <= num1 || i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("The HCF: %d", hcf);

    return 0;
}
*\
Q=5
/*

#include<stdio.h>
#include<conio.h>

int main()
{
	 int num1, num2, hcf, i;
	 clrscr();
	 printf("Enter two numbers:\n");
	 scanf("%d%d", &num1, &num2);

	 // Finding HCF
	 for(i=1;i<=num1;i++)
	 {
	  if(num1%i==0 && num2%i==0)
	  {
	   hcf = i;
	  }
	 }

	 // Making Decision
	 if(hcf == 1)
	 {
	  printf("%d and %d are CO-PRIME NUMBERS.", num1, num2);
	 }
	 else
	 {
	  printf("%d and %d are NOT CO-PRIME NUMBERS.", num1, num2);
	 }
	 getch();
	 return(0);
}
*\
Q=6
/*
#include <stdio.h>
int main(){
    int i, num, count;

    // Checking for prime numbers
    for (num = 1; num <= 100; num++){
        count = 0;
        for (i = 2; i <= num/2; i++){
            if (num % i == 0){
                count++;
                break;
            }
        }

        // Checking and Printing Prime Numbers
        if (count == 0 && num != 1){
            printf("%d \n", num);
        }
    }
    return 0;
}
*\
Q=7
/*

# include < stdio.h >
int  main( )
{
int  beg, end, f, temp, i, j ;
printf(" Enter the Begining Number : ") ;
scanf("%d ",& beg) ;
printf(" \n Enter the last Number : ") ;
scanf("%d ",& end) ;
printf(" \n Prime Numbers are :\n ") ;
for (  j = beg ;  j <= end ;  j++ ) ;
{
f = 0 ;
for (  i = 2 ;  i < num ;  i++ );
{
if (  j % i == 0 )
f = f + 1 ;
}
if (  f == 0 )
printf(" \n %d " , j) ;
}
return ( 0 ) ;
}
*\
Q=8
/*
void main()
{
   int n,i,j,flag=0,out;

   clrscr();

   printf("enter the num\n");

   scanf("%d",&n);

   for(i=n+1;i<=100;i++)
   {

      flag=0;

      for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }

      if(flag==0)
      {
         printf("next prime is:%d",i);
         break;
      }
   }

   getch();

}
*\
Q=9
/*
#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;

       result += remainder * remainder * remainder;

       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
*\
Q=10
/*
#include <math.h>
#include <stdio.h>

int main()
{
    int i, sum, num, count = 0;
    printf(
        "All Armstrong number between 1 and 1000 are:\n");

    // This loop will run for 1 to 1000
    for (i = 1; i <= 1000; i++) {
        num = i;
        // Count number of digits.
        while (num != 0) {
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count)
              + pow((num % 100 - num % 10) / 10, count)
              + pow((num % 1000 - num % 100) / 100, count);
        // Check for Armstrong Number
        if (sum == i) {
            printf("%d ", i);
        }
        count = 0;
    }
}
*\
