class Solution{
	public:
	vector<long long int> find(int l, int b, int h)
	{
		long long int L = l, B = b, H = h;
		long long int area = 2*(L*H + B*H + L*B);
		long long int volume = (L*B*H);
		vector<long long int >res;
		res.push_back(area);
		res.push_back(volume);
		return res;
	}  
};
