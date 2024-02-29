$(function(){
    
    $('.pai .filho').each(function(){
        var obj = $(this).find('.filho-do-filho');
        if(obj.length > 0){
            if(obj.hasClass('animar')){
                // chegamos no final da lógica
                obj.animate({width:'100px'},3000,function(){
                    console.log('terminamos')
                })
            }
        }
    })
    
})