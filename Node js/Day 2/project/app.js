const express=require("express");

// 1- default function create server
const server=express();

//2- setting port number
const port=process.env.PORT||8080;
server.listen(port,()=>{
    console.log("I am listening..........",port);
});

/********************* Structure*************** */
// first MW
server.use((request,response,next)=>{
    console.log(request.url,request.method);

    next();

});


//second MW (fake authentication)
// server.use((request,response,next)=>{
   
//     if(!true)
//     {
//         next();
//     }
//     else
//     {
//         next(new Error("Not Authinticated"));
//     }

// })

/******************* EndPoints (Routes) */

server.get("/students",(request,response,next)=>{
    response.status(200).json({data:[{},{},{}]})
});
server.post("/students",(request,response,next)=>{
    response.status(200).json({data:"Added"})
});




// Not Found
server.use((request,response)=>{
    response.status(404).json({data:"Not Found"});
});


// Error MW
server.use((error,request,response,next)=>{
    response.status(500).json({data:`Error MW ${error}`})
});










