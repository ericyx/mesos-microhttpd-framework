#include <iostream>       // std::cout
#include <mesos/scheduler.hpp>

class FrameworkDriver
{
public:
	FrameworkDriver();
	~FrameworkDriver();

private:
	MesosSchedulerDriver driver;
};
