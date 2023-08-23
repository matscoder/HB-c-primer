#include<stdio.h>
#include<malloc.h>

struct Student//利用结构体可以造出新的数据类型，由基本数据类型组成
{
	int age;
	float score;
	char sex;
};




int main()
{
	struct Student st = { 80,66.6,'F ' };//新的数据类型
	/*int age;
	float score;
	int age2;
	float score2;
	char name2[100];*/

	struct Student* pst = &st;
	
	pst->age = 88;
	st.age = 10; 
	return 0; 
}



//P157-结构体 - 7
struct Student {
	int age;
	char sex;
	char name[100];

}
int main()
{
	struct Student st = { 20,'F',"小娟" };
	struct Student *pst = { 20,'F',"小娟" };

		printf("%d %c %s   \n",st.age,st.sex,st.name )
		printf("%d %c %s   \n",pst->age,pst->sex,pst ->name )
}




P158- 结构体 8 通过函数完成对结构体变量的输入和输出
int main()
{
	struct Student st;

	InputStudent(&st);//对结构体变量输入
	printf("%d %c %s\n", st.age, st.sex, st.name);
	//OutputStudent();//对结构体变量输出

	return 0; 
}  

void InputStudent(struct Student* pstu)//pstu只占4个字节
{
	(*pstu).age = 10;
	strcpy(pstu->name, "张三");
	pstu->sex = 'F';
}



a[5]
i<4    j<4   a[1]a[2]
	a[2]  a[3]  a[3] a[4]


	//冒泡排序
	void sort(int* a, int len)
{
	int i, j;
	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}

int main()
{
	int a[6] = { 10,2,8,-8,11,0 };
	int i = 0;

	sort(a, 6);
	for (i = 0; i < 6; i++)
	{
		printf("%d", a[i]);

	}
	printf("\n");
}




//P163.结构体11-学生信息管理系统

struct Student
{
	int  age;
	float score;
	char name[100];
};

int main()
{
	int len;
	struct Student* pArr;
	int i, j;
	struct Student t;
}

//动态的构造一维数组
printf("请输入学生的个数:\n");
printf("len =");
scanf("%d", &len);
pArr = (struct Student*)malloc(len * sizeof(struct Student));

//输入
for (i = 0; i < len; i++)
{
	printf("请输入第%d个学生的信息:\n", i + 1);
	printf("len =");
	scanf("%d", &pArr[i].age);

	printf("name =");
	scanf("%s", &pArr[i].name);

	printf("score = ");
	scanf("%f",)
	
}