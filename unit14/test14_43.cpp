#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
bool CanBeZhengchued(int a, vector<int> vi);
int main()
{
	vector<int> vi{ 2,3,5 };
	cout << (CanBeZhengchued(14, vi)?"Yes!":"No!") << endl;
	system("pause");
	return 0;
}
bool CanBeZhengchued(int a,vector<int> vi)
{
	modulus<int> mod;
	for (auto iter = vi.begin();iter != vi.end();++iter)
	{
		if (mod(a, *iter))
			return false;

	}
	return true;
		
}

//int main()
//{
//	auto data = { 2, 3, 4, 5 };
//	int input;
//	std::cin >> input;
//	std::modulus<int> mod;
//	auto predicator = [&](int i) { return 0 == mod(input, i); };
//	auto is_divisible = std::any_of(data.begin(), data.end(), predicator);
//	std::cout << (is_divisible ? "Yes!" : "No!") << std::endl;
//
//	return 0;
//}//参考答案里使用lambda表达式， 现在还用不好
//2016年6月26日13:38:53
//实验室