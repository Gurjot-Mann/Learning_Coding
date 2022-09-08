const path = require('path');

console.log(path.sep) // this will return how your os seperates the paths

const filePath = path.join('/content', 'subFolder', 'test.txt')
console.log(filePath)

const base = path.basename(filePath)
console.log(base)

const absolute = path.resolve(__dirname, 'content', 'subfolder', 'test.txt')

console.log(absolute)

