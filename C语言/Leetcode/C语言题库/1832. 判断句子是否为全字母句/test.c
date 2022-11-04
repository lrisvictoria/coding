#define _CRT_SECURE_NO_WARNINGS 1 

/*
全字母句 指包含英语字母表中每个字母至少一次的句子。

给你一个仅由小写英文字母组成的字符串 sentence ，请你判断 sentence 是否为 全字母句 。

如果是，返回 true ；否则，返回 false 。

示例 1：

输入：sentence = "thequickbrownfoxjumpsoverthelazydog"
输出：true
解释：sentence 包含英语字母表中每个字母至少一次。
示例 2：

输入：sentence = "leetcode"
输出：false
 

提示：

1 <= sentence.length <= 1000
sentence 由小写英语字母组成

*/

bool checkIfPangram(char* sentence)
{
    int hash[1001];
    memset(hash, 0, sizeof(hash));
    int len = strlen(sentence);
    for (int i = 0; i < len; i++)
    {
        hash[sentence[i]]++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        // 哈希表中a~z下标有0
        if (!hash[i])
        {
            return false;
        }
    }
    return true;
}