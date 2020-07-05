//开平方运算程序

#include <iostream>               //预处理器指令
#include <cmath>                  //数学预编译头
 
int main()                        //函数头
{
	using namespace std;          //命名空间

	cout << "开平方运算程序"      //输出文字 开平方运算程序
    << endl;                      //换行
	double 数字;                  //定义数字
	cout << "输入:";              //输出文字 输入：
	cin >> 数字;                  //数字键入位
	double 答案;                  //定义答案
	答案 = sqrt(数字);            //数学运算输入的数字
	cout << "开得平方结果为:"     //输出文字 开得平方结果为：
    << 答案                       //输出 答案
	<< endl;                      //换行
    cout<< "运算完成——程序结束";//输出文字 运算完成 程序结束
	cout<< endl;                  //换行
	cout << "回车键退出...";      //输出文字 回车键退出...
	getchar();                    //阻止关闭
	getchar();                    //阻止关闭
	return 0;                     //函数完成
}