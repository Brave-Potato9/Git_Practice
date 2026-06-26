#include "HelloClass.h"

HelloClass::HelloClass(std::string _helloStr, int _helloCount): 
	helloStr(_helloStr), 	
	helloCount(_helloCount)
{}

void HelloClass::sayHello() const
{
	for(int i = 0 ; i < helloCount ; i++)
	{
		std::cout << "[" << i+1 << "] " << helloStr << std::endl;  
	}
}