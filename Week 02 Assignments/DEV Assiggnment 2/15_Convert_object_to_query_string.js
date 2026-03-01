let obj = { name: "Alice", age: 25 };
let query =Object.entries(obj)
.map(([key,value])=>`${key}=${value}`)
.join("&");
console.log(query);
