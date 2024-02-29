$(function(){
    function verificatamanhoeaplicacor(){
        var tamanhotela = $(window).width();
        if(tamanhotela < 580){
            $('.header').css('background','blue');
        }else if(tamanhotela < 768){
            $('.header').css('background','red');
        }else if(tamanhotela < 1024){
            $('.header').css('background','green');
        }else{
            $('.header').css('background','white');
        }  
    }

    verificatamanhoeaplicacor();
    
    setInterval(function(){
        verificatamanhoeaplicacor();
    },1000);
     
    $(window).resize(function(){
        verificatamanhoeaplicacor();
    })
})