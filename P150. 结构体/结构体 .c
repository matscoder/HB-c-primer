#include<stdio.h>
#include<malloc.h>

struct Student//���ýṹ���������µ��������ͣ��ɻ��������������
{
	int age;
	float score;
	char sex;
};




int main()
{
	struct Student st = { 80,66.6,'F ' };//�µ���������
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



//P157-�ṹ�� - 7
struct Student {
	int age;
	char sex;
	char name[100];

}
int main()
{
	struct Student st = { 20,'F',"С��" };
	struct Student *pst = { 20,'F',"С��" };

		printf("%d %c %s   \n",st.age,st.sex,st.name )
		printf("%d %c %s   \n",pst->age,pst->sex,pst ->name )
}




P158- �ṹ�� 8 ͨ��������ɶԽṹ���������������
int main()
{
	struct Student st;

	InputStudent(&st);//�Խṹ���������
	printf("%d %c %s\n", st.age, st.sex, st.name);
	//OutputStudent();//�Խṹ��������

	return 0; 
}  

void InputStudent(struct Student* pstu)//pstuֻռ4���ֽ�
{
	(*pstu).age = 10;
	strcpy(pstu->name, "����");
	pstu->sex = 'F';
}



a[5]
i<4    j<4   a[1]a[2]
	a[2]  a[3]  a[3] a[4]


	//ð������
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




//P163.�ṹ��11-ѧ����Ϣ����ϵͳ

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

//��̬�Ĺ���һά����
printf("������ѧ���ĸ���:\n");
printf("len =");
scanf("%d", &len);
pArr = (struct Student*)malloc(len * sizeof(struct Student));

//����
for (i = 0; i < len; i++)
{
	printf("�������%d��ѧ������Ϣ:\n", i + 1);
	printf("len =");
	scanf("%d", &pArr[i].age);

	printf("name =");
	scanf("%s", &pArr[i].name);

	printf("score = ");
	scanf("%f",)
	
}