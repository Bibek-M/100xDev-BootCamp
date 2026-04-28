//Transform array of orders into revenue per category

let arr = [
  { id: 1, category: "electronics", price: 100 },
  { id: 2, category: "clothes", price: 50 },
  { id: 3, category: "electronics", price: 200 },
];

let ans={};
arr.forEach(item =>{
    ans[item.category]=(ans[item.category] || 0) + item.price;
})
console.log(ans);