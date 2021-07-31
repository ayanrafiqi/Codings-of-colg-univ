
<html>
<head>
File uploading
</head>
<body>
<form name="file" method="post" enctype="multipart/form-data">
<input type="file" name="picture"/></br>
<input type="submit" name="upload" value="upload"/>
</form>
<?php
if(isset($_FILES['picture']))
    {
		$error=array();
		$file_name = $_FILES["picture"]["name"];
        $file_type = $_FILES["picture"]["type"];
        $file_size = $_FILES["picture"]["size"];
		$allowed_ext=array("jpg","jpeg","png");
		$file_ext=strtolower(end(explode('.',$_FILES['picture'])));
		if(inarray($file_ext,$allowed_ext==false){
			$error[]="extention not allowed"
		}
		 if($file_size>2097152){
			$error[]="file Should be less than 2mb"
		}
          		/* if (file_exists("upload/".$_FILES["picture"]["name"]))  {          
                echo $_FILES["picture"]["name"]." is already exists.";
				 }*/
            if(
            {
                move_uploaded_file($_FILES["picture"]["tmp_name"],  
                           "uploads/".$_FILES["picture"]["name"]);
                echo "Your file was uploaded successfully.";
            }  
       
    else
    {
        print_r "Error: ". $_FILES["picture"]["error"];
    }
			
		
	}
	?>
</body>
</html>