//Remove falsy values from object
let obj = { a: 0, b: null, c: "hello", d: undefined, e: 5 };

let ans={};
for(let key in obj){
    if(obj[key]) {
        ans[key]=obj[key];
    }
}
console.log(ans);