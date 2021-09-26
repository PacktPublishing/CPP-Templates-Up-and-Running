#include <iostream>
#include <string.h>

template<typename T>
class Storage {
public:
    Storage(int sz);
    void add_to_storage(T elem);
    void print_storage();
    ~Storage();
private:
    T *store; //dynamically allocated from the heap
    int max_size{0};
    int curr_size{0};
};

template<typename T>
Storage<T>::Storage(int sz)
{
    max_size = sz;
    store = new T[max_size];
}

template<typename T>
void Storage<T>::add_to_storage(T elem)
{
    store[curr_size++] = elem;
}

template<typename T>
Storage<T>::~Storage()
{
    delete [] store;
}

template<typename T>
void Storage<T>::print_storage()
{
    for(int i=0; i < curr_size; ++i)
        std::cout << "Pos[" << i << "] value : " << store[i] << std::endl;
}

template<>
class Storage<char *>
{
public:
    const int kMaxStrLen{128};
    Storage(int num_entry);
    void add_to_storage(char * elem);
    void print_storage();
    ~Storage();
private:
    char *store;
    int max_entries{0};
    int total_entries{0};
    int pos{0};
};

Storage<char *>::Storage(int num_entry)
{
    max_entries = num_entry;
    store = (char *) new char[max_entries * kMaxStrLen];
    memset(store, 0, max_entries * kMaxStrLen);
}

void Storage<char *>::add_to_storage(char * elem)
{
    if(total_entries < max_entries)
    {
        strncpy(store + pos, elem, kMaxStrLen);
        pos += kMaxStrLen;
        ++total_entries;
    } else {
        std::cout << "Storage Full!!" << std::endl;
    }
}

void Storage<char *>::print_storage()
{
    int pos = 0;
    for(int i=0; i < total_entries; ++i)
    {
        std::cout << store + pos << std::endl;
        pos = pos + kMaxStrLen;
    }
}

Storage<char *>::~Storage()
{
    delete [] store;
}
