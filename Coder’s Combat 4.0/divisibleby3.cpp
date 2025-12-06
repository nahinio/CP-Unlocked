#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;

	vector<int> v;

	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	vector<int> vtest;
	vtest.push_back(v[0]);

	for (int i = 1; i < v.size(); ++i)
	{
		if(v[i] > v[i - 1]) vtest.push_back(v[i]);
	}

	vector<int> vtestrev;

	for (int i = vtest.size() - 1; i >= 0; i--)
	{
		vtestrev.push_back(vtest[i]);
	}


	int count = 0;
	int flag = vtestrev[k-1];
	cout << flag << endl;

	for (int i = 0; i < v.size(); ++i)
	{
		if(v[i] > flag) count++;
	}

	cout << count << endl;


	return 0;
}