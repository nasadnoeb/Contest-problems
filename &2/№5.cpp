#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
	
	string str; cin >> str;
	int len = str.length();
	char c; int k = 0, m = 0;
	
	for(int i = 0; i <= len; ++i){
		c = str[i]; 
		if(c =='0'){
			k++;
			if (k > m) m = k;
		} else {
			k = 0;
		}
	}
	
	cout << m << endl;
	
	return 0;
}
