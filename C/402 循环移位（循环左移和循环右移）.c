#include<stdio.h>

//循环左移 
void test01()
{
	int a = 9999; // 0010 0111 0000 1111  循环左移4位后   0010 0111 0000 1111 0010  十进制大小为   159986
	int b;
	int c;
	
	b = a >> (16 - 4); // 先将 a 的左端的前 4 位 放到  b 的低四位  0000 0000 0000 0010
	
	c = a << 4;		// 将 a 左移 4 位， 低 4 位补 0    0010 0111 0000 1111 0000 
	
	c = c | b;		// 将 a 左移的高位和第四位做 或 运算   得到循环左移的结果  0010 0111 0000 1111 0010
	
	printf("%d\n", c);  // 159986
}

//循环右移 
void test02()
{
	int a = 9999; // 0010 0111 0000 1111  循环右移4位后 1111 0010 0111 0000   十进制大小为   62064
	int b;
	int c;
	
	b = a & 15; // 0000 0000 0000 1111 保存 a 的后四位
	b = b << 12; // 将后4位左移12位，末尾补0  1111 0000 0000 0000 
	
	c = a >> 4;		// 将 a 右移 4 位， 高 4 位补 0    0000	0010 0111 0000
	
	c = c | b;		// 将 a 右移的高4位和低12位做 或 运算   得到循环右移的结果  1111 0010 0111 0000
	
	printf("%d\n", c);  // 62064
}


int main()
{
	test01();
	test02(); 
	
	return 0;
 } 
