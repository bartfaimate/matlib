#include <iostream>
#include <cassert>
#include <array>

#include "vector.h"
#include "logging.h"

int main()
{
    info(__FILE__);

    double data[] = {1.1, 2.2, 3.3};

    matlib::vector vec = matlib::vector(data, 3);

    assert(vec.size() == 3);

    assert(vec[1] == 2.2);
    try
    {
        vec[-5];
        assert(false);
    }
    catch (...)
    {
        assert(true);
    }
    info("End");
    return 0;
}