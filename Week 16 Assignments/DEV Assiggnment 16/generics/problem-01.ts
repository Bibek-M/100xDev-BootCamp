// Problem Statement:
// Write a function identity that takes an argument of any type and returns the same type.

function identity<type>(arg:type):type{
    return arg;
}
console.log(identity("hello"));