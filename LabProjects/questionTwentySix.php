<?php

<html>
<body>
<script>
    // Write a javascript program to find the largest numbers among the three. 
    let a = prompt("Enter the first number : ");
    let b = prompt("Enter the second number : ");
    let c = prompt("Enter the third number : ");
    if(a > b && a > c) document.write(a);
    else if(b > c) document.write(b);
    else document.write(c);

</script>
</body>
</html>


    $a = $_GET['a'];
    $b = $_GET['b'];
    $c = $_GET['c'];
    if($a > $b && $a > $c) echo $a;
    else if ($b > $c) echo $b;
    else echo $c;

?>