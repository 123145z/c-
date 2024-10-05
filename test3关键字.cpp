//#include <iostream>
//#include <string>
//
//// 定义一个宏，用于打印关键字
//// #define 是预处理器指令，用于创建宏。
//// PRINT_KEYWORDS 是宏的名称。
//// (name) 是宏的参数，表示当使用宏时需要提供的参数。
//// std::cout << #name << std::endl; 是宏的展开体，即当宏被调用时，预处理器会将其替换为这段代码。
//#define PRINT_KEYWORDS(name) std::cout << #name << std::endl;
//
//int main() {
//	// C++ 关键字列表
//	    PRINT_KEYWORDS(alignas)
//		PRINT_KEYWORDS(alignof)
//		PRINT_KEYWORDS(and)
//		PRINT_KEYWORDS(and_eq )
//		PRINT_KEYWORDS(asm)
//		PRINT_KEYWORDS(auto)
//		PRINT_KEYWORDS(bitand)
//		PRINT_KEYWORDS(bitor )
//		PRINT_KEYWORDS(bool)
//		PRINT_KEYWORDS(break)
//		PRINT_KEYWORDS(case)
//		PRINT_KEYWORDS(catch)
//		PRINT_KEYWORDS(char)
//		PRINT_KEYWORDS(char16_t)
//		PRINT_KEYWORDS(char32_t)
//		PRINT_KEYWORDS(class)
//		PRINT_KEYWORDS(-compl)
//		PRINT_KEYWORDS(const)
//		PRINT_KEYWORDS(const_cast)
//		PRINT_KEYWORDS(continue)
//		PRINT_KEYWORDS(decltype)
//		PRINT_KEYWORDS(default)
//		PRINT_KEYWORDS(delete)
//		PRINT_KEYWORDS(do)
//		PRINT_KEYWORDS(double)
//		PRINT_KEYWORDS(dynamic_cast)
//		PRINT_KEYWORDS(else)
//		PRINT_KEYWORDS(enum)
//		PRINT_KEYWORDS(explicit)
//		PRINT_KEYWORDS(export)
//		PRINT_KEYWORDS(extern)
//		PRINT_KEYWORDS(false)
//		PRINT_KEYWORDS(float)
//		PRINT_KEYWORDS(for)
//		PRINT_KEYWORDS(friend)
//		PRINT_KEYWORDS(goto)
//		PRINT_KEYWORDS(if)
//		PRINT_KEYWORDS(inline)
//		PRINT_KEYWORDS(int)
//		PRINT_KEYWORDS(long)
//		PRINT_KEYWORDS(mutable)
//		PRINT_KEYWORDS(namespace)
//		PRINT_KEYWORDS(new)
//		PRINT_KEYWORDS(noexcept)
//		PRINT_KEYWORDS(not)
//		PRINT_KEYWORDS(not_eq )
//		PRINT_KEYWORDS(nullptr)
//		PRINT_KEYWORDS(operator)
//		PRINT_KEYWORDS(or )
//		PRINT_KEYWORDS(or_eq )
//		PRINT_KEYWORDS(private)
//		PRINT_KEYWORDS(protected)
//		PRINT_KEYWORDS(public)
//		PRINT_KEYWORDS(register)
//		PRINT_KEYWORDS(reintroduce)
//		PRINT_KEYWORDS(requires)
//		PRINT_KEYWORDS(return)
//		PRINT_KEYWORDS(short)
//		PRINT_KEYWORDS(signed)
//		PRINT_KEYWORDS(sizeof)
//		PRINT_KEYWORDS(static)
//		PRINT_KEYWORDS(static_assert)
//		PRINT_KEYWORDS(static_cast)
//		PRINT_KEYWORDS(struct)
//		PRINT_KEYWORDS(switch)
//		PRINT_KEYWORDS(template)
//		PRINT_KEYWORDS(this)
//		PRINT_KEYWORDS(thread_local)
//		PRINT_KEYWORDS(throw)
//		PRINT_KEYWORDS(true)
//		PRINT_KEYWORDS(try)
//		PRINT_KEYWORDS(typedef)
//		PRINT_KEYWORDS(typeid)
//		PRINT_KEYWORDS(typename)
//		PRINT_KEYWORDS(union)
//		PRINT_KEYWORDS(unsigned)
//		PRINT_KEYWORDS(using)
//		PRINT_KEYWORDS(virtual)
//		PRINT_KEYWORDS(void)
//		PRINT_KEYWORDS(volatile)
//		PRINT_KEYWORDS(wchar_t)
//		PRINT_KEYWORDS(while)
//		PRINT_KEYWORDS(xor)
//		PRINT_KEYWORDS(xor_eq )
//
//      //数组打印关键字
//	 // 定义一个包含C++关键字的数组
//			const char* keywords[] = {
//				"alignas",   "alignof",   "and",       "and_eq",    "asm",       "atomic_cancel",
//				"atomic_commit", "atomic_noexcept", "auto",   "bitand",    "bitor",     "bool",
//				"break",     "case",      "catch",      "char",      "char16_t",   "char32_t",
//				"class",     "compl",      "concept",    "const",     "consteval",  "constexpr",
//				"const_cast", "continue",  "co_await",   "co_return",  "co_yield",   "decltype",
//				"default",   "delete",     "do",        "double",    "dynamic_cast", "else",
//				"enum",      "explicit",   "export",     "extern",    "false",      "final",
//				"float",     "for",       "friend",     "goto",      "if",        "inline",
//				"int",       "long",       "mutable",    "namespace", "new",       "noexcept",
//				"not",       "not_eq",     "nullptr",    "operator",  "or",        "or_eq",
//				"private",   "protected",  "public",     "reflexpr",   "register",   "reinterpret_cast",
//				"requires",  "return",     "short",      "signed",    "sizeof",     "static",
//				"static_assert", "static_cast", "struct",   "switch",    "synchronized", "template",
//				"this",      "thread_local", "throw",      "true",      "try",       "typedef",
//				"typeid",    "typename",   "union",      "unsigned",  "using",      "virtual",
//				"void",      "volatile",   "wchar_t",    "while",     "xor",       "xor_eq"
//		};
//
//		// 获取关键字的数量
//		const size_t keywordsCount = sizeof(keywords) / sizeof(keywords[0]);
//
//		// 循环打印所有的关键字
//		for (size_t i = 0; i < keywordsCount; ++i) {
//			std::cout << keywords[i] << std::endl;
//		}
//
//
//		return 0;
//}