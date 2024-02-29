<?php 
$array = ['maiquel','natalia','milene','maiquel','heloiza','maiquel'];

$arrayrepetido = [];

for($i = 0; $i < count($array);$i++){
    $valoratual = $array[$i];
    echo $valoratual;
    echo "<br>";
    if(!isset($arrayrepetido[$valoratual])){
        $arrayrepetido[$valoratual] = 0;
    }else{
        $arrayrepetido[$valoratual]++;
    } 
}

foreach ($arrayrepetido as $key => $value) {
    echo $key;
    echo $value;
    echo "<hr>";

}
?>

