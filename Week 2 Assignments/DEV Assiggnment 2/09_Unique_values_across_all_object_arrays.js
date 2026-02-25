// let obj = { x: [1, 2, 3], y: [2, 3, 4], z: [4, 5] };
// let ans = new Set();
// for(let x in obj){
//     for(let y of obj[x]){
//         ans.add(y);
//     }
// }
// console.log(...ans);

//Modern Syntax
let obj = { x: [1, 2, 3], y: [2, 3, 4], z: [4, 5] };
let ans = [...new Set(Object.values(obj).flat())];
console.log(ans);