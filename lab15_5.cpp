#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c, int *d){
    int temp[] = {*a, *b, *c, *d};
    
    for(int i = 0; i < 4; i++){
        int random_index = rand() % 4;
        int t = temp[i];
        temp[i] = temp[random_index];
        temp[random_index] = t;
    }
    
    *a = temp[0];
    *b = temp[1];
    *c = temp[2];
    *d = temp[3];
}
//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
