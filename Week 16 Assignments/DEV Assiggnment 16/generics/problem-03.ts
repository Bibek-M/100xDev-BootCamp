// Problem Statement:
// Write a function mergeObjects that merges two objects and returns a new object with all properties.

function mergeObjects(obj1:object,obj2:object):object{
    return {...obj1,...obj2};
}
