#include <iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
 
vector<int> Add_one_number(vector<int> vect,int n){
	vect[n-1]+=1;
	int carry=0;
	int sum=0;
	for(int i=n-1;i>=0;i--){
		sum=vect[i]+carry;
		carry=sum/10;
		vect[i]=sum%10;
	}
	if (carry>0){
		vect.insert(vect.begin(),carry);
	}
	return vect;
}
int main() {
	vector<int> vct{0,0,0,9,9,9,9,9};
	int n=vct.size();
	vector<int> new_vect=Add_one_number(vct,n);
	bool flag=false;
	for(int j=0;j<new_vect.size();j++){
		if (new_vect[j]!=0){
			flag=true;
		}
		if(flag==true){
		cout<<new_vect[j]<<" ";
		}
	}
 }
