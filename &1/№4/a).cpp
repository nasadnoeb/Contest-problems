#include <iostream>
#include <string>

using namespace std;

class STR{
	public:
		void str(string s1){
			string s2(">>-->"), s3("<--<<");
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
				}
};

int main(int argc, char* argv[]){
	
	string s1; cin >> s1;
	STR s; s.str(s1);
	return 0;
}
