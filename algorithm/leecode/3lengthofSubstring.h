#pragma once
#include <common.h>
//����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�
//����: "abcabcbb"
//��� : 3
//���� : ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��

//����: "bbbbb"
//��� : 1
//���� : ��Ϊ���ظ��ַ�����Ӵ��� "b"�������䳤��Ϊ 1��
//a b c a b c b b
//abba
class Solution
{
public:
	int lengthOfLongestSubstring(string s)
	{
		//s[start,end) ǰ����� ���治����
		int start(0), end(0), length(0), result(0);
		int sSize = int(s.size());
		unordered_map<char, int> hash;
		while (end < sSize)
		{
			char tmpChar = s[end];
			//����s[start,end) �д���s[end]ʱ����start
			if (hash.find(tmpChar) != hash.end() && hash[tmpChar] >= start)
			{
				start = hash[tmpChar] + 1;
				length = end - start;
			}
			hash[tmpChar] = end;

			end++;
			length++;
			result = max(result, length);
		}
		return result;
	}
};
