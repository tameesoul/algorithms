<?php

//// algorithms for Standard Deviation Calculator in PHP 
$x=[]; 
$sum = 0; 
$n = (int)readline("enter the lenght of array");
$variance=0;
for($i=0;$i<$n;$i++)
{
    $x[$i] =(int)readline("enter the valuse for the index number".$i+1);
    $sum += $x[$i];
}
$avg = $sum/ $n;
for($i = 0 ; $i<$n; $i++)
{
    $variance += pow(($x[$i]-$avg),2);
} 
$variance /= $n;
echo $s =  (float)sqrt($variance);




