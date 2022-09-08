/* w.a.p to print factorial of a number entered by a user. */

let n = prompt("Enter the Number: ")

let fac = 1;
for (let i = 2; i <= n; i++) {
    
    fac=fac*i;
    
}
console.log(`The factorial of ${n} is ${fac}`)