import http from "http";

const server = http.createServer();
server.on('request',(req,res)=>{
    res.write("welcome to server side programming");
    res.write("nodemon tracking from file");
    res.end();
});

server.listen(4000,()=>{
    console.log("server running");
});
