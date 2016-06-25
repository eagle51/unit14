#include <iostream>
#include <string>
#include <vector>
class InputString {
public:
	InputString(std::istream &in = std::cin):is(in) {}
	std::string operator()()			//此处如果返回的是string类型的引用，则主函数是输出不了myString的
	{
		std::string myString;
		getline(is,myString);
		return is?myString:std::string();
	}					//如果函数返回的是引用，则这个大括号结束后，myString就被析构了，主函数中不可能输出myString
private:
	std::istream &is;
};
int main()
{
	std::vector<std::string> vc;
	std::string s;
	InputString inputString(std::cin);
	//std::cout << inputString() << std::endl;		//由于函数返回的是string类型的右值，所以这个值可以用来输出
	while(s = inputString(),s.size())		//此处判别式可以合成一句话!(s = inputString()).size()
		vc.push_back(s);
	for (auto &ele : vc)
		std::cout << ele << std::endl;
	system("pause");
	return 0;
}
//2016年6月25日22:01:58
//实验室