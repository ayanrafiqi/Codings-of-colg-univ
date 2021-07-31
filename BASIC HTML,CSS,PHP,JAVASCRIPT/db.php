<?php
$hostname = "localhost";
$username = "username";
$password = "password";

$con=mysql_connect($hostname, $username, $password);
  if(!$con){
	  die("Connection failed: " . $conn->mysql_error);
  }
   // echo "Connected successfully";
   $sql = "CREATE DATABASE Student";
  if(mysql_query($conn, $sql)) {
    echo "Database created successfully";
} else {
    echo "Error creating database: " . mysqli_error($conn);
}

mysqli_close($con);

?>
