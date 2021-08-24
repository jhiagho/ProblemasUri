#include <iostream>
int calls;

long int fib(int a)
{
  calls++;
  if (a == 0)
      return 0;
  if (a == 1)
      return 1;
  return fib(a - 1) + fib(a - 2);
}

int main()
{
    long int n, x;
    long int resultado;

    std::cin >> n;
    while(n--)
    {
      calls = -1;
      std::cin >> x;
      resultado = fib(x);
      std::cout <<"fib("<<x<<") = " << calls << " calls = " << resultado << "\n";
    }
return 0;
}
