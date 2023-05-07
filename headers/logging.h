
#ifndef LOGGING_H
#define LOGGING_H
#include <iostream>
#include <string>
#include <future>

class logging
{
private:
    /* data */
public:
    logging(/* args */);
    ~logging();

    static void info(std::string msg);
    static void warning(std::string msg);
    static void error(std::string msg);
};

logging::logging(/* args */)
{
}

logging::~logging()
{
}

static void info(std::string msg)
{
    std::cout << "[INFO]:" << msg << std::endl;
}

static void warning(std::string msg)
{
    std::cout << "[WARNING]:" << msg << std::endl;
}
static void error(std::string msg)
{
    std::cerr << "[ERROR]:" << msg << std::endl;
}

#endif