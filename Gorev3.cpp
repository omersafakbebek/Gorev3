#include <iostream>
#include <vector>
using namespace std;
template <class T>
vector<vector<T>> create_matrix(T item,int x,int y){
	vector<vector<T>> matrix;
	for(int i=0;i<x;i++){
		vector<T> row;
		for(int k=0;k<y;k++){
			row.push_back(item);
		}
		matrix.push_back(row);		
	}
	return matrix;
}
int main(){
}
