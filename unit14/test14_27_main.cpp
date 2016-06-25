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
//也算是目前为止写的最长的一个程序了五百多行而已2016年6月24日21:11:42
//实验室
