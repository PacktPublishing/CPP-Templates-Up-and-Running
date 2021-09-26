#include <iostream>
#include <iomanip>

class MyStore {
private:
    int *store;
    size_t len;
    size_t curr_len;
public:
    explicit MyStore(size_t);
    void add_element(int);
    double average();
    ~MyStore();
};

MyStore::MyStore(size_t len) : len(len), curr_len(0)
{
    store = new int[len];
}

MyStore::~MyStore()
{
    delete [] store;
}

void MyStore::add_element(int elem)
{
    if(curr_len < len) {
        store[curr_len++] = elem;
    } else {
        std::cout << "Maximum store size exceeded." << std::endl;
    }
}

double MyStore::average()
{
    auto avg = 0.0;
    for(size_t index = 0; index < curr_len; ++index)
        avg += store[index];
    avg = (double)avg / curr_len;
    return avg;
}

int main()
{
    MyStore s(5); // store created the for 5 elements
    s.add_element(10);
    s.add_element(30);
    s.add_element(5);
    s.add_element(22);
    s.add_element(1);
    s.add_element(50); // 6th element added
    std::cout << std::fixed 
              << std::setprecision(2) 
              << s.average() << std::endl;
    return 0;
}

