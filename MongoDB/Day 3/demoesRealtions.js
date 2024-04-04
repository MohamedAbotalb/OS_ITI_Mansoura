/************************************************
 *  Sql DBS
 * 1-  one  to one -->   same table
 * 2- onr -to -many -->  FK and PK
 * 3-  many - many --> 3 tables 
 * 
 * ************************************
 * MongoDB
 * 
 * 1-  Embeded Realtion
 *  A- One - One   example - Instructor and Address
 * instructors(_id,,,,,,,,,,,address:{city,street ,building})
 * B - One to Many   exmaple : Instructor and Addresses
 * instructors(_id,,,,,,,,,,,address:[{city,street ,building}])
 * 
 * 2- reference Realtion
 * 
 * A- One to Many -->  student and Department
 *   
 *   Choice 1 :  Refernce   (not the best choice)
 *   student(_id,,,,,,,,,,department(_idDepartment))
 *   deparrment(_id,name,,,,,,,)
 * 
 *  Choice 2: Embeded
 *   student(_id,,,,,,,,,,department:{_id,name,,,,,,,})
 *  
 *  Choice 3:  The best Choice  (Refernce and Embeded at the same time)
 * 
 *  student(_id,,,,,,,,,,department:{_idDepartment,name})
 *  deparrment(_id,name,,,,,,,)
 * 
 * B-  Many to Many --> students and coureses
 * 
 * 
 *  Choice 1: Refrence
 *  students:(_id,,,,,,,,,,,,,,,,,,,,,)
 *  courseses:(_id,name , hrLect,hrLab,,,)
 *  studnets_courses:(_id,_idStudent,_idDepartment,grade)
 * 
 *  Choice  2 : refnce and Embeded
 *  students:(_id,,,,,,,,,,,,,,,,,,,,,courses:[{_idCourse,name,grade},{},{}])
 *  courseses:(_id,name , hrLect,hrLab,,,)
 * 
 * 
 * // task : find all students with their courses
 * 
 * db.students.find({},{firstName:1,lastName:1, courses.name:1})
 * 
 * task 2 : find students who have coures  javascript
 * 
 * db.students.find({"courses.name":"javascript"})
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 *
 * 
 * */
 