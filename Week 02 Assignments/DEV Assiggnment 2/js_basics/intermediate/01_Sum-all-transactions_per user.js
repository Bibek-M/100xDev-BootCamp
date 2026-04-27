//Sum all transactions per user
let arr = [
  { user: "A", amount: 100 },
  { user: "B", amount: 200 },
  { user: "A", amount: 50 },
];

let ans = {
    A:0,
    B:0
}
for(let x in arr){
    sum+=arr[x].amount;
    if(arr[x].user=='A'){
        ans.A+=arr[x].amount;
    }
    else{
        ans.B += arr[x].amount;
    }
}
console.log(ans);
