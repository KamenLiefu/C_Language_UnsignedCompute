#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main() {//数据在计算机中是以补码的形式存储的
	unsigned int a = 1;//00000000 00000000 00000000 00000001
	int b = -2;
	/*10000000 00000000 00000000 00000010//原码
	  01111111 11111111 11111111 11111101//反码
	  01111111 11111111 11111111 11111110//补码
	  */
	cout << (a + b) << endl;//01111111 11111111 11111111 11111111 =4294967295
	
	return 0;
}