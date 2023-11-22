#include<iostream>
#include<vector>
using namespace std;
void sort(int *p,int n){
	for(int i = 1 ; i < n ; i++){
		int j = i - 1;
		int k = p[i];
		while(j >= 0 && p[j] > k ){
			p[j+1] = p[j]; // at this point both p[j] and p[j+1] will have the same value
			j--;
		}
		p[j+1] = k ; // this statement assigns k to the correct index
	}
}
void sort_vector(vector<int>& p){
	int n = p.size();
	for(int i = 1 ; i < n ; i++){
		int j = i - 1;
		int k = p[i];
		while(j >= 0 && p[j] > k ){
			p[j+1] = p[j]; // at this point both p[j] and p[j+1] will have the same value
			j--;
		}
		p[j+1] = k ; // this statement assigns k to the correct index
	}
}
int main(){
int a[5] = { 5,4,3,2,1};
sort(a,5);
for(auto &x : a){
	std::cout<<x<<",";
}
std::cout<<"\n";
vector<int> v = {5,1,2,3,4};
sort_vector(v);
for(auto &x : v){
	std::cout<<x<<",";
}
std::cout<<"\n";
return 1;
}
