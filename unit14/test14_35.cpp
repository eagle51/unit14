#include <iostream>
#include <string>
#include <vector>
class InputString {
public:
	InputString(std::istream &in = std::cin):is(in) {}
	std::string operator()()			//�˴�������ص���string���͵����ã������������������myString��
	{
		std::string myString;
		getline(is,myString);
		return is?myString:std::string();
	}					//����������ص������ã�����������Ž�����myString�ͱ������ˣ��������в��������myString
private:
	std::istream &is;
};
int main()
{
	std::vector<std::string> vc;
	std::string s;
	InputString inputString(std::cin);
	//std::cout << inputString() << std::endl;		//���ں������ص���string���͵���ֵ���������ֵ�����������
	while(s = inputString(),s.size())		//�˴��б�ʽ���Ժϳ�һ�仰!(s = inputString()).size()
		vc.push_back(s);
	for (auto &ele : vc)
		std::cout << ele << std::endl;
	system("pause");
	return 0;
}
//2016��6��25��22:01:58
//ʵ����