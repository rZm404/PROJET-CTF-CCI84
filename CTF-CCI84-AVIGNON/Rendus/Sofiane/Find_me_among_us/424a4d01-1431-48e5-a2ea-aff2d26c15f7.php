<?php
  ini_set('display_errors', 0); 
  session_start();
  //echo $_SESSION['cci'];

  $user_agent=$_SERVER['HTTP_USER_AGENT'];
  if (strpos($user_agent, 'sqlmap') !== false) {
    die();
  }
  if(array_key_exists('button1', $_POST)) {
    if($_POST['username']){
      button1();
    }
  }
  function button1() {
    $cci = filter_input(INPUT_POST, 'cci', FILTER_SANITIZE_STRING);
    if (!$cci || $cci !== $_SESSION['cci']) {
      // return 405 http status code
      header($_SERVER['SERVER_PROTOCOL'] . ' 404 Method Not Found');
      exit;
    }else {
      
      $cci = filter_input(INPUT_POST, 'cci', FILTER_SANITIZE_STRING);
      //echo $cci;
      #$result = mysqli_query($conn, "SELECT pseudo,pass FROM Players INNER JOIN Players_access ON Players.player_id = Players_access.player_id WHERE pseudo='LELE' and pass='' or True#--';");
      $userid = preg_replace('~(\/\*\*\/)|( )~','',$_POST['username']);
      //var_dump($userid);
      $userpass=$_POST['password'];
      $host = 'db'; //Nom donné dans le docker-compose.yml
      $user = 'Alber';
      $password = 'N2wB3z8im9eLjvdCMOjT0xI';
      $db = 'AM0NG';

      $conn = new mysqli($host,$user,$password,$db);
      if(!$conn) {echo "Erreur de connexion à MSSQL<br />";}
      else{
        #$result = mysqli_query($conn, "SELECT pseudo,pass FROM Players INNER JOIN Players_access ON Players.player_id = Players_access.player_id WHERE pseudo='LELE' and pass='' or True#--';");
        $query= sprintf("SELECT pseudo FROM Players WHERE pseudo='%s';",$userid);
        $result = mysqli_query($conn,$query);
        if (mysqli_num_rows($result) > 0) {
          while($row = mysqli_fetch_array($result, MYSQLI_NUM)) {
            echo($row[0]."<br>");
          }
        }
        else {
          echo "0 results";
        }
        if($userid=='ADMIN' AND $userpass=='yKe2E6U5m7Bmn9'){
          echo "FLAG : NHM2I{9bd62c7d-9708-42dc-9e1f-456ac1b584e3}";
        }
        mysqli_close($conn);
    }
      } 
  }
  $_SESSION['cci'] = md5(uniqid(mt_rand(), true));
?>
  
<!DOCTYPE html>

  <head>
    <link rel="icon" href="/pictures/favicon.png" />
    <link rel="stylesheet" href="config/styles2.css">
    <!--<link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">-->
    <meta charset="utf-8">
    <title>AMONG</title>
    <script src="https://code.jquery.com/jquery-3.5.0.js"></script>
    <script src="/config/config2.js"></script>
  <head>
  <body>
    <header>
      <h1 onclick="myScript()">Game</h1>
    </header>
    <img  class="background" onclick="myClick(event)" onmousemove="MouveMouse(event)"room id="room" src="/pictures/background.jpg" alt="">   
    <!--<button class="open-button"><strong>Ouvrir la forme</strong></button>
    <div class="login-popup">
      <div class="form-popup" id="popupForm">
        <form action="/action_page.php" class="form-container">
          <h2>Veuillez vous connecter</h2>
          <label for="email">
            <strong>E-mail</strong>
          </label>pseudo
          <input type="text" id="email" placeholder="Votre Email" name="email" required />
          <label for="psw">
            <strong>Mot de passe</strong>
          </label>
          <input type="password" id="psw" placeholder="Votre Mot de passe" name="psw" required />
          <button type="submit" class="btn">Connecter</button>
          <button type="button" class="btn cancel" onclick="closeForm()">Fermer</button>
        </form>
      </div>
    </div>
    -->
    <div class="login-popup">
      <div class="form-popup" id="popupForm_Secu">
          <img src="pictures/among-us-upload.gif" alt="" width="50%">
          <br>
          <button class="button_secu" onclick="closeForm()">Exit</button>
      </div>
      <div class="form-popup" id="popupForm_Admin">
      <link rel="stylesheet" href="config/css3.css">
      <div class="login-page">
        <div class="form">
          <form class="login-form" method="POST">
            <input type="user"  name="username" placeholder="Username" required/>
            <input type="password" name="password" placeholder="Password" required/>
            <input type="hidden" name="cci" value="<?= $_SESSION['cci'];?>">
            <input type="submit" name="button1" class="button" value="Connexion"/>
          </form>
          <button onclick="closeForm()">Exit</button>
        </div>
      </div>
      </div>
    </div>


  </body>
</html>