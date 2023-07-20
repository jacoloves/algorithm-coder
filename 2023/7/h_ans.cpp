#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <regex> // regex
#include <cmath>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int cnt = 0, m=0;
vector<int> G;

void insertSort(vector<int> &arr, int n, int g)
{
	int j,v;
	for (int i = g; i != n; ++i)
	{
		v = arr.at(i);
		j = i - g;
		while (j >= 0 && arr.at(j) > v)
		{
			arr.at(j + g) = arr.at(j);
			j = j - g;
			++cnt;
		}
		arr.at(j + g) = v;
	}
}


void shellSort(vector<int> &arr, int n)
{
	for (int i = 1; i <= n; ++m)
	{
		G.push_back(i);
		i = i * 3 + 1;
	}

	reverse(G.begin(), G.end());

	for (int i = 0; i != m; ++i)
	{
		insertSort(arr, n, G[i]);
	}
}


int main()
{
	int n,t;
	vector<int> arr;

	cin >>n;
	for (int i = 0; i != n; ++i)
	{
		cin >> t;
		arr.push_back(t);
	}

	shellSort(arr, n);

	cout << m << endl;

	for (int i = 0; i != m; ++i)
	{
		cout << G.at(i);
		if (i == m - 1)
		{
			cout << endl;
			break;
		}
		cout << " ";
	}

	cout << cnt << endl;
	for (int i = 0; i != n; ++i)
	{
		cout << arr.at(i);
		if (i == n - 1)
		{
			cout << endl;
			break;
		}
		cout << " ";
	}

	

	return 0;

}
