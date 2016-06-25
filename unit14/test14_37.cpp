#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Myequal {
public:
	Myequal(int ele):value(ele){}
	bool operator()(int ele)
	{
		return ele == value;
	}
private:
	int value;
};
int main()
{
	vector<int> vi{1, 2, 3, 4, 5, 3, 7};
	replace_if(vi.begin(), vi.end(), Myequal(3), 5);
	for (auto i : vi)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}
//2016年6月25日22:41:13
//实验室