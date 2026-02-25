const obj = [
  { name: "A", city: "Delhi" },
  { name: "B", city: "Mumbai" },
  { name: "C", city: "Delhi" },
];
let result={};
obj.forEach(person =>{
    if(!result[person.city]){
        result[person.city]=[];
    }
    result[person.city].push(person.name);
})
console.log(result);
