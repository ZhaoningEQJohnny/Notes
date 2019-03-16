static void SplitStr(string s, vector<string>& v, char c)
{
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
		{
			v.push_back(s.substr(count, i - count));
			count = i + 1;
		}
	}
	if (v.size() != 1)
		v.push_back(s.substr(count, s.size()));

}

int main()
{
	String line = " ";
	char c = ' ';
	vector<string> v;
	SplitStr(line, v, c);
	return 0;
}
