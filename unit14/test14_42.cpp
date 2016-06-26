#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
	using std::placeholders::_1;
	vector<int> vi{ 1,11,111,1111,11111 };
	auto cnt = count_if(vi.cbegin(), vi.cend(), bind(greater<int>(), _1, 1024));
	cout << cnt << endl;
	vector<string> vs{ "pooh","pooh","piaoliang","pooh" };
	auto found = find_if(vs.cbegin(), vs.cend(), bind(not_equal_to<string>(), _1, "pooh"));
	cout << *found << endl;
	vector<int> vi2{ 1,2,3,4,5 };
	transform(vi2.begin(), vi2.end(), vi2.begin(),bind(multiplies<int>(), _1, 2));
	for (auto i : vi2)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}
//2016年6月26日13:07:29
//实验室