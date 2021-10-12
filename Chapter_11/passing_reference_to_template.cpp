template<typename T>
void demo(T x, T y)
{
    x = 60;
    y = 70;
    (void)x;
    (void)y;
}
int main()
{
    const int& a = 20;
    const int& b = 30;
    demo(a, b);
    return 0;
}
