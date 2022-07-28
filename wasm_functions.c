#include <emscripten.h> 
#include <math.h>

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
float newton_root(float number) {
	float root = 0;	
	for(int i = 0; i < 100000; i++) {
		float guess = number;
		float precision = 0.0001;
		int count = 0;
		while(1) {
			count += 1;
			root = 0.5 * (guess + (number/guess));
			if(fabsf(root-guess) < precision) {
				break;
			}
			guess = root;
		}
	}
	return root;
}

EMSCRIPTEN_KEEPALIVE
int collatz(long number){
	int steps;
	long n;
	for(int i = 0; i < 100000; i++) {
		n = number;
    	while(n != 1){
			steps++;
			if(n % 2 == 1){
			n = n*3 + 1;
			} else {
				n = n/2;
			}	
		}
	}
	return steps;
}
