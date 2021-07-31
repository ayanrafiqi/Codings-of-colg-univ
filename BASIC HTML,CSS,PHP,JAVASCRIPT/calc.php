<html>
<head>
<b><p><big>Calculator</b></big></p>
</head>
<body>
<form action="" method="post">
<p><label>Enter NUM1:</label><br/>
<input type="text" name="first"/></p>
<p><label>Enter NUM2:</label><br/>
<input type="text" name="second"/></p>
<input type="submit" name="sum" value="Sumation"/></br>
<input type="submit" name="sub"  value="Subtract"/>  </br>
<input type="submit" name="mul"  value="Multiply"/> </br>
<input type="submit" name="div"  value="Divide"/>  </br>
<p><label>RESULT:</label><br/></p>
</form>
<?php
  if(isset($_POST['sum'])){
	 $first=$_POST['first'];
	 $second=$_POST['second'];
      $sum= $first+$second;
	  echo "Sumation:<input type='text' value='$sum'/>";	
    }
    else if(isset($_POST['sub'])){
	   $first=$_POST['first'];
	   $second=$_POST['second'];
	   $sub= $first-$second;
	   echo "Subraction:<input type='text' value='$sub'/>";
    }
    else if(isset($_POST['mul'])){
	   $first=$_POST['first'];
	   $second=$_POST['second'];
	   $mul= $first*$second;
	   echo "Multiplication:<input type='text' value='$mul'/>";
    }
    else if(isset($_POST['div'])){
	   $first=$_POST['first'];
	   $second=$_POST['second'];
	   $div=$first/$second;
	   echo "Division:<input type='text' value='$div'/>";
	}
	 ?>
</body>
</html>