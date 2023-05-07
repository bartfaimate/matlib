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
};

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
