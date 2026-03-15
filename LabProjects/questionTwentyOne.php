<?php 
<html>
  <body>
	  <script>
		  // Write a javascript to calculate the simple interest;
		  // Taking the input through using the prompt; 

		  let p = prompt("Enter the principal");
		  let r = prompt("Enter the rate");
		  let t = prompt("Enter the time");
		  let si = ( p * r * t ) / 100 ;
		  document.write("The simple interest is : ",si);
	  </script>
  </body>
</html>

// php code; 
$ p = $_GET['p'];
$ r = $_GET['r'];
$ t = $_GET['t'];
$ si = ($p * $r * $t) / 100;
echo"Simple interest : $si";
?>

