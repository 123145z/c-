//#include <iostream>
//#include<string >
//using namespace std;
//int main() {
//	// 声明一个整型变量myInt并初始化为10
//	int myInt = 10;
//	int *p1 = &myInt;
//
//	// 声明一个浮点型变量myFloat并初始化为3.14
//	float myFloat = 3.14f;
//	float *p2 = &myFloat;
//
//	// 声明一个双精度浮点型变量myDouble并初始化为3.14
//	double myDouble = 3.14;
//	double *p3 = &myDouble;
//
//	// 声明一个字符型变量myChar并初始化为大写字母A
//	char myChar = 'A';
//	char *p4 = &myChar;
//
//	// 声明一个布尔型变量myBool并初始化为true
//	bool myBool = true;
//	bool *p5 = &myBool;
//
//	// 声明一个字符串型变量str并初始化为licx
//	string mystr = "licx";
//	string *p6 = &mystr;
//
//
//	// 输出变量的值
//	std::cout << "myInt: " << myInt << std::endl;
//	std::cout << "myFloat: " << myFloat << std::endl;
//	std::cout << "myDouble: " << myDouble << std::endl;
//	std::cout << "myChar: " << myChar << std::endl;
//	std::cout << "myBool: " << myBool << std::endl;
//	std::cout << "mystr: " << mystr << std::endl;
//
//	// 打印每个变量的地址和值
//	std::cout << "Address of myInt: " << p1 << ", Value: " << *p1 << std::endl;
//	std::cout << "Address of myFloat: " << p2 << ", Value: " << *p2 << std::endl;
//	std::cout << "Address of myDouble: " << p3 << ", Value: " << *p3 << std::endl;
//	std::cout << "Address of myChar: " << p4 << ", Value: " << *p4 << std::endl;
//	std::cout << "Address of myBool: " << p5 << ", Value: " << *p5 << std::endl;
//	std::cout << "Address of mystr: " << p6 << ", Value: " << *p6 << std::endl;
//
//
//	//打印每个变量的地址
//	std::cout << "Address of myInt: " << &myInt << endl;
//	std::cout << "Address of myFloat:" << &myFloat << endl;
//	std::cout << "Address of myDouble" << &myDouble << endl;
//	//std::cout << "Address of myChar: " << &myChar << endl;
//	std::cout << "Address of myBool: " << &myBool << endl;
//	std::cout << "Address of mystr: " << &mystr << endl;
//
//	//重新赋值
//	*p1 = 20; // 将myInt的值修改为20
//	*p2 = 6.28f; // 将myFloat的值修改为6.28
//	*p3 = 2.71828; // 将myDouble的值修改为2.71828
//	*p4 = 'B'; // 将myChar的值修改为小写字母B
//	*p5 = false; // 将myBool的值修改为false
//	*p6 = "Moonshot"; // 将mystr的值修改为"Moonshot"
//
//	//重新赋值过后打印
//	std::cout << "Address of myInt: " << p1 << ", Value: " << *p1 << std::endl;
//	std::cout << "Address of myFloat: " << p2 << ", Value: " << *p2 << std::endl;
//	std::cout << "Address of myDouble: " << p3 << ", Value: " << *p3 << std::endl;
//	std::cout << "Address of myChar: " << p4 << ", Value: " << *p4 << std::endl;
//	std::cout << "Address of myBool: " << p5 << ", Value: " << *p5 << std::endl;
//	std::cout << "Address of mystr: " << p6 << ", Value: " << *p6 << std::endl;
//
//	//sizeof
//	std::cout << "Size of myInt: " << sizeof(myInt) << " bytes" << std::endl;
//	std::cout << "Size of myFloat: " << sizeof(myFloat) << " bytes" << std::endl;
//	std::cout << "Size of myDouble: " << sizeof(myDouble) << " bytes" << std::endl;
//	std::cout << "Size of myChar: " << sizeof(myChar) << " bytes" << std::endl;
//	std::cout << "Size of myBool: " << sizeof(myBool) << " bytes" << std::endl;
//	std::cout << "Size of mystr: " << sizeof(mystr) << " bytes" << std::endl;
//
//	return 0;
//
//}