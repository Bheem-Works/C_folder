<?php 
<html>
<body>
<script>
    // write a program to calculate the factorial given numbers : 

    let num = prompt("Enter the number : ");
    let fact = 1; 
    for(let i =0; i <= num; i++){
        fact = i * fact;
    };
    document.write("factorial",fact);
</script>
</body>
</html>


// write a program to calculate the factorial given numbers:
    $num = $_GET['num'];
    $fact = 1;
    for($i = 0; i <= $num; i++){
        $fact = i * $fact;
    };

    echo "the factorial number is : $fact";
?>