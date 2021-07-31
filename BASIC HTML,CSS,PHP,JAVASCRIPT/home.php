
<?php
session_start();
$login='<a href=\login.php> login</a>';
if(!isset($_SESSION["USER"])&&!isset($_SESSION["PASSWORD"]))
	echo "<b><big> Please Login first</big></b>".$login; 
	else{
		
			echo "hello u are HOME and your email and password is:". $_SESSION["USER"], $_SESSION["PASSWORD"];
			
			if(isset($_POST['LOGOUT'])){
			 session_destroy ();
			 //unset $_SESSION["USER"];
			 //unset $_SESSION["PASSWORD"];
			  header('location:login.php');
			}
?>
<html>
<head>
<big><b><p>HOME PAGE</big></p></b>
</head>
<body>
<form name="home" method="post">
<input type="submit" name="LOGOUT" value="logout">
</form>
</body>
</html>
	<?php }?>