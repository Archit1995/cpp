//Declaration and initialization about vectors
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;//vector declaration.
	cout<<"Enter number "<<endl;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		v.push_back(i);
	cout<<"The size of the vector is "<<v.size()<<endl;
	for(int j=0;j<n;j++)
		cout<<v.at(j)<<" ";

return 0;
}

