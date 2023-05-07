class vector
{
private:
    double *data;
    int size;

public:
    vector(int size);
    vector(double *data, int size);
    ~vector();
};

vector::vector(int size = 3)
{
    this->size = size;
    this->data = new double[size];
}

vector::vector(double *data, int size)
{
    this->size = size;
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
