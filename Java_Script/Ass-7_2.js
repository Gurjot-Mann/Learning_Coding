/* w.a.p to input two numbers and print all the even numbers between them. */

let n = prompt("Enter a Number: ")

console.log(`The even numbers upto ${n} are: \n`)
for (let i = 0; i <= n; i++) {

    if (i%2 ==  0) {
        console.log(`${i}`)
    }
    
}