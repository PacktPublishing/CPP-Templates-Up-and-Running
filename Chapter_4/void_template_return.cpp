#include <iostream>
#include <vector>

template<typename T>
void add_to_store(std::vector<T>& store, T val)
{
    store.push_back(val);
}

int main()
{
    std::vector<int> data_store;
    int val = 10;
    add_to_store(data_store, val);

    return 0;
}

