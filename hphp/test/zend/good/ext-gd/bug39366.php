<?php

$im = imagecreatetruecolor(10,10);
imagealphablending($im, 0);
imagefilledrectangle($im, 0,0, 8,8, 0x32FF0000);
$rotate = imagerotate($im, 180, 0);
imagecolortransparent($rotate,0);
imagesavealpha($rotate, true);
$c = imagecolorat($rotate,5,5);
printf("%X\n", $c);
?>