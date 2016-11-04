#include <iostream>

int main (void)
{
  int * ptr = nullptr;
  int a =  7;

  a = 14;
  ptr = &a;

  std::cout << &a << '\n';
  std::cout << ptr << '\n';
  std::cout << &ptr << '\n';
  std::cout << a << '\n';
  
  return 0;
  
}
