<?php 
// preencher array sem numeros repetidos.
    $arr = [];

    for($i = 0; $i <5;$i++){
        $arr[$i] = rand(1,5);
        while(in_arrayCustom($i,$arr[$i], $arr)){
            $arr[$i] = rand(1,5);
        }
        
    }
     print_r($arr);
    function in_arrayCustom($indice,$valor,$arr){
        for($i = 0; $i < count($arr); $i++){
            if($arr[$i] == $valor && $i != $indice){
                return true;
            }
        }
    }
?>

