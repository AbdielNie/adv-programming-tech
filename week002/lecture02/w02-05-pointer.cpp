#include <iostream>
#include <string>

    int main(void)
    {
        int x = 7;
        std::cout << x << std:: endl;

        int*ptr = nullptr;
        ptr =&%;
        std::cout << ptr << std::endl;
        std::cout << *ptr << std::endl;
        *ptr = 42;
        std::cout << x << std::endl;

        int y = 3;
        *ptr = y;
        std::cout << x << std::endl;       // x = 3
        std::cout << y << std::endl;       // y = 3

        x = 10;
        y = -4
        //int* ptr2 =&y;
        //*ptr = *ptr2;
        std::cout<<"****"<<std::endl;
        swap(&x,&y)
        std::cout << x << std::endl;    //x = -4   x=-4(after swap)
        std::cout << y << std::endl;    //y = -4   y=10(after swap)
        int a = 7;
        int b = -3;

        int& c = a;
        c = 6;
        std::cout << a << std::endl;   //output: a = 6

        a = 10;
        std::cout << c << std::endl;   // c = 10
        return EXIT_SUCCESS;
    }

    void swap(int* a, int* b)
    {
        int tmp = *a;
        *a = *b;    // a = x -4
        *b = tmp;   // b = y 10
    }
