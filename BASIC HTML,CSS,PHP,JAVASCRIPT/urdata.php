<?php
session_start();
?>

<?php
if(isset($_POST['submit']))
{
$fname=$_POST['firstname'];
$Lname=$_POST['lastname'];
$addr=$_POST['address'];
$tel=$_POST['tel'];
$email=$_POST['email'];
$pass=$_POST['password'];
$repass=$_POST['retypepassword'];
         if(!preg_match('/[a-zA-Z]+/',$fname)){
		 echo "<b>fname only letters are allowed</b><br/>";
	    }
		  if(!preg_match('/[a-zA-Z]+/',$Lname)){
		 echo "<b> lname only letters  are allowed</b><br/>";
	    }
	
	
         if(!preg_match('/[a-zA-Z][\w]+/',$addr)){
		 echo "<b>addr only letters and white space allowed</b><br/>";
          }
		 if(!preg_match("/^\d+\.?\d*$/",$tel)&&(strlen($tel)!=10)){
          		"<b>phone number is invalid,</b><br/>"; 
		 }
		 if(empty($email)){
			echo "<b>Email is required<b><br>";
				}
		else if(!preg_match('/^([a-zA-Z]+[a-zA-Z0-9]+)@[a-z]+[a-z]+?[.]+[{X,Y}a-z][a-z]{0,2}+$/',$email)){
		    echo("<b>email you entered is not a valid</b><br/>");
			}				
		if(!preg_match('/^[a-zA-Z][0-9A-Za-z!@#$%]$/',$pass)){
			echo "<b>password must be more than 8 character</b>"; 
            }
			if(!preg_match('/^[a-zA-Z][0-9A-Za-z!@#$%]$/',$repass)){
			 echo ",<br><b> retypepassword must be more than 8 character</b>";
            }
	        $_SESSION["pass"]=$_POST['password'];
			$_SESSION["rpass"]=$_POST['retypepassword'];
		    if(($_SESSION["pass"])!=($_SESSION["rpass"])){
				echo ("<br/><big><b>Password , Retype-password doesnt match!</b></big>");
			   }
	        //else{
		     //header('location:home2.php');
			//}
          }
	?>
<html>
<head>
</head>
<body>
<form name="info" method="post">
<fieldset><big><b>Signup Here</big></b><br/>
<label for "firstname">First name</label>
<input type="text" id="firstname" name="firstname"></br>
<label for "lastname">Last name</label>
<input type="text" id="lastname" name="lastname"><br/>
<label for "gender">Gender:</label>
<input type="radio" id="gender" name="genderm"/>Male
<input type="radio" id="gender" name="genderf"/>Female<br/>
<label for "address">Address</label>
<input type="text" id="address" name="address"/></br>
Phone number <input type="text" id="num" name="tel"/></br>
<label for "email">Email</label>
<input type="text" id="email" name="email"/><br/>
<label for "password">Password</label>
<input type="password" id="password" name="password"/></br>
<label for "retypepassword"> Retype Password</label>
<input type="password" id="retypepassword" name="retypepassword" placeholder="retypepassword must match password"/></br>
<input type="submit" name="submit" value="Signup"/>
<input type="reset"/>
</form>
</fieldset>
</body>
</html>
