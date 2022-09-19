#include <iostream>

using namespace std;

class MT{
	public:
		void mt(int i){
			int n1, n2; int arr[3];
			
			n1 = i / 2; n2 = n1 / 3;
			
			arr[0] = arr[2] = n2; arr[1] = n1 + n2;
			
			for(int i = 0; i < 3; ++i){
				
				cout << arr[i] << " ";
				
			}
			
		}
		
};

int main(int argc, char* argv[]){
	int n; cin >> n;
	MT m; m.mt(n);
	return 0;
}
