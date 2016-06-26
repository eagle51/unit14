#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Islength {
public:
	Islength(size_t l = 0,size_t u = 0):lower(l),upper(u){}
	bool operator()(const string &s) { return lower <= s.size() && s.size() <= upper; }
private:
	size_t lower;
	size_t upper;
};
int main()
{
	ifstream in("../data/storyDataFile.txt");
	if (!in) {
		cout << "无法打开输入文件" << endl;
		exit(1);
	}
	string word;
	Islength test9(1, 9);
	Islength test8(1, 8);
	size_t cnt9 = 0;
	size_t cnt8 = 0;
	while (in >> word) {
		if (test9(word)) cnt9++;
		if (test8(word)) cnt8++;
	}
	cout << cnt9 << " " << cnt8 << endl;
	system("pause");
	return 0;
}
//2016年6月26日11:18:08
//实验室