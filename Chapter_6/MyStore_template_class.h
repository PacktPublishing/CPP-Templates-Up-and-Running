#ifndef __MYSTORE_TEMPLATE_CLASS__
#define __MYSTORE_TEMPLATE_CLASS__
#include <iostream>
#include <iomanip>

template<typename T>
class MyStore {
private:
    T *store;
    size_t len;
    size_t curr_len;
public:
    explicit MyStore(size_t);
    void add_element(T);
    double average();
    ~MyStore();
};

template<typename T>
MyStore<T>::MyStore(size_t len) : len(len), curr_len(0)
{
    store = (T *) malloc(sizeof(T) * len);
}

template<typename T>
MyStore<T>::~MyStore()
{
    if(store)
        free(store);
}

template<typename T>
void MyStore<T>::add_element(T elem)
{
    if(curr_len < len) {
        store[curr_len++] = elem;
    } else {
        std::cout << "Number of elements added exceeds the allocated size" << std::endl;
        std::cout << "Increasing the store size" << std::endl;
        len = len + 100;
        T* temp = (T *)realloc(store, sizeof(T) * len);
        if(temp) {
            store = temp;
            store[curr_len++] = elem;
        }
    }
}

template<typename T>
double MyStore<T>::average()
{
    auto avg = 0.0;
    for(size_t index = 0; index < curr_len; ++index)
        avg += store[index];
    avg = (double)avg / curr_len;
    return avg;
}
#endif // __MYSTORE_TEMPLATE_CLASS__
