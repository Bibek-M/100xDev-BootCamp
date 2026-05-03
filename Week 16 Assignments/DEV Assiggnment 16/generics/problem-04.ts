// Problem Statement:
// Write a generic function sum that accepts an array of numbers and returns the sum of all the numbers.
    function arraysum(arr:number[]){
        let sum=0;
        // for(let i=0;i<arr.length;i++){
        //     sum+=arr[i];
        // }
        for(const x of arr){
            sum+=x;
        }
        return sum;
    }
let ans=arraysum([1,2,3,4]);
console.log(ans);