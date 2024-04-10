// Prime number or not 
function prime(n){
    if(n<2){
        return false;
    }
    else{
        for(let i=2; i<n; i++){
            if(n%i === 0){
                return false;
            }
        }
        return true;
    }
}

console.log(prime(5));
console.log(prime(0));
console.log(prime(8));