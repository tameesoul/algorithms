<?php 
//calculate area of trapezium
function trapezium_area($a,$b,$h)
{
    $A = (($a+$b)/2)*$h;
    echo $A; 
}

trapezium_area(4,5,6);