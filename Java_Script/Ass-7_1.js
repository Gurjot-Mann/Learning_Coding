/* w.a.p to check whether a year is leap year or a regular year. */

let year = prompt("Enter a year: ")

   if ((year%100 != 0 || year%400 == 0)&&(year % 4 == 0)) {
      console.log(`${year} is a leap year`);
   }

   else {
      console.log(`${year} is not a leap year.`)
   }