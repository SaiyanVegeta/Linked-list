    <?php

$db_name = "heroku_18b860342c606ec";
$username = "bd74d541148a94";
$password  ="3af85450";
$server = "us-cdbr-iron-east-05.cleardb.net";
$conn = mysqli_connect($server, $username, $password, $db_name);




    $query=mysqli_query($conn,"SELECT * FROM dummy.a");
    if($query)
    {
        while($row=mysqli_fetch_array($query))
        {
            $flag[]=$row;
        }

        print(json_encode($flag));
    }
    mysqli_close($conn);
    ?>
