#include <stdio.h>

//P68 -forѭ����򵥵��÷�
//�����ⷶΧ�������ĺ�
/*int main()
{
	int i;
	int sum;
	for (i = 1; i <= 10; i += 2)//i+=2 �ȼ���i+2
	{
		sum = sum + i;
	}

	printf("i = %d\n", i);
	printf("sum = %d\n", sum);

	return 0;
}*/

//P69 forѭ��3-for ��if��Ƕ��ʹ��
//��1-100֮�������ܱ�3����������֮��
int main()
{
	int i;
	int sum=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum += i;
	}
	printf("��Ϊ%d\n", sum);

	return 0;
}


//p69 ��ҵ
//1.��1-100֮������֮�ͣ�2.��1-100֮������������3.��1-100����ƽ��ֵ��4.��1-100����֮����ż��֮�͡�

