// Find the largest and the max numbers; 

// By using the Math.max();
let vimNumbers = [1,2,3,4];
let vimMaxNumber = Math.max(...vimNumbers);
console.log('vimMaxNumbers',vimMaxNumber);

// By using the reduce methods; 
let vim_Numbers = [1,2,3,4];
let vim_reduce = vim_Numbers.reduce((a,b)=> a > b ? a : b);
console.log('The largest numbers',vim_reduce);

// By using the loops classical methods; 

let vim_num = [1,2,3,4,5];
let vim_max = vim_num[0];

for(let i = 0; i < vim_num.length; i++){
    if(vim_num[i] > vim_max ){
        vim_max = vim_num[i];
    }
};

console.log('vim_max',vim_max);
