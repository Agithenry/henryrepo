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

class B {
public:
	B() {}
	~B() {}
};

void helloworld();

int main()
{
	A a;
	B b;
	return 0;
}
