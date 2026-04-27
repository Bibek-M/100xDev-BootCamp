const arr = [1, 2, 3, 4, 5, 6];
 let ans={
    even:0,
    odd:0
}
for(let i=0;i<arr.length;i++){
    if(arr[i]%2==0){
        ans.even++;
    }
    else{
        ans.odd++;
    }
}
console.log(ans);

