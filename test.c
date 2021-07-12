#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);//-1
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//
//	//32bit
//	//num&1 == 1
//	//00000000000000000000000000000011
//	//00000000000000000000000000000001
//	//00000000000000000000000000000000
//	//统计num的补码中有几个1
//	/*while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//
//
//	//printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof 计算的变量所占内存空间的大小，单位是字节
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(int));//
//
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));//
//
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(char*));//
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));//
//
//	return 0;
//} 

//int main()
//{
//	int a = 0;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof 计算的变量所占内存空间的大小，单位是字节
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(int));//4
//
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));//1
//
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(char*));//4
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));//40
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'A' || ch>'Z')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}  

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	a = a & (~(1<<2));
//	printf("%d\n", a);//11
//
//	//0000000000000000000000000000001011
//	//0000000000000000000000000000000100
//	//1<<2;
//	//0000000000000000000000000000000001
//	//
//	//0000000000000000000000000000001111
//	//1111111111111111111111111111111011
//	//0000000000000000000000000000000100
//	//0000000000000000000000000000001011
//	//
//	//
//	//int a = 0;
//	////~ 按（2进制）位取反
//	////00000000000000000000000000000000
//	////11111111111111111111111111111111 - 补码
//	////11111111111111111111111111111110 - 反码
//	////10000000000000000000000000000001 - 原码
//	////-1
//	//printf("%d\n", ~a);
//
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)40
//	printf("%d\n", sizeof(ch));//(3)10
//	test1(arr);
//	test2(ch);
//	return 0;

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++; //&& 有假就不算 先使用 后加加
//	i = a++||++b||d++; // 2 2 3 4 || 有真就不算
//
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//
//	return 0;
//}
////程序输出的结果是什么？   a=0    /1 2 3 4
//   a=1   /  2 3 3 5


//创建一个结构体类型-struct Stu
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = {"张三", 20, "2019010305"};
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量.成员名
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	//
//	char b = 127;
//	//‭00000000000000000000000001111111
//	//‬01111111 - b
//
//	//a和b如何相加
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//
//	char c = a + b;
//	//10000010-c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110- 原码
//	//-126
//	printf("%d\n", c);
//
//	return 0;
//}

