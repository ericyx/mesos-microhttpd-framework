#include <iostream>
#include <thread>
#include <mesos-microhttpd-framework/test_framework.hpp>
#include <mesos-microhttpd-framework/test_microhttpd.hpp>

int main(int argc, char** argv)
{
	int port = 8888;

	std::thread mesosThread(testFramework, argc, argv);
	std::thread httpThread(testMicrohttpd, port);
	std::cout << "main, mesos and http now execute concurrently...\n";

	// synchronize threads:
	mesosThread.join();                // pauses until first finishes
	httpThread.join();               // pauses until second finishes

	std::cout << "Thread completed.\n";
	std::getchar();
	return 0;
}
