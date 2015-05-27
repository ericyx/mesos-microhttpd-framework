#include <iostream>       // std::cout


class FrameworkDriverManager
{
public:
	FrameworkDriverManager();
	~FrameworkDriverManager();
	Status startDriver();

private:
	MyriadDriver driver;
	Status driverStatus;
};

FrameworkDriverManager::FrameworkDriverManager()
{
}

FrameworkDriverManager::~FrameworkDriverManager()
{
}