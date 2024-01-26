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
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c,int *d){
    int A[4] = {*a,*b,*c,*d};
    int tmp;
    for(int i = 0; i< rand()%4; i++){
        tmp = A[i];
        A[i] = A[i+1];
        A[i+1] = tmp;
    }
    *a = A[0];
    *b = A[1];
    *c = A[2];
    *d = A[3];

}