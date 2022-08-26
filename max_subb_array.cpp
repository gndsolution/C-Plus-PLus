#include <algorithm>
#include <iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
 
int max_subb_array(vector<int> A,int n){
	int sum=0;
	int max_sum=-pow(10,9);
	for(int i=0;i<n;i++){
		sum+=A[i];
		if (sum>max_sum){
			max_sum=sum;
		}
		if (sum<0){
			sum=0;
		}
	}
	return max_sum;
}
int main() {
	vector<int> Array{-122,-33,-11,1,2,3,4,5,12,34,56,67,78,89,789};
	cout<<max_subb_array(Array,Array.size());
}
