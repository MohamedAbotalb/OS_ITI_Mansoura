/***********************************************************
 * MongoDB  Crud Operations
 * ********************************************************/
 /** find and findOne  (condition,projection) **/
 
 //1-   simple condition 
//  db.instructors.find({firstName:"mazen",age:30});
 
 //2-  comparision operators  $lt $gt $lte $gte $in $neq
// db.instructors.find({
//     // age:{$gt:21}   
//     // age:{$in:[30,28,35]}
// }) ;
// db.instructors.find({firstName:{$in:["mazen","mona"]}}); // oring on the same property

//3-  logical operators  $or $and  firtsLevel Operator
// db.instructors.find({
//     $or:[
//             {firstName:"mazen"},
//             {age:{$gt:21}}
//         ]
// });

//3- Elements Operators  $exists $type

// db.instructors.find({salary:{$exists:true}});   // {$not:{$exists:""}} old versions
// db.instructors.find({salary:{$type:"number"}});


//4- embeded Objects like address
// db.instructors.find({address:{city:"cairo"}})// no records
// db.instructors.find({"address.city":"cairo"},{address:1});
// db.instructors.find({"address.city":"cairo"},{"address.city":1});

// db.instructors.find({
//     "address.city":"cairo",
//     "address.street":{$in:[10,12]}
// });


// 5- operators  arrays   $all   $size

// select js course
// db.instructors.find({courses:"js"},{courses:1})


//select js and expressjs
// db.instructors.find({
//     $and:[
//             {courses:"js"},
//             {courses:"expressjs"}
//         ]
// },{courses:1});

// db.instructors.find({
//     courses:{
//         $all:["js","expressjs"]
        
//     }});


// db.instructors.find({courses:{$size:3}},{courses:1})

/****************************************
 *   update documents --> updateOne , updateMany   (condition,updates,options)
 * ***********************************/
db.instructors.updateMany(
    //condition
    {
        // _id:10,courses:"js"    
    },
    //updates   operators $set  $push $pull $unset  $rename
    {
      //1- update existing property  lastName , age  
    //   $set:{lastName:"ali",age:23}
      //2- update non existing property
        // $set :{active:true} 
    // 3- rename property name
        // $rename:{"active":"activated"}
    // 4- remove property
        //  $unset:{"activated":""}
    // 5- inc and decr   update salary + 50 
        // $inc :{salary:-50}
    //6- address    Embeded 
    // 6.1  update existing proprty  street 20
    // $set:{ "address.street":20}
    //6.2  add new property
    // $set:{"address.floor":3}
    //6.3  rename
    // $rename :{"address.floor":"address.floorNumber"}
    // 6.4 remove 
    // $unset:{"address.floorNumber":""}

    //7- Arrays 
    //7.1   pushing new item
    // $push:{courses:"js"}
    // $addToSet: {courses:"js"}
    //7.2 
    // $pull:{courses:"js"}
    //7.3  update item with index
    // $set:{"courses.0":"SQLserver"}
    //7.4 update with unknown index   js-> javascript (add course name in the condition)
    // $set:{"courses.$":"javascript"}    
    
    
    
    
    
    
    }
    
    );

db.instructors.updateOne({
                _id:20
        }, {
            $set:{firstName:"hanaa", lastName:"ahmed",age:20}
        }, {
            upsert:true
        })  ;









 