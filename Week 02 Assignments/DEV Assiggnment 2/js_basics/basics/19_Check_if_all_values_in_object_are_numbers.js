//Check if all values in object are numbers
let obj = { a: 1, b: "hola", c: 3 };
let ans= true;
for(let key in obj){
    if(typeof obj[key]!=="number"){
        ans=false;
        break;
    }
}
console.log(ans);