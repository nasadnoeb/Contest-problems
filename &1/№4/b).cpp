#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
	
	string s1, s2(">>-->"), s3("<--<<");
	cin >> s1;
    size_t cnt = 0;
 
    for(string::size_type i = 0; i < s1.length(); ++i)
        if(s1[i] == s2[0])
            {
                ++cnt;
                i += s2.length() - 1;
            }
            
    size_t cnt2 = 0;
 
    for(string::size_type i = 0; i < s1.length(); ++i)
        if(s1[i] == s3[0])
            {
                ++cnt;
                i += s3.length() - 1;
            }
 
    int result = cnt + cnt2;
    
    cout << result << endl;
    
	return 0;
}
