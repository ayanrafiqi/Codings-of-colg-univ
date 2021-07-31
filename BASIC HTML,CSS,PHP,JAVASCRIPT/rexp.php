
<!--	   /*
	  $str="footbar:2008";
		   preg_match('/(?<name>\w+):(?<digit>\d+)/',$str,$matches);
		   print_r($matches);
	   }
	   ?> */-->
	   <?php
	   
$str="AYAN NIYAZ RAFIQI";
preg_match('/AYAN NIYAZ RAFIQI/',$str,$matches);
 if(isset($_POST['submit'])){
	    if($_POST['user']==$str){
		   print_r($matches);
	   }
	   else
	   {
		   echo "wrong match";
	   }
  }
	   ?> 
		   
<html>
<head>
</head>
<body>
<form name="regularexp" method="post">
<label for="username">Enter your name</label>
<input type="text" id="username" name='user'>
<input type="submit" name='submit'>
</form>
</body> 
</html>