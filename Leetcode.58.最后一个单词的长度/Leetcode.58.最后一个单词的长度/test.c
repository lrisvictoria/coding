#define _CRT_SECURE_NO_WARNINGS 1 

/*
给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。
单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。
*/

/*
输入：s = "Hello World"
输出：5
解释：最后一个单词是“World”，长度为5。
*/

/*
输入：s = "   fly me   to   the moon  "
输出：4
解释：最后一个单词是“moon”，长度为4。
*/

//分析：最后一个可能是空格
//反向遍历
int lengthOfLastWord(char* s)
{
	int count = 0;//计数器
	for (int i = strlen(s) - 1; i >= 0; i--)//下标 = 字符串长度 - 1
	{
		if (s[i] != ' ')//若第一个不是空格则开始计数
		{
			count++;
		}
		if (s[i] == ' ' && count != 0)//若遇到空格且计数器不为0，也就是避免第一次遇到空格退出的情况
		{
			break;
		}
	}
	return count;
}