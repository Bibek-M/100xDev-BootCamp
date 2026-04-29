//Remove duplicate objects by id
let arr= [
  { id: 1, name: "A" },
  { id: 2, name: "B" },
  { id: 1, name: "A" }
];

let unique = arr.filter(
  (item, index, self) => index === self.findIndex((t) => t.id === item.id)
);

console.log(unique); 
