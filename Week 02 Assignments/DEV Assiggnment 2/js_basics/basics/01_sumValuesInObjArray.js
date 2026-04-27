let arr = {
    food:[10,20,30],
    travel:[5,15],
    bills:[40,60]
}
let cFood=0;
let cTravel=0;
let cBills=0;
for(let i=0;i<arr.food.length;i++){
    cFood+=arr.food[i];
}
for(let i=0;i<arr.travel.length;i++){
    cTravel+=arr.travel[i];
}
for(let i=0;i<arr.bills.length;i++){
    cBills+=arr.bills[i];
}
let ans={
    food: cFood,
    travel:cTravel,
    bills:cBills
};
console.log(ans)
