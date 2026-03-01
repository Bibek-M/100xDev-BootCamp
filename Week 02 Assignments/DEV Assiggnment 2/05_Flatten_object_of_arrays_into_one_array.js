let obj = { fruits: ["apple", "banana"], veggies: ["carrot", "pea"] };
let ansArr=[];
for(let x in obj){
    // ... is used to spread elements equally
    ansArr.push(...obj[x]);
}
console.log(ansArr);