#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"


bool BinarySearch(vector<int>v, int key){
	int start = 0, end = v.size()-1;
	int mid = (start + end) / 2;
	while(start <= end){
		if(v[mid] > key){
			end = mid - 1;
		}
		else if(v[mid] < key){
			start = mid + 1;
		}
		else{
			return true;
		}
		mid = (start + end) / 2;
	}
	return false;
	
}

void solve(){
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int key;
	cin>>key;
	bool ans = BinarySearch(v, key);
	if(ans){
		cout << "Present" << endl;
	}
	else{
		cout << "Not Present" << endl;
	}
}


int32_t main(){
	//int t;
	//cin>>t;
	//while(t--)
	solve();
}


