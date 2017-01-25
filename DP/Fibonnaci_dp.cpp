#include <iostream>


#define FIB0  0
#define FIB1  1

long fibonacciDp(int n)
{
   long fib_n_1 = FIB1;  //fib(n-1)
   long fib_n_2 = FIB0;  //fib(n-2) 
   long fib_n;
   for(int i = 2; i < n+1; i++)
   {	
   	   fib_n = fib_n_1 + fib_n_2;
   	   fib_n_2 = fib_n_1;
   	   fib_n_1 = fib_n;
   }
   
   
   return fib_n;
}

int main(int argc, char const *argv[])
{

	std::cout<<"fib(5) "<<fibonacciDp(5)<<"\n";
	return 0;
}
