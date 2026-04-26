//Convert array of objects to lookup by id
let arr = [
  { id: 1, name: "A" },
  { id: 2, name: "B" },
];
let obj={};
arr.forEach(item =>{
    obj[item.id]=item;
})
console.log(obj);