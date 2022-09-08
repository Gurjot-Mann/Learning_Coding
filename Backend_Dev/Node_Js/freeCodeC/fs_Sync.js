const {readFileSync, writeFileSync} = require('fs')

const first = readFileSync('./Backend_Dev/Node_Js/freeCodeC/content/first.txt', 'utf8')
const second = readFileSync('./Backend_Dev/Node_Js/freeCodeC/content/second.txt', 'utf8')

// console.log(first, second)  // This will print contents of both the text files.

writeFileSync(
    './Backend_Dev/Node_Js/freeCodeC/content/result-sync.txt', // This line will create the file if it dosen't exist already.
    `Here is the result : ${first}, ${second}`, // When the first argument creates the file this content will be added to the file.
    {flag: 'a'} //This line will append whatever is written in the second argument.
)
