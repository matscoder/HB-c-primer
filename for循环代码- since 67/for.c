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
/*int main()
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
}*/


//p69 ��ҵ
//1.��1-100֮������֮�ͣ�2.��1-100֮������������3.��1-100����ƽ��ֵ��4.��1-100����֮����ż��֮�͡�

//1.
/*int main()
{
int c=0,d=0,i;//a������bż��
int sum1 = 0, sum2 = 0 ; 
float svb1 ,svb2;

for (i = 1; i <= 100; i++)
{
	if (i % 2 != 0)
	{
		sum1 += i;
		c++; //��������
	}
	else{
		sum2 += i;
		d++;//ż������
	}

}
svb1 = sum1 / (float)c;
svb2 = sum2 / (float)d;

printf("1-100֮�������֮��Ϊ%d\nż��֮��Ϊ%d\n1-100������ƽ��ֵ��:%f\n1-100ż����ƽ��ֵ��: %f\n", sum1, sum2, svb1, svb2);

return 0;
}*/

//P78-���������3-���ű��ʽ
int main()
{
	int i;
	int j = 2;

	i = (j++, ++j, j + 2, j - 3); //i=1,����j=4,j+2��j-3�����ı�j��ֵ;
	printf("%d\n", i);
}

//���ű��ʽ:
��ʽ:(A��B��C��D)
����:
	������ִ��
	���ձ��ʽ��ֵ�����һ���ֵ