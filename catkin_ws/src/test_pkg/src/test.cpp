#include <iostream>
using namespace std;

class TestClass {
	
	public:
	void print();
};

void TestClass::print() {
	cout << "Hello1\n";
}


int main()
{
  TestClass obj;
  obj.print();
  cout << "Hello2\n";
  return 0;
}
