/* w.a.p to check whether a number is prime or composite. */

 let n = prompt("Enter the No. to be checked: ")
let yes=true;

    if (n <= 1)
    {
        console.log(`${n} is consonant.`)
        yes = false;

    }


    else if (n <= 3)
    {
        console.log(`${n} is prime.`)
        yes = false;

    }

    else if (n % 2 == 0 || n % 3 == 0)
    {
        console.log(`${n} is consonant.`)
        yes = false;

    }
 

    for (let i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
        {
        console.log(`${n} is consonant.`)
            yes=false;
        }
        
        
        
           if(yes==true) console.log(`${n} is prime.`)
        
 
