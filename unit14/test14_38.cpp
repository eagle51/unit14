#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;
class Islength {
public:
	Islength(int l):length(l){}
	bool operator()(string &s) { return length == s.size(); }
private:
	int length;
};
int main(int argc,char *argv[])
{
	ifstream in("../data/storyDataFile.txt");
	if (!in) {
		cout << "无法打开输入文件" << endl;
		exit(1);
	}
	string word;
	int cnt3 = 0;
	Islength test3(3);
	while (in >> word) {
		if (test3(word)) cnt3++;
	}
	cout << cnt3 << endl;
	system("pause");
	return 0;
}
//2016年6月26日11:03:13
//实验室