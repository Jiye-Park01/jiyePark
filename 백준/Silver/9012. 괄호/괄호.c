#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int T;
	int left = 0;
	int right = 0;
	char leftc = '(';
	char rightc = ')';
	char array[50];
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%s", array);
//		printf("%s", array);
		for (int j = 0; j < 50; j++)
		{
			if (array[j] == leftc)
				left++;
			else if (array[j] == rightc)
				right++;
			else
				break;
			if (right > left)
				break;
		}
//		printf("%d %d", left, right);
		if (left == right)
			printf("YES\n");
		else
			printf("NO\n");
		left = 0;
		right = 0;
	}

	return 0;
}