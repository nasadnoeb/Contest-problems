#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
	
	int n; cin >> n;
	int arr[n - 1]; string nnn;
	for(int i = 0; i+1 < n; ++i){
		scanf("%d ", &arr[i]);
	}
	const int size = 437;
	for(int i = 0; i < n; ++i){
		if(size >= arr[i]){
			cout << "Crash " << i + 1 << endl;
			goto link1;
		} else {
			nnn = "Nocrash";
		}
	}
	
	cout << nnn << endl;
	link1:
	
	return 0;
}
