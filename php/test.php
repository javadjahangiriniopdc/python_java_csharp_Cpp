<?php
 function perfectnumber($n) {
	$k = 1;
	$sum = 0;
	while ($k < $n) {

        if ($n % $k == 0)
            $sum += $k;
        $k++;
    }

	if ($sum == $n)
        return True;

	return False ;
}

$n = (int)readline('Enter an integer: ');
$k=1;
$time_start = microtime(true);
while ($k<=$n)
{
    if(perfectnumber($k))
        echo $k."\n";
 
    $k++;
}
$time_end = microtime(true);
$execution_time = ($time_end - $time_start);

echo 'total Execution Time: '.$execution_time.' Sec';



