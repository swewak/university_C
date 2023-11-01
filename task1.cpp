#include <iostream>

int
main ()
{
  int i;
  std::cin >> i;
  int pr = 0;
  for (int k = 1; k <= 10; k++)
    {
      pr = k * i;
      std::cout << i << "*" << k << "=" << pr << std::endl;
    }
  return 0;
}
