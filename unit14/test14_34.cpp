#include <iostream>
#include <string>
class PrintString {
public:
	PrintString(std::ostream &o = std::cout,char c = ' '):os(o),sep(c){}
	void operator()(const std::string &s) const { os << s << sep; }
private:
	std::ostream &os;	//����д���Ŀ����
	char sep;			//���ڽ���ͬ����������ַ�
};

class Myoperator {
	Myoperator() = default;
	int operator()(bool a, int b, int c) { return a ? b : c; }
};