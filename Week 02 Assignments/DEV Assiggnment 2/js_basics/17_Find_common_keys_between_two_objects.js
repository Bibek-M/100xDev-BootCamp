//Find common keys between two objects
let obj1 = { a: 1, b: 2, c: 3 };
let obj2 = { b: 4, c: 5, d: 6 };
// let ans=Object.keys(obj1).filter(key => obj2.hasOwnProperty(key));
let ans =[];
for(let key in obj1){
    if(key in obj2){
        ans.push(key);
    }
}
console.log(ans);