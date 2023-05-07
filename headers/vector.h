#ifndef VECTOR_H
#define VECTOR_H

#include <exception>
#include <string>

namespace matlib
{
    class vector
    {
    private:
        double *data;
        int _size;

    public:
        vector(int size);
        vector(double *data, int size);
        ~vector();

        int size();
        double operator[](int index);
        vector operator+(vector &other);
        vector operator-(vector &other);
        vector operator*(vector &other);

        vector operator+(double value);
        vector operator-(double value);
        vector operator*(double value);
        vector operator/(double value);
        std::string toStr();
    };
};
#endif