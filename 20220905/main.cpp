#include "all.h"

int main()
{
  std::cout << "hello\n";
  std::cout << "aaa"s
            << "bbb"s
            << "ccc\n"s;

  std::cout
      << "Integer: "s << 42 << "\n"s
      << "Floating Point: "s << 3.14 << "\n"s;

  auto answer = 42;
  std::cout << answer << "\n"s;

  auto print = [](auto x)
  {
    std::cout << x << "\n"s;
  };

  print(123);
  print(3.14);
  print("hello");

  auto plus = [](auto x, auto y)
  {
    return x + y;
  };

  std::cout << plus(1, 2) << "\n"s
            << plus(1.5, 0.5) << "\n"s
            << plus("123"s, "456"s) << "\n"s;
}