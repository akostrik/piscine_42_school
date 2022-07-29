int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("ex 00 : 0!     = %d\n",ft_iterative_factorial(0));
    printf("ex 00 : 5!     = %d\n",ft_iterative_factorial(5));
    printf("ex 00 : 10!    = %d\n",ft_iterative_factorial(10));
    printf("ex 00 : (-3)!  = %d\n",ft_iterative_factorial(-3));
    printf("\n");

    printf("ex 01 : 0!     = %d\n",ft_recursive_factorial(0));
    printf("ex 01 : 5!     = %d\n",ft_recursive_factorial(5));
    printf("ex 01 : 10!    = %d\n",ft_recursive_factorial(10));
    printf("ex 01 : (-3)!  = %d\n",ft_recursive_factorial(-3));
    printf("\n");

    printf("ex 02 :   2 ^ 3   = %d\n",ft_iterative_power(2,3));
    printf("ex 02 : (-2)^ 3   = %d\n",ft_iterative_power(-2,3));
    printf("ex 02 :   1 ^ 3   = %d\n",ft_iterative_power(1,3));
    printf("ex 02 :   3 ^ 1   = %d\n",ft_iterative_power(3,1));
    printf("ex 02 :   0 ^ 3   = %d\n",ft_iterative_power(0,3));
    printf("ex 02 :   3 ^ 0   = %d\n",ft_iterative_power(3,0));
    printf("ex 02 :   0 ^ 0   = %d\n",ft_iterative_power(0,0));
    printf("ex 02 :   2 ^(-3) = %d\n",ft_iterative_power(2,-3));
    printf("\n");

    printf("ex 03 :   2 ^ 3   = %d\n",ft_recursive_power(2,3));
    printf("ex 02 :   1 ^ 3   = %d\n",ft_recursive_power(1,3));
    printf("ex 03 :   3 ^ 1   = %d\n",ft_recursive_power(3,1));
    printf("ex 03 :   0 ^ 3   = %d\n",ft_recursive_power(0,3));
    printf("ex 03 :   3 ^ 0   = %d\n",ft_recursive_power(3,0));
    printf("ex 03 :   0 ^ 0   = %d\n",ft_recursive_power(0,0));
    printf("ex 03 :   2 ^(-3) = %d\n",ft_recursive_power(2,-3));
    printf("\n");

    printf("ex 04 : fib( 0) = %d\n",ft_fibonacci(0));
    printf("ex 04 : fib( 1) = %d\n",ft_fibonacci(1));
    printf("ex 04 : fib( 2) = %d\n",ft_fibonacci(2));
    printf("ex 04 : fib( 3) = %d\n",ft_fibonacci(3));
    printf("ex 04 : fib( 4) = %d\n",ft_fibonacci(4));
    printf("ex 04 : fib( 5) = %d\n",ft_fibonacci(5));
    printf("ex 04 : fib( 6) = %d\n",ft_fibonacci(6));
    printf("\n");

   printf("ex 05 : sqrt( 0)         = %d\n",ft_sqrt(0));
   printf("ex 05 : sqrt( 1)         = %d\n",ft_sqrt(1));
   printf("ex 05 : sqrt( 2)         = %d\n",ft_sqrt(2));
   printf("ex 05 : sqrt( 3)         = %d\n",ft_sqrt(3));
   printf("ex 05 : sqrt( 4)         = %d\n",ft_sqrt(4));
   printf("ex 05 : sqrt(24)         = %d\n",ft_sqrt(24));
   printf("ex 05 : sqrt(25)         = %d\n",ft_sqrt(25));
   printf("ex 05 : sqrt(100000000)  = %d\n",ft_sqrt(100000000));
   printf("ex 05 : sqrt(2147395600) = %d\n",ft_sqrt(2147395600));
   printf("ex 05 : sqrt(INT_MAX-1)  = %d\n",ft_sqrt(INT_MAX-1));
   printf("ex 05 : sqrt(INT_MAX)    = %d\n",ft_sqrt(INT_MAX));
   printf("ex 05 : sqrt(INT_MIN)    = %d\n",ft_sqrt(INT_MIN));
   printf("ex 05 : sqrt(-1)         = %d\n",ft_sqrt(-1));
   printf("\n");

   printf("ex 06 :  0 est premier 7 ? %d\n",ft_is_prime(0));
   printf("ex 06 :  1 est premier 7 ? %d\n",ft_is_prime(1));
   printf("ex 06 :  2 est premier 7 ? %d\n",ft_is_prime(2));
   printf("ex 06 :  3 est premier 7 ? %d\n",ft_is_prime(3));
   printf("ex 06 :  4 est premier 7 ? %d\n",ft_is_prime(4));
   printf("ex 06 :  5 est premier 7 ? %d\n",ft_is_prime(5));
   printf("ex 06 :  6 est premier 7 ? %d\n",ft_is_prime(6));
   printf("ex 06 :  7 est premier 7 ? %d\n",ft_is_prime(7));
   printf("ex 06 :  8 est premier 7 ? %d\n",ft_is_prime(8));
   printf("ex 06 :  9 est premier 7 ? %d\n",ft_is_prime(9));
   printf("ex 06 : 10 est premier 7 ? %d\n",ft_is_prime(10));
   printf("ex 06 : 11 est premier 7 ? %d\n",ft_is_prime(11));
   printf("ex 06 : 12 est premier 7 ? %d\n",ft_is_prime(12));
   printf("ex 06 : 13 est premier 7 ? %d\n",ft_is_prime(13));
   printf("ex 06 : -2 est premier 7 ? %d\n",ft_is_prime(-2));
   printf("\n");
 
   printf("ex 07 : the first prime after  0         = %d\n",ft_find_next_prime(0));
   printf("ex 07 : the first prime after  1         = %d\n",ft_find_next_prime(1));
   printf("ex 07 : the first prime after  2         = %d\n",ft_find_next_prime(2));
   printf("ex 07 : the first prime after  3         = %d\n",ft_find_next_prime(3));
   printf("ex 07 : the first prime after  4         = %d\n",ft_find_next_prime(4));
   printf("ex 07 : the first prime after  5         = %d\n",ft_find_next_prime(5));
   printf("ex 07 : the first prime after 12         = %d\n",ft_find_next_prime(12));
   printf("ex 07 : the first prime after 15         = %d\n",ft_find_next_prime(15));
   printf("ex 07 : the first prime after -5         = %d\n",ft_find_next_prime(-5));
   printf("ex 07 : the first prime after INT_MAX-1  = %d\n",ft_find_next_prime(INT_MAX-1));
   printf("ex 07 : the first prime after INT_MAX    = %d\n",ft_find_next_prime(INT_MAX-1));
   printf("ex 07 : the first prime after 2147395600 = %d\n",ft_find_next_prime(2147395600));
   printf("\n");
 
 }
