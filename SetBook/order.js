
let num = [2,5,3,1];
let i,j,temp;

for(i = 0; i < num.length; i ++){
    for(j = i + 1; j < num.length; j++){
        if(num[i] > num[j]){
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
        }
    }
};

for(i = 0; i < num.length; i ++){
    console.log('numbers by ascending to the descending orders : ',num[i]);
};