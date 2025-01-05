const text = "Hello Coders!";
let index = 0;

setInterval(() => {
  console.log(text.slice(0, index++));
  if (index > text.length) index = 0;
}, 300);
