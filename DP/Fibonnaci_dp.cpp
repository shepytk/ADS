#include <iostream>

int fibonacciDp(int n)
{
   int fib[n+1];
   fib[0] = 1;
   fib[1] = 1;
   for(int i = 2; i < n+1; i++)
      fib[i] = fib[i-1] +fib[i-2];
   
   return fib[n];
}

int main(int argc, char const *argv[])
{
	std::cout<<"FIB(5) "<<fibonacciDp(5)<<"\n";
	return 0;
}
