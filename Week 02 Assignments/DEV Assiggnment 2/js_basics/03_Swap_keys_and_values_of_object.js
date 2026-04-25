let obj = { a: "x", b: "y", c: "z" };
let swapped={};
for(let key in obj){
    swapped[obj[key]]=key;
}
console.log(swapped);