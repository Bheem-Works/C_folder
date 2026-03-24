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

// create table vim (
// reg_no int,
// name varchar(25),
// gender varchar(1)
// id int,
// );

?>

