#include "StrBlob.h"
#include <iostream>

int main()
{
	StrBlob sb1{ "a", "b", "c" };
	StrBlob sb2 = sb1;

	sb2[2] = "b";

	if (sb1 > sb2) {
		for (StrBlobPtr iter = sb1.begin(); iter < sb1.end(); ++iter)
			std::cout << iter.deref() << " ";
		std::cout << std::endl;
	}

	ConstStrBlobPtr iter(sb2);
	std::cout << (iter + 2).deref() << std::endl;
	system("pause");
	return 0;
}
//Ҳ����ĿǰΪֹд�����һ����������ٶ��ж���2016��6��24��21:11:42
//ʵ����
