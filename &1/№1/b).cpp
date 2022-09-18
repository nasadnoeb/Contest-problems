#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]){
	
	float l, w, h;
	
	scanf("%f %f %f", &l, &w, &h);
	
	float st1 = l * h; float st2 = w * h;
			
	float res = ((st1 + st2) / 16) * 2;
			
	float res2 = ceil(res); int result = res2;
			
	cout << result << endl;
	
	return 0;
}
