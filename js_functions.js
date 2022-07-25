function primes(number){
	var counter = 0;
	for(var i = 0; i<10; i++){
		var f = 2;
		var n = number
		while(n > 1) {
			if(n % f === 0){
				counter++;
				n = Math.floor(n/f);
			}else {
				f++;
			}
		}
    }
	return counter;
}

function factorial(n) {
    if(n <= 1) {
		return n;
    }
	return n * factorial(n-1);
}
function collatz(n){
    let steps = 0;
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
