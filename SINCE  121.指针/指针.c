#define _CRTCSECURE_NO_WARNINGS
#include <stdio.h>





//p126-基本类型指针常见错误解析
int main()//用5修改了不属于自身的单元,不能修改系统未分配空间的值
{
	int* p;
	int i = 5;

	*p = i;
	printf("%d\n", *p);

	return 0;
}






int main()
{
	int i = 5;
	int* p;
	int* q;

	p = &i;
	//*q=p  error语法编译会出错,不是同一个变量类型
	//*q=*p  error,q没有被赋值 ？？？ *q是不知道的单元，不可以读
	p = q;
	printf("%d\n", *q);//q是垃圾值，q赋给p,p也变成垃圾值

		return 0;
}

/*
q的空间是属于本程序的，所以本程序可以读写q的内容，
但是如果q内部是垃圾值，则本程序不能读写*q的内容
因为此时*q所代表的内存单元的控制权限并没有分配给本程序
*/



//p127-经典指针程序互换两个数字
int main()
{
	int a = 3;
	int b = 5;
	int t;

	t = a;
	a = b;
	b = t;
	printf("a=%d,b=%d\n", a, b);

	return 0;
}



void huhuan(int a, int b)//此处只互换了形参a和b的值，主函数执行完宏后，形参a和b没有了
{
	int t;
	t = a;
	a = b;
	b = t;
	return;
}
int main()//输出结果依然是a=3,b=5
{
	int a = 3;
	int b = 5;
	

	huhuan(a, b);

	printf("a=%d,b=%d\n", a, b);

	return 0;
}





经典指针程序互换两个数字
//如果要互换*p和*q的值，则t必须定义成int,不能定义成int *,否则语法出错
void huhuan_2(int* p, int* q)//用于保存a地址的容器地址改变，a本身的地址和内容并没有改变
{                          //内部仅仅将p和q的内容改变，a和b未改变，形参的改变不会影响实参的值(仅替换p,q,t值情况下)
	int t;
	//t=p;
	//p=q;
	//q=t;

	t = *p;//*p是以p的内容为地址的整型变量,p是int *类型,*p是int类型
	*p = *q;
	*q = t;
}
int main()
{
	int a = 3;//a的地址已经被分配好，是固定的，互换地址代表空间改变，无法做到  
	int b = 5;

	huhuan_2(&a, &b);
	printf("a=%d, b=%d");
	
}




//P134
void f(int* pArr, int len)
{
	int i;
	for (i = 0; i < len; ++i)
		printf("%d", pArr[i]);//(pArr+i)等价于pArr[i] 也等价于b[i]也等价于*(b+i)
	printf("\n");
}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[6] = { -1,-2,-3,4,5,-6 };
	int c[100] = { 1,99,22,33 };

	f(b, 6);

	return 0;
}







//p135
void f(int* pArr, int len)
{
	pArr[2] = 10;//pArr[2] == *(pArr+2) == *(a+2) ==a[2]

}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	// a = &a[2];//a是个指针，是a[0]的地址，是指针常量，不能改变
	printf("%#X, %#X\n", a, a[0]);
	//a == &a[0]

	printf("%d\n", a[2]);
	f(a, 5 );
	printf("%d\n", a[2]);

	return 0;
}




void OutArr(int* pArr, int len)//输出
{
	//pArr[2] = 10;//pArr[2] == *(pArr+2) == *(a+2) ==a[2]
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\n", pArr[i]);
	}
}
int main()
{
	int a[5] = { 1,2,3,4,5 };
	// a = &a[2];//a是个指针，是a[0]的地址，是指针常量，不能改变
	//printf("%#X, %#X\n", a, a[0]);
	//a == &a[0]
	OutArr(a,5)
	//printf("%d\n", a[2]);
	//f(a, 5);
	//printf("%d\n", a[2]);

	return 0;
}


//p136指针变量的运算，只能减法！
//要想改变这个变量的内容，只能发送这个变量的地址
void f(int* p)
{
	*p = 10;
}
int main()
{
	int i = 5;
	f(&i);
	printf("i=%d\n", i);

	return 0;
}



//p137
char ch = 'A';
int i = 99;
double x = 66.6;
char* p = &ch;
int* q = &i;
double* r = &x;

printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(r));

return 0;
 