#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char* argv[]){
	
	int people, trees;
	scanf("%d %d\n", &people, &trees);
	
	int arr[(trees * 2) + 2];
	for(int i = 0; i < ((trees * 2) + 1); ++ i){
		scanf("%d ", &arr[i]);
	}
	
	for(int i = 0; i <= trees - 1; i += 2){
		if(arr[0] == arr[i+2] && arr[1] == arr[i+3]){
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	
	return 0;
}

