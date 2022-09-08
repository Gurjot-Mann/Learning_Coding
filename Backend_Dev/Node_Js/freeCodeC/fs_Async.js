const { readFile, writeFile} = require('fs')

readFile('./Backend_Dev/Node_Js/freeCodeC/content/first.txt', 'utf8', (err, result) => {
    if(err){
        console.log(err)
        return;
    }
    const first = result;
    readFile('./Backend_Dev/Node_Js/freeCodeC/content/second.txt', 'utf8', (err, result) => {
        if(err){
            console.log(err)
            return;
        }
        const second = result;
        writeFile(
            './Backend_Dev/Node_Js/freeCodeC/content/result-async.txt', 
            `Here is the result : ${first}, ${second}`,     // We can also use the flag: 'a' like done in the fs_Sync file to append int he result-async.txt file.
            (err, result) => {
                if(err){
                    console.log(err)
                    return;
                }
                console.log(result)
            }
        )
    })
})