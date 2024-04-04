1-   Node js installation  https://nodejs.org/     install  LTS version
2-   open   cmd and type node -v  and npm -v
3-   type node on the cmd and start talking with the v8  engine
4-   create an empty folder for your first project, create a first index.js file
     now start running that file from the cmd by typing node  index 

5-   How do files communicate in nodejs?   Moduels (CommonJS modules) 

for export    use ->    module.exports.variablename=....
for import    use ->     require("filepath");
			 cases for importing    1- destructure 2- exports object 3- running the file

important note : using only module.exports for all exported data if you have a default export
// default parameters rules 
// 1- should be at the start of all exports
// 2- exported by  module.exports (not exports)
// 3- all other exports should appear after the defual export line 
    // and should use module.exports as well

6- use npm packages
	for project intailaization
	1-  npm init -y
	
	for installation
	2-  npm i p1 p2 p3
	
	for un install pacakges
	3- npm un p1 p2 p3
	
	for devDependencies
	4-npm i p1 --save-dev
	
	for global on device
	npm i  p1 -g
	
	When deploy  don't move node_modules with project folder
	5-npm i --production
	
	when moving the folder in development phase 
	6-npm i

	usting scripts to add some runiing scripts shortcut
	
	
	
	