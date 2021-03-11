#include <iostream>
template<typename T, typename U>
U largest_elem(const T series, size_t len)
{
    U largest = series[0];
    for(size_t index = 0; index < len; ++index)
        if (series[index] > largest)
            largest = series[index];
    return largest;
}

int main()
{
    double numbers[] = {20.1, 10.1, 30.1, 5.1, 40.1, 200.1, 50.1, 1.1, 0.5, 100.5};
    double l = largest_elem<double [], double>(numbers, 10);
    std::cout << "largest = " << l << std::endl;
    return 0;
}
