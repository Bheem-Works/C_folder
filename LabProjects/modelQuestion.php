<?php 

$con = mysql_connect("username","root","miso_love_eggs","hello");
//                     username  id      password      data_base_name   

if(!$con){
    echo ("Fail");
};

$sql = "insert into student_info(reg_no,class,gender,address)values(1,12,'m','computer')";

if(mysqli_query($con,$sql)){
    echo"date successfully run";
}else {
    echo "fail";
};
mysql_close($con);

<script>
// The javascript program to find the largest among the three numbers; 
let a = 50,b=30,c=20;
if(a>b && b > c) {
    console.log("A is bigger then the b and the c");
} else if(b > a && b > c) {
    console.log("B is bigger then the a and the c");
} else {
    console.log("C is bigger than all of them ")
}
</script>
// create table vim (
// reg_no int,
// name varchar(25),
// gender varchar(1)
// id int,
// );

?>

