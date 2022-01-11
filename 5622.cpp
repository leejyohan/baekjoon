#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
	//5622

	char word[15];
	gets_s(word);
	int len = strlen(word);
	int sec = 0;

	for (int i = 0; i < len; i++)
	{
		if ((int)word[i] - 65 >= 0 && (int)word[i] - 65 < 3)//abc
			sec += 3;
		else if ((int)word[i] - 65 >= 3 && (int)word[i] - 65 < 6)//def
			sec += 4;
		else if ((int)word[i] - 65 >= 6 && (int)word[i] - 65 < 9)//ghi
			sec += 5;
		else if ((int)word[i] - 65 >= 9 && (int)word[i] - 65 < 12)//jkl
			sec += 6;
		else if ((int)word[i] - 65 >= 12 && (int)word[i] - 65 < 15)//mno
			sec += 7;
		else if ((int)word[i] - 65 >= 15 && (int)word[i] - 65 < 19)//pqrs
			sec += 8;
		else if ((int)word[i] - 65 >= 19 && (int)word[i] - 65 < 22)//tuv
			sec += 9;
		else if ((int)word[i] - 65 >= 22 && (int)word[i] - 65 <26 )
			sec += 10;
	}
	cout << sec;
}