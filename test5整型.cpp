//#include <iostream>
//#include<inttypes.h>
//#include <cstdint>
//#include <climits> // 用于获取整型的最大值和最小值
//
//int main() {
//	// 基本整型
//	int a = 10; // 有符号整型
//	short b = 20; // 有符号短整型
//	long c = 30; // 有符号长整型
//	long long d = 40; // 有符号更长整型
//
//	// 无符号整型
//	unsigned int e = 50; // 无符号整型
//	unsigned short f = 60; // 无符号短整型
//	unsigned long g = 70; // 无符号长整型
//	unsigned long long h = 80; // 无符号更长整型
//
//	// 固定宽度整型
//	int8_t i = -100; // 8位有符号整型
//	uint8_t j = 100; // 8位无符号整型
//	int16_t k = -32768; // 16位有符号整型
//	uint16_t l = 65535; // 16位无符号整型
//
//	//int32_t m = -2147483648; // 32位有符号整型
//
//	uint32_t n = 4294967295; // 32位无符号整型
//	int64_t o = -9223372036854775808LL; // 64位有符号整型
//	uint64_t p = 18446744073709551615ULL; // 64位无符号整型
//
//	// 布尔类型
//	bool isTrue = true; // 布尔值 true
//	bool isFalse = false; // 布尔值 false
//
//	// 字符类型
//	char ch = 'A'; // 字符类型
//	signed char sch = -10; // 有符号字符类型
//	unsigned char uch = 255; // 无符号字符类型
//
//	// 枚举类型
//	enum Color { Red, Green, Blue }; // 自定义枚举类型
//	Color myColor = Green; // 枚举类型的变量
//
//	// 打印值
//	std::cout << "a: " << a << std::endl;
//	std::cout << "b: " << b << std::endl;
//	std::cout << "c: " << c << std::endl;
//	std::cout << "d: " << d << std::endl;
//	std::cout << "e: " << e << std::endl;
//	std::cout << "f: " << f << std::endl;
//	std::cout << "g: " << g << std::endl;
//	std::cout << "h: " << h << std::endl;
//	std::cout << "i: " << i << std::endl;
//	std::cout << "j: " << static_cast<int>(j) << std::endl; // 将无符号字符转换为有符号整数
//	std::cout << "k: " << k << std::endl;
//	std::cout << "l: " << l << std::endl;
//	//std::cout << "m: " << m << std::endl;
//	std::cout << "n: " << n << std::endl;
//	std::cout << "o: " << o << std::endl;
//	std::cout << "p: " << p << std::endl;
//	std::cout << "isTrue: " << isTrue << std::endl;
//	std::cout << "isFalse: " << isFalse << std::endl;
//	std::cout << "ch: " << ch << std::endl;
//	std::cout << "sch: " << sch << std::endl;
//	std::cout << "uch: " << static_cast<int>(uch) << std::endl; // 将无符号字符转换为有符号整数
//	std::cout << "myColor: " << myColor << std::endl;
//
//	// 打印整型的最大值和最小值
//	std::cout << "INT_MAX: " << INT_MAX << std::endl;
//	std::cout << "INT_MIN: " << INT_MIN << std::endl;
//	std::cout << "UINT_MAX: " << UINT_MAX << std::endl;
//	std::cout << "INT8_MAX: " << INT8_MAX << std::endl;
//	std::cout << "INT8_MIN: " << INT8_MIN << std::endl;
//	std::cout << "UINT8_MAX: " << UINT8_MAX << std::endl;
//
//	return 0;
//}