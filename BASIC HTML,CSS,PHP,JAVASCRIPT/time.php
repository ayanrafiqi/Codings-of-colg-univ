<html>
<head>
</head>

<body>
<?php

$date=date('d/m/Y');
echo "<big><b>Todays DATE is</big></b>: ".$date.'<br>';?>


<form action="" method="post">

<p><b><big>Now Select Time of the Day </p></b></big>

<select name="time">

<?php
 $am="AM";$pm="PM";
  echo"<option value=24>12.$am</option>";
	for($i=1;$i<12;$i++){
		echo"<option value=$i>$i.$am</option>";
	}
	echo"<option value=12>12.$pm</option>";
	for($i=13,$j=1;$i<24;$i++,$j++){
		echo"<option value=$i>$j.$pm</option>";
	}
?>
<!--<option value="0">00hr</option>
<option value="1">01hr</option>
<option value="2">02hr</option>
<option value="3">03hr</option>
<option value="4">04hr</option>
<option value="5">05hr</option>
<option value="6">06hr</option>
<option value="7">07hr</option>
<option value="8">08hr</option>
<option value="9">09hr</option>
<option value="10">10hr</option>
<option value="11">11hr</option>
<option value="12">12hr</option>
<option value="13">13hr</option>
<option value="14">14hr</option>
<option value="15">15hr</option>
<option value="16">16hr</option>
<option value="17">17hr</option>
<option value="18">18hr</option>
<option value="19">19hr</option>
<option value="20">20hr</option>
<option value="21">21hr</option>
<option value="22">22hr</option>
<option value="23">23hr</option>
<br>-->
</select>
<input type="SUBMIT" name="SUBMIT" value="Greet"/>
</form>
<?php
 if(isset($_POST['SUBMIT'])){
	  $selected_hr=$_POST['time']; 
	// echo "<br>You have selected :".$selected_hr;
	   if(($selected_hr>=16)&&(selected_hr<=19)){
	        echo "<br><big><b>Good Evening Ayan!</big></b>";}
         else if(($selected_hr>=12)&&(selected_hr<=15)){
	             echo "<br><big><b>Good Afternoon Ayan!</big></b>";}
	    else if(($selected_hr>=6)&&(selected_hr<=11)){
	             echo"<br><big><b>Good Morning Ayan,Have a good day:)</big></b>";}
			 else if(($selected_hr>=20)||(selected_hr<=5)){
	                echo "<br><big><b>Good Night Ayan,Sweetdreams.</big></b>";} 
	  
	  
	 }
 ?>
</body>
</html>