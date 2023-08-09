#include<stdio.h>

//P101 一维数组的使用
//互换数组的值，倒置
/*int main()
{
	int a[7] = { 1,2,3,4,5,6,7 };
	int i, j;
	int t;

	i = 0;
	j = 6;
	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
	for (i = 0; i < 7; i++)
		printf("a[%d] = %d ", i, a[i]);

	return 0;

}*/


//二维数组的使用 //P102
int main()
{
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	}; 
	int i, j;

	for(i=0;i<3;i++){
		for (j = 0; j < 4; j++)
		{
			printf("%-5d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
