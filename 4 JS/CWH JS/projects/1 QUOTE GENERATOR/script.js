// Variables

let btn = document.querySelector('#new-quote');
let quote = document.querySelector('.quote');
let person = document.querySelector('.person');

const quotes = [
    {
        quote: '"Any fool can write code that a computer can understand. Good programmers write code that humans can understand.',
        person:'Martin Fowler' ,
    },
    {
        quote: '"Confusion is part of programming."',
        person:'Felienne Hermans' ,
    },
    {
        quote: '"No matter which field of work you want to go in, it is of great importance to learn at least one programming language."',
        person:'Ram Ray' ,
    },
    
];
btn.addEventListener('click', function(){
    let random = Math.floor(Math.random()* quotes.length);

    quote.innerText= quotes[random].quote;
    person.innerText= quotes[random].person;
})
