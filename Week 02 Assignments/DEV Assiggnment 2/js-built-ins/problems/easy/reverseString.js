/*
  Write a function `reve` which takes a string as input and returns the reversed version of the string.

  What is reversing a string?
  - Reversing a string means rearranging its characters in the opposite order.

  Example:
  - Input: "Sumana"
  - Output: "anamuS"

  - Input: "hello"
  - Output: "olleh"

  - Input: ""
  - Output: ""

  Once you've implemented the logic, test your code by running
  - `npm run test-reverseString`
*/

function reverseString(str) {
  //Normal Method
  // let arr= str.split('');
  // let i=0;
  // let j=arr.length-1;
  // while(i<j){
  //   [arr[i],arr[j]]=[arr[j],arr[i]];
  //   i++;
  //   j--;
  // }
  // return arr.join('');


  //Js version
  return str.split('').reverse().join('');
}

module.exports = reverseString;
