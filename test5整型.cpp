//#include <iostream>
//#include<inttypes.h>
//#include <cstdint>
//#include <climits> // ���ڻ�ȡ���͵����ֵ����Сֵ
//
//int main() {
//	// ��������
//	int a = 10; // �з�������
//	short b = 20; // �з��Ŷ�����
//	long c = 30; // �з��ų�����
//	long long d = 40; // �з��Ÿ�������
//
//	// �޷�������
//	unsigned int e = 50; // �޷�������
//	unsigned short f = 60; // �޷��Ŷ�����
//	unsigned long g = 70; // �޷��ų�����
//	unsigned long long h = 80; // �޷��Ÿ�������
//
//	// �̶��������
//	int8_t i = -100; // 8λ�з�������
//	uint8_t j = 100; // 8λ�޷�������
//	int16_t k = -32768; // 16λ�з�������
//	uint16_t l = 65535; // 16λ�޷�������
//
//	//int32_t m = -2147483648; // 32λ�з�������
//
//	uint32_t n = 4294967295; // 32λ�޷�������
//	int64_t o = -9223372036854775808LL; // 64λ�з�������
//	uint64_t p = 18446744073709551615ULL; // 64λ�޷�������
//
//	// ��������
//	bool isTrue = true; // ����ֵ true
//	bool isFalse = false; // ����ֵ false
//
//	// �ַ�����
//	char ch = 'A'; // �ַ�����
//	signed char sch = -10; // �з����ַ�����
//	unsigned char uch = 255; // �޷����ַ�����
//
//	// ö������
//	enum Color { Red, Green, Blue }; // �Զ���ö������
//	Color myColor = Green; // ö�����͵ı���
//
//	// ��ӡֵ
//	std::cout << "a: " << a << std::endl;
//	std::cout << "b: " << b << std::endl;
//	std::cout << "c: " << c << std::endl;
//	std::cout << "d: " << d << std::endl;
//	std::cout << "e: " << e << std::endl;
//	std::cout << "f: " << f << std::endl;
//	std::cout << "g: " << g << std::endl;
//	std::cout << "h: " << h << std::endl;
//	std::cout << "i: " << i << std::endl;
//	std::cout << "j: " << static_cast<int>(j) << std::endl; // ���޷����ַ�ת��Ϊ�з�������
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
//	std::cout << "uch: " << static_cast<int>(uch) << std::endl; // ���޷����ַ�ת��Ϊ�з�������
//	std::cout << "myColor: " << myColor << std::endl;
//
//	// ��ӡ���͵����ֵ����Сֵ
//	std::cout << "INT_MAX: " << INT_MAX << std::endl;
//	std::cout << "INT_MIN: " << INT_MIN << std::endl;
//	std::cout << "UINT_MAX: " << UINT_MAX << std::endl;
//	std::cout << "INT8_MAX: " << INT8_MAX << std::endl;
//	std::cout << "INT8_MIN: " << INT8_MIN << std::endl;
//	std::cout << "UINT8_MAX: " << UINT8_MAX << std::endl;
//
//	return 0;
//}