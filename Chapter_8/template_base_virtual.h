template<typename T>
class Base {
public:
    Base(T x);
    virtual void print_base();
    virtual ~Base();
    virtual void welcome();
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

template<typename T>
void Base<T>::welcome()
{
    std::cout << "Hello World" << std::endl;
}
