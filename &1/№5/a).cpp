#include <iostream>
#include <cstdio>

using namespace std;

class RnG{
	public:
		void rng(int r, int g, int time){
			if(g > time){
			int result = ((r + time) * g) + time;
			cout << result << endl;
			} else {
			int result = ((r * time) * time) + (g + r);
			cout << result << endl;
			}
		}
};

int main(int argc, char* argv[]){
	int r, g, time;
	scanf("%d %d %d", &r, &g, &time);
	RnG rg; rg.rng(r, g, time);
	return 0;
}
