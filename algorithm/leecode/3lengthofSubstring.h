#pragma once
#include <common.h>
//给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
//输入: "abcabcbb"
//输出 : 3
//解释 : 因为无重复字符的最长子串是 "abc"，所以其长度为 3。

//输入: "bbbbb"
//输出 : 1
//解释 : 因为无重复字符的最长子串是 "b"，所以其长度为 1。
//a b c a b c b b
//abba
class Solution
{
public:
	int lengthOfLongestSubstring(string s)
	{
		//s[start,end) 前面包含 后面不包含
		int start(0), end(0), length(0), result(0);
		int sSize = int(s.size());
		unordered_map<char, int> hash;
		while (end < sSize)
		{
			char tmpChar = s[end];
			//仅当s[start,end) 中存在s[end]时更新start
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
