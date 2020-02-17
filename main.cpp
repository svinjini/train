#include <iostream>

class A{
public:
	int x;
	A() : x(1) {};
	virtual void f(){
		std::cout << "A()" << std::endl;
	}
};

class B: public A {
public:
	int y;
	B() : y(2) {};
	virtual void f(){
		std::cout << "B()" << std::endl;
	}
	void g() {
		y = 3;
		std::cout << "g" << std::endl;
	};
};

int main(){
	A a;
	a.f();
	A * ab = new B();
	ab->f();
	return 0;
}
