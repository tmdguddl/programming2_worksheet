﻿#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	int n;

	cout << "정수 10개 입력:: ";
	for (int i = 0; i < 10; i++) {
		cin >>n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < 10; i++) {
		cout << v[i] << "";
	}
	cout << endl;

}