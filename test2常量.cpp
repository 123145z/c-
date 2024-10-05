//#include <iostream>
//using namespace std;
//
//// 定义一个枚举类型Color，包含三种颜色
//enum Color {
//	Red,    // 默认情况下，Red的值为0
//	Green,  // Green的值为1
//	Blue    // Blue的值为2
//};
//
//#define  age 34
//#define name1  "lic"
//int main() {
//	
//	std::cout << "Name: " << name1 << std::endl; // 打印字符串常量
//	std::cout << "Age: " << age << std::endl;   // 打印数值常量
//	Color myColor = Green;  // 假设我们选择Green作为示例
//
//	// 直接打印枚举成员
//	std::cout << "My color is " << myColor << std::endl;
//	// 打印所有枚举成员的值
//	std::cout << "Red is " << Red << std::endl;
//	std::cout << "Green is " << Green << std::endl;
//	std::cout << "Blue is " << Blue << std::endl;
//
//	//其他const修饰的常量
//	const int maxUsers = 100;  // 整型常量
//	const double pi = 3.14159;  // 浮点型常量
//	const char grade = 'A';  // 字符常量
//	const char* name = "Kimi";
//
//	//指针常量
//	int num = 10;
//	const int* ptr = &num;
//
//	std::cout << "The value is: " << *ptr << std::endl;  // 输出num的值
//
//	const int anotherNum = 20;
//	ptr = &anotherNum;  // ptr现在指向anotherNum
//	  // ptr现在指向anotherNum
//	std::cout << "The new value is: " << *ptr << std::endl;  // 输出anotherNum的值
//
//	int a = 100;
//	ptr = &a;
//	std::cout << "The new value is: " << *ptr << std::endl;  // 输出a的值
//
//
//	//常量指针
//	int someInt = 10;
//	int *const ptrConst = &someInt;
//	*ptrConst = 100;
//
//	//常量指针常量
//	const int *const ptrConstConst = &someInt;
//	// *ptrConstConst = 50; // 错误：ptrConstConst 是一个常量指针常量，不能修改someInt的值
//	// ptrConstConst = &anotherInt; // 错误：ptrConstConst 是一个常量指针常量，不能改变指向
//	cout << "someInt=" << someInt << endl;
//}