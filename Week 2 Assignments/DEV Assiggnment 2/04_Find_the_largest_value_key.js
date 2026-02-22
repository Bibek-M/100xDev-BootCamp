let obj = { a: 10, b: 50, c: 20 };
let maxValue=-Infinity;
let maxKey =null;
for(let key in obj){
    if(obj[key]>maxValue){
        maxValue=obj[key];
        maxKey=key;
    }
}
console.log(maxKey);