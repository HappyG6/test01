#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	
	int n,a,mid,cnt,pc;
	vector<int> num;
		
	while(cin>>n){
		
		num.clear();	
		for(int i=0;i<n;i++){
			cin >> a;
			num.push_back(a);
		}
		sort(num.begin(),num.end());
		mid=num[n/2];
		cnt=count(num.begin(),num.end(),mid);
		pc=1;
		
		if(n%2==0 && mid!=num[n/2-1])
		{
			pc=mid-num[n/2-1]+1;
			mid=num[n/2-1];
			cnt+=count(num.begin(),num.end(),mid);
		}
		cout << mid << " " << cnt << " " << pc << endl;
	}
	
	return 0;
}
