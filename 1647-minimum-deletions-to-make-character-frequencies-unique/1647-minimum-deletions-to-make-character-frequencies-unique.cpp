class Solution
{
public:
	int minDeletions(string s)
	{
		vector<int> v(26, 0);
		for (auto c : s)
		{
			v[c - 'a']++;
		}

		sort(v.begin(), v.end(), greater<int>());
		set<int> st;
		int i = 0;
        int c=0;
		for (auto x : v)
		{
			while (st.find(x) != st.end())
			{
				x--;
				c++;
			}
            if(x>0)
			st.insert(x);
            i++;
		}
        
        return c;
	}
};