#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int factors(int number) {
	int counter = 0;
    for(int i = 0; i < 10; i++){
        int f = 2;
		int n = number;
        while(n > 1) {
	    	if(n % f == 0) {
	        	counter++;
	        	n = n/f;
	    	} else {
	        	f++;
	    	}
        }
     }
     return counter;
}

EMSCRIPTEN_KEEPALIVE
int factorial(int n) {
    if(n <= 1) {
		return n;
    }
	return n * factorial(n-1);
}

EMSCRIPTEN_KEEPALIVE
int collatz(int n){
    int steps = 0;
    while(n != 1){
		steps++;
		if(n % 2 == 1){
			n = n*3 + 1;
		} else {
			n = n/2;
		}
	}
	return steps;
}
