#include <iostream>
#include <cassert>
#include <array>

int main()
{
    std::cout << __FILE__ << "\n";

    double data[] = {1.1, 2.2, 3.3};

    double *data1 = new double[3];
    data[0] = 1;
    data[1] = 2;

    std::cout << sizeof(data) / sizeof(data[0]) << "\n";
    std::cout << std::begin(data1) - std::end(data1) << "\n";

    return 0;
}