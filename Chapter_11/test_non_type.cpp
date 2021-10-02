#include <iostream>
#include <string.h>

using namespace std;
int numbers[6] = {1, 2, 3, 4, 5, 6};

template <int * nums> //pointer to object
void f(int n)
{
    for(int i=0; i < n; ++i)
        cout << numbers[i] << endl;
}

int main() {
        f<numbers>(6);

        return 0;
}

