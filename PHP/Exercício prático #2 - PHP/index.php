<?php 
// 1 verificar se tem mais de 5 letras!
// 2 se é numero.
// 3 se tem @.
    // isset = verificar se existe = variavel ter valor ou ser criada
    if(isset($_POST['acao'])){
        $nome = $_POST['nome'];
        $numero = $_POST['numero'];
        $email = $_POST['email'];
        if(strlen($nome) >= 5){
            echo "nosso nome tem mais ou igual a 5 letras!";
            echo "<br>";

        }
        
        if (is_numeric($numero)){
            echo "é numero!";
            echo "<br>";
        }else{
            echo "nao é numero";
            echo "<br>";
        }

        if(strstr($email,'@')){
            echo "tem @";
            echo "<br>";
        }else{
            echo "nao é email";
            echo "<br>";
        }
    }
?>

<form method="post">
    <input type="text" name="nome">
    <input type="text" name="numero">
    <input type="text" name="email">
    <input type="submit" name="acao">
</form>