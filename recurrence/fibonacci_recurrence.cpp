#include <iostream>



// fibonacci sequence
// written in recurrent form
// Its description is clear but poor formance due to the multiple function calls.
int fib(int N) {
  if (N == 0)
    return 0;
  if (N == 1)
    return 1;
  return fib(N-1) + fib(N-2);
}


int main() {

  std::cout << fib(0) << "\n"; // 0
  std::cout << fib(1) << "\n"; // 1
  std::cout << fib(2) << "\n"; // 1
  std::cout << fib(3) << "\n"; // 2
  std::cout << fib(4) << "\n"; // 3

  return 0;
}
