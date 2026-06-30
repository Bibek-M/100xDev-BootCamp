const obj = { a: "apple", b: "banana", c: "kiwi" };
const longest = Object.values(obj).reduce((a,b)=>a.length>b.length?a:b);
console.log(longest);