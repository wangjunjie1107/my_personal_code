#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<iomanip>

// cout.put() 向缓冲区写字符
// cout.write() 从buffer中写num个字节到当前输出流中

void test01()
{
	// cout.put() 向缓冲区写字符
	cout.put('h').put('e').put('l').put('l').put('o');
	cout << endl;

	// cout.write() 从buffer中写num个字节到当前输出流中
	char buffer[] = "hello world";
	cout.write(buffer,sizeof(buffer));
	cout << endl;


	cout << "hello world" << endl;
}

//通过流成员函数
void test02()
{
	int number = 99;
	
	cout.width(10);			 //设置宽度
	cout.fill('*');			//填充字符
	
	
	cout.setf(ios::left);	//设置左对齐格式
	
	cout.unsetf(ios::dec);	//卸载十进制
	cout.setf(ios::hex);	//设置十六进制
	
	cout.setf(ios::showbase); //显示基数
	
	cout.unsetf(ios::hex);	//卸载十六进制
	cout.setf(ios::oct);	//设置八进制
	cout.setf(ios::showbase); //显示基数

	
	cout << number << endl;
}

void test03()
{
	//使用控制符
	int number = 17;
	cout << setw(20)	//设置宽度
		<< setfill('*') //填充
		<< setiosflags(ios::showbase)//显示基数
		<< setiosflags(ios::left)  //左对齐
		<< hex   //设置十六进制
		<< number
		<< endl;
}
int main() 
{

	//test01();

	//test02();

	test03();

	system("pause");
	return EXIT_SUCCESS;
}
























