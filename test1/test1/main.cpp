#include <iostream>
using namespace std;
#include <cmath>

bool isPrime(int num1){
	int isPrime = true;
	for(int i = 2 ; i <= (int)sqrt((double)num1); i++){
		if(num1 % i == 0){
			isPrime = false;
			break;
		}//if
	}
	return isPrime;
}//isPrime()

int countConjecture(int num){
	int count = 0;
	for(int i = 2; i <= num/2; i++){
		if(isPrime(i) && isPrime(num - i))
			count++;
	}//for
	return count;
}//countConjecture()
int main(){
	int n ;
	
	while( cin >> n){
		if( n == 0)
			break;
		cout << countConjecture(n)<< endl;
	}//while
	//cout << isPrime(4) <<endl;
}
