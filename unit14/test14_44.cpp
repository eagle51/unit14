#include <iostream>
#include <map>
#include <string>
#include <functional>
using namespace std;
int add(int a, int b) { return a + b; }
auto mod = [](int a, int b) {return a%b;};
struct my_div {
	int operator()(int a, int b)
	{
		return a / b;
	}
};
map<string, function<int(int, int)>> binops = {
	{ "+",add },						//function pointer
	{ "-",minus<int>() },				//library functor
	{ "/",my_div() },					//user-defined functor
	{ "*",[](int a,int b) {return a*b;} },	//unnamed lambda
	{ "%",mod }								//named lambda
};
int main()
{
	while (true) {
		std::cout << "\npleasr enter: num operator num :\n";
		int n1, n2;
		std::string s;
		std::cin >> n1 >> s >> n2;

		std::cout << binops[s](n1, n2);
	}
	system("pause");
	return 0;
}
//2016年6月26日16:45:17
//实验室