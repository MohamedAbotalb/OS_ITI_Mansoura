const http=require("http");

const server=http.createServer((request,response)=>{
    // manage all server code
    
    response.writeHead(200,"Content-Type","application/json");

    if(request.url=="/students"&& request.method=="GET")
    response.write(JSON.stringify({data:[{},{},{}]}));
    else if(request.url=="/students"&& request.method=="POST")
    response.write(JSON.stringify({data:"added"}));

    
    response.end();
});


server.listen(8080,()=>{
    console.log("I am listening........");
})