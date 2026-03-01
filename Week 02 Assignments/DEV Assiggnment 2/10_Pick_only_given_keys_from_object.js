let obj={ name: "Rahul", age: 23, city: "Noida" }
let arr= ["name","city"];
let ans={};
for(let x in obj){
    for(let i=0;i<arr.length;i++){
        if(x==arr[i]){
         ans[x]=obj[x];
        }
    }
}
console.log(ans);

