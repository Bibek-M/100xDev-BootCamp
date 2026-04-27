//Transform API response to object (id → name)

let arr = [
  { id: 1, name: "Alice" },
  { id: 2, name: "Bob" },
];
let ans={};
arr.forEach(item =>{
    ans[item.id]=item.name;
})
console.log(ans);