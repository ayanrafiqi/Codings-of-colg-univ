<?php
session_start();
 if(isset($_SESSION['views'])) 

    $_SESSION['views'] = $_SESSION['views']+1; 
else

    $_SESSION['views']=1; 

      

echo"views = ".$_SESSION['views']; 

  
?>
?>
<html>
<head>
<p><big><b>LOGIN PAGE</b></p></big>
</head>
<body>
<?php
if(isset($_POST['SUBMIT'])){
	$_SESSION["USER"]=$_POST['USER'];
	$_SESSION["PASSWORD"]=$_POST['PASSWORD'];
	if(($_SESSION["USER"]=='kashmiri')&&($_SESSION["PASSWORD"]=='12345')){
		//header('location:home.php');
	}
	else{
			 echo "<big><b></br>Incorrect username or password!please Retry</big></b>";
		}
		
	}
	?>
<form name="login" method="post">
<input type="text" name="USER" id="user" placeholder="Username"></br>
<input type="password" name="PASSWORD" id="Password" placeholder="********"></br>
<input type="submit" name="SUBMIT" value="Login">
</form>
</body>
</html>
