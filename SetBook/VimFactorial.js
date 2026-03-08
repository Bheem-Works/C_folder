// Factorial numbers by using the Js 

function vim_factorial(vim_num){

    let vim_result = 1; 
    for(let i = 2; i <= vim_num; i++){
        vim_result *= vim_num;
    };
    console.log(vim_result);
};

console.log(vim_factorial(5));

// Write a function to enter two numbers and find sum of two numbers in javascript. 

function vim_sumTwoNumbers(vim_one,vim_two){
    let one = vim_one;
    let two = vim_two;
    let vim_result = one + two;
    console.log(vim_result);
};

console.log(vim_sumTwoNumbers(5,4));
