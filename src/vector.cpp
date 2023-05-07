#include "vector.h"

using namespace matlib;

vector::vector(int size = 3)
{
    this->_size = size;
    this->data = new double[size];
}

vector::vector(double *data, int size)
{
    this->_size = size;
    this->data = new double[size];
    for (int i = 0; i < size; i++)
    {
        this->data[i] = data[i];
    }
}

vector::~vector()
{
    delete this->data;
}

int vector::size()
{
    return this->_size;
}

double vector::operator[](int index)
{

    if (index < 0 || index >= this->_size)
    {
        throw "Out of bound";
    }
    return this->data[index];
}

vector vector::operator+(vector &other) {}
vector vector::operator-(vector &other) {}
vector vector::operator*(vector &other) {}

vector vector::operator+(double value) {}
vector vector::operator-(double value) {}
vector vector::operator*(double value) {}
vector vector::operator/(double value) {}
