#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

class M3{
	public:
		void loi(float l, float w, float h){
			
			float st1 = l * h; float st2 = w * h;
			
			float res = ((st1 + st2) / 16) * 2;
			
			float res2 = ceil(res); int result = res2;
			
			cout << result << endl;
		}
};

int main(int argc, char* argv[]){
	float l, w, h;
	
	scanf("%f %f %f", &l, &w, &h);
	
	M3 prt; prt.loi(l, w, h);	
	
	return 0;
}
