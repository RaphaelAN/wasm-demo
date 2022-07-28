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
function newton_root(number) {
	let root = 0;	
	for(let i = 0; i < 100000; i++) {
		let guess = number;
		let precision = 0.0001;
		let count = 0;
		while(1) {
			count += 1;
			root = 0.5 * (guess + (number/guess));
			if(abs(root-guess) < precision) {
				break;
			}
			guess = root;
		}
	}
	return root;
}

function collatz(number){
    let steps, n = 0;
	for(let i = 0; i < 100000; i++){
		n = number
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
