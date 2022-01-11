#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(void)
{
	//1157
	char word[1000000];
	int alp[26] = { 0, };
	int count[26] = { 0, };
	gets_s(word);
	int len = strlen(word);
	//알파벳 대문자로 바꿔서 개수만큼 배열에 저장
	for (int i = 0; i <len ; i++)
	{
		int num = (int)toupper(word[i]) -65;
		alp[num]++;
		count[num]++;
	}
	sort(count, count + 26);
	if (count[25] == count[24])
		cout << "?";
	else
	{
		for (int i = 0; i <26; i++)
		{
			if (count[25] == alp[i])
			{
				cout << (char)(i + 65);
				break;
			}
		}
	}
}