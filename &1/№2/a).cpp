#include <iostream>
#include <cstdio>

using namespace std;

class PETYA{
	public:
		void petya(int n){
			int arr[n - 1];
			for(int i = 0; i < n; ++i){
				scanf("%d ", &arr[i]);
			}
	
			int t; int n1 = 0; cin >> t;
			int result = 0;
	
			for(int i = 0; i < n; i++){
				if(arr[i] == t){
					n1++;
					result = i;
				} else if(arr[i] > t && t > arr[i + 1]){
					result = i;
				}
			}
	
			cout << result + 2 << endl;
			}
};

int main(int argc, char* argv[]){
	int n; cin >> n;
	PETYA pt; pt.petya(n);
	return 0;
}
