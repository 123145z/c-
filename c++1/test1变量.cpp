//#include <iostream>
//#include<string >
//using namespace std;
//int main() {
//	// ����һ�����ͱ���myInt����ʼ��Ϊ10
//	int myInt = 10;
//	int *p1 = &myInt;
//
//	// ����һ�������ͱ���myFloat����ʼ��Ϊ3.14
//	float myFloat = 3.14f;
//	float *p2 = &myFloat;
//
//	// ����һ��˫���ȸ����ͱ���myDouble����ʼ��Ϊ3.14
//	double myDouble = 3.14;
//	double *p3 = &myDouble;
//
//	// ����һ���ַ��ͱ���myChar����ʼ��Ϊ��д��ĸA
//	char myChar = 'A';
//	char *p4 = &myChar;
//
//	// ����һ�������ͱ���myBool����ʼ��Ϊtrue
//	bool myBool = true;
//	bool *p5 = &myBool;
//
//	// ����һ���ַ����ͱ���str����ʼ��Ϊlicx
//	string mystr = "licx";
//	string *p6 = &mystr;
//
//
//	// ���������ֵ
//	std::cout << "myInt: " << myInt << std::endl;
//	std::cout << "myFloat: " << myFloat << std::endl;
//	std::cout << "myDouble: " << myDouble << std::endl;
//	std::cout << "myChar: " << myChar << std::endl;
//	std::cout << "myBool: " << myBool << std::endl;
//	std::cout << "mystr: " << mystr << std::endl;
//
//	// ��ӡÿ�������ĵ�ַ��ֵ
//	std::cout << "Address of myInt: " << p1 << ", Value: " << *p1 << std::endl;
//	std::cout << "Address of myFloat: " << p2 << ", Value: " << *p2 << std::endl;
//	std::cout << "Address of myDouble: " << p3 << ", Value: " << *p3 << std::endl;
//	std::cout << "Address of myChar: " << p4 << ", Value: " << *p4 << std::endl;
//	std::cout << "Address of myBool: " << p5 << ", Value: " << *p5 << std::endl;
//	std::cout << "Address of mystr: " << p6 << ", Value: " << *p6 << std::endl;
//
//
//	//��ӡÿ�������ĵ�ַ
//	std::cout << "Address of myInt: " << &myInt << endl;
//	std::cout << "Address of myFloat:" << &myFloat << endl;
//	std::cout << "Address of myDouble" << &myDouble << endl;
//	//std::cout << "Address of myChar: " << &myChar << endl;
//	std::cout << "Address of myBool: " << &myBool << endl;
//	std::cout << "Address of mystr: " << &mystr << endl;
//
//	//���¸�ֵ
//	*p1 = 20; // ��myInt��ֵ�޸�Ϊ20
//	*p2 = 6.28f; // ��myFloat��ֵ�޸�Ϊ6.28
//	*p3 = 2.71828; // ��myDouble��ֵ�޸�Ϊ2.71828
//	*p4 = 'B'; // ��myChar��ֵ�޸�ΪСд��ĸB
//	*p5 = false; // ��myBool��ֵ�޸�Ϊfalse
//	*p6 = "Moonshot"; // ��mystr��ֵ�޸�Ϊ"Moonshot"
//
//	//���¸�ֵ�����ӡ
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