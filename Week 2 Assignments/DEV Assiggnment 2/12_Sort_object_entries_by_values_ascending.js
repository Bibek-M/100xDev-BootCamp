let obj = { a: 3, b: 1, c: 2 };
let sorted=Object.fromEntries(
    Object.entries(obj).sort((a,b)=>
        a[1]-b[1]
    )
);
console.log(sorted);