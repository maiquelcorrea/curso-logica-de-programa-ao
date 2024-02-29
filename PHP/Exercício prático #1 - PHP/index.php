<?php 
// codigo PHP
    $helloword = ['H','-','e','-','l','-','l','-','o'];
    $string = '';
    for($i = 0; $i < count($helloword);$i++){
        if ($helloword[$i] == '-') {
            continue;
        }
        $string.=$helloword[$i];
    }
    echo $string;   
    
?>