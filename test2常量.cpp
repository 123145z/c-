//#include <iostream>
//using namespace std;
//
//// ����һ��ö������Color������������ɫ
//enum Color {
//	Red,    // Ĭ������£�Red��ֵΪ0
//	Green,  // Green��ֵΪ1
//	Blue    // Blue��ֵΪ2
//};
//
//#define  age 34
//#define name1  "lic"
//int main() {
//	
//	std::cout << "Name: " << name1 << std::endl; // ��ӡ�ַ�������
//	std::cout << "Age: " << age << std::endl;   // ��ӡ��ֵ����
//	Color myColor = Green;  // ��������ѡ��Green��Ϊʾ��
//
//	// ֱ�Ӵ�ӡö�ٳ�Ա
//	std::cout << "My color is " << myColor << std::endl;
//	// ��ӡ����ö�ٳ�Ա��ֵ
//	std::cout << "Red is " << Red << std::endl;
//	std::cout << "Green is " << Green << std::endl;
//	std::cout << "Blue is " << Blue << std::endl;
//
//	//����const���εĳ���
//	const int maxUsers = 100;  // ���ͳ���
//	const double pi = 3.14159;  // �����ͳ���
//	const char grade = 'A';  // �ַ�����
//	const char* name = "Kimi";
//
//	//ָ�볣��
//	int num = 10;
//	const int* ptr = &num;
//
//	std::cout << "The value is: " << *ptr << std::endl;  // ���num��ֵ
//
//	const int anotherNum = 20;
//	ptr = &anotherNum;  // ptr����ָ��anotherNum
//	  // ptr����ָ��anotherNum
//	std::cout << "The new value is: " << *ptr << std::endl;  // ���anotherNum��ֵ
//
//	int a = 100;
//	ptr = &a;
//	std::cout << "The new value is: " << *ptr << std::endl;  // ���a��ֵ
//
//
//	//����ָ��
//	int someInt = 10;
//	int *const ptrConst = &someInt;
//	*ptrConst = 100;
//
//	//����ָ�볣��
//	const int *const ptrConstConst = &someInt;
//	// *ptrConstConst = 50; // ����ptrConstConst ��һ������ָ�볣���������޸�someInt��ֵ
//	// ptrConstConst = &anotherInt; // ����ptrConstConst ��һ������ָ�볣�������ܸı�ָ��
//	cout << "someInt=" << someInt << endl;
//}