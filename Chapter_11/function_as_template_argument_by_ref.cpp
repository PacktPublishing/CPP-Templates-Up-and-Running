#include <iostream>
template<typename T>
void demo_pass_func(T& funcPtr)
{
    std::cout << funcPtr(10) << std::endl;
}

int increment_var(int var)
{
  return var + 1;
}
int main()
{
    demo_pass_func(increment_var);

    return 0;
}
