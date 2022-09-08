const http = require('http')

const server = http.createServer((req, res) => {
    if (req.url === '/'){
        res.write('Welcome to our home page.')
        res.end()
    }
    if (req.url === '/about') {
        res.end('Here is our short history')
    }
    res.end(`
    <h1>Oops!</h1>
    <p>We can't seem to find the page you are looking for</p>
    <a href="/">back home</a>
    `) // This res.end is for the default value if all the ifs are not matching the req.
})

server.listen(500)