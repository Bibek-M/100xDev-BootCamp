let obj = { name: "alice", city: "delhi" };
for(let x in obj){
    let st= obj[x];
    obj[x] = st[0].toUpperCase()+st.slice(1);
}
console.log(obj);