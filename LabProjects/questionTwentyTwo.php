<?php
<html>
<body>
<script>
	// tempreature from teh ferhenite (f) to celsus (c).
	let f = prompt("Enter the ferhenite");
	let c = (f - 32 ) * 5  / 9;
	document.write("Celsus" +  c);
</script>
</body>
</html>

// to convert from teh ferhenite to the celsus

$f = $_GET['f'];
$c = ($f - 32) * 5/9;
echo "Celsus : $c";
?>
