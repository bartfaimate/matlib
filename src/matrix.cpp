class matrix
{

private:
    /* data */
    double *data;
    int width;
    int height;

public:
    matrix(int height, int width);
    ~matrix();

    matrix operator+(matrix &other);
};

matrix::matrix(int height, int width)
{
}

matrix::~matrix()
{
    delete data;
}

matrix operator+(matrix &other)
{
}
