// Factorial of an number : 5! = 1*2*3*4*5 = 120

function Factorial(n){
    let total=1;
    while(n>1){
        total = total*n;
        n--;
    }
    return total;
}

console.log(Factorial(0));