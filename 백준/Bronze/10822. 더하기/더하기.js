const fs = require('fs');

const input = fs.readFileSync('/dev/stdin').toString().trim();

const numbers = input.split(',').map(Number);
const result = numbers.reduce((acc, curr) => acc + curr, 0);

console.log(result);