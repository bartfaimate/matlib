
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
    static void info(char *msg);
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

static void info(char *msg)
{
    std::cout << "[INFO]:" << msg << std::endl;
}

#endif