let students = { A: [80, 90], B: [70, 75, 85] };

let maxAvg = -Infinity;
let topStudent = null;

for (let name in students) {
  let marks = students[name];

  let sum = 0;
  for (let mark of marks) {
    sum += mark;
  }

  let avg = sum / marks.length;

  if (avg > maxAvg) {
    maxAvg = avg;
    topStudent = name;
  }
}

console.log(topStudent);