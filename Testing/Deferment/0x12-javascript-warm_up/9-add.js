#!/usr/bin/node
/* Script adds 2 arguments passed to the script */

function add (a, b) {
  return a + b;
}

const firstArg = parseInt(process.argv[2]);
const secondArg = parseInt(process.argv[3]);

console.log(add(firstArg, secondArg));
