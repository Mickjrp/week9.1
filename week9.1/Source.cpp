//�Ѻ��ҵ���Ţ 2 �ӹǹ ��� x ��� y ����ӴѺ �ҡ������ӡ����Ѻ��ҡѹ ���������ҧ���������(Level 5)
#include <stdio.h>

int a, b;
void swap()
{
	//a=2 b=3
	a = a + b; //a=5
	b = a - b; //b=2
	a = a - b; //a=3
}

int main()
{
	printf("Input: ");
	scanf_s("%d %d", &a, &b);
	swap();
	printf("Output: %d %d", a, b);

	return 0;
}