/****************************************************************************/


//------------------------------------------------------STD
#include <limits.h>
INT_MIN, INT_MAX

std::to_string();
std::stoi();
std::stol();
std::stoll();

//------------------------------------------------------C++

//static
class A
{
private:
	static unordered_map<char,int> a;
};
unordered_map<char,int> A::a{{}, {'x',1}, {} };//静态成员变量类外初始化

//------------------------------------------------------

//algorithm
container.find(); //返回迭代器，查找的速度和容器的性质相关
reverse(s.begin(), s.end());	//翻转字符串

//container

vector.push_back();	//尾插
vector.size();	//返回数据的个数



//---------------------------------------------------------algorithm
//1.问题要考虑周全，比如输入vector<string>，需要考虑一个string和空的情况



//----------------------------------------------------------error pool
1. while newing a struct in leetcode, use new ();//有构造函数








