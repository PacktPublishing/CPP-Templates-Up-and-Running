template<typename T>
class Base {
public:
    Base(T x);
    void print_base();
    virtual ~Base();
protected:
    T data;
};

template<typename T>
Base<T>::Base(T x) : data(x) {}

template<typename T>
void Base<T>::print_base()
{
    std::cout << data << std::endl;
}

template<typename T>
Base<T>::~Base() {}

