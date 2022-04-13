// Fahrizky Syihabudin I (2100018411)
#include <iostream>
using namespace std;
class Fibonaci{
	public:
	long fibonaci1(int);
	long fibonaci2(int);
	
	private:
	int n;
};
long Fibonaci::fibonaci1 (int n) {
    long fib, fib1=0, fib2=1;
    cout<<"Nilai Fibonaci :";
    for(int i=0;i<n;i++){
    	fib=fib1+fib2;
    	fib2=fib1;
    	fib1=fib;
    	cout<<fib<<" ";
	}
}
