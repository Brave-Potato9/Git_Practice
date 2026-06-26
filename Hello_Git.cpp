#include <iostream>
#include "HelloClass.h"

void sayHelloToGit()
{
	HelloClass helloToGit("Hello Git!", 5);
	helloToGit.sayHello();
}

int main()
{
	
	sayHelloToGit();

}