// let arr = ["apple", "banana", "apple", "orange", "banana", "apple"];
// let idx0c=0;
// for(let i=0;i<arr.length;i++){
//     if(arr[i]==)
// }
const fruits = ["apple", "banana", "apple", "orange", "banana", "apple"];

const count = fruits.reduce((acc, word) => {
  acc[word] = (acc[word] || 0) + 1;
  return acc;
}, {});

console.log(count); 
// Output: { apple: 3, banana: 2, orange: 1 }
