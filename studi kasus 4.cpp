// Fahrizky Syihabudin I (2100018411)
// Galang Pakusadewa (2100018406)
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
long Fibonaci::fibonaci2(int n){
	if((n==0)||(n==1)){
		return (1);
	}
	else{
		return (fibonaci2(n-1)+fibonaci2(n-2));
	}
}
int main (){
    int N;
    long hasil;
    Fibonaci run;
    cout<<"Masukkan Bilangan : ";cin>>N;
    run.fibonaci1(N);
    cout<<endl;
    cout<<"Nilai Fibonaci :";
    for(int i=0;i<N;i++){
    	cout<<run.fibonaci2(i)<<" ";
	}
    return 0;
}

