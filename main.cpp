#include <iostream>

class A {
public:
		A() {}
		~A() {}
};

void test()
{
	std::cout << "test()" << std::endl;
}

int main()
{
	A a;
	return 0;
}