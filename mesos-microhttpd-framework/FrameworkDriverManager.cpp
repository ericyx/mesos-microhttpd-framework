#include "FrameworkDriverManager.hpp"

FrameworkDriverManager::FrameworkDriverManager()
{
}

FrameworkDriverManager::~FrameworkDriverManager()
{
}

Status FrameworkDriverManager::startDriver()
{
	try {
		this.driverStatus = driver.start();
	}
	catch (...){
		std::cout << "startDriver exception";
	}

	
}