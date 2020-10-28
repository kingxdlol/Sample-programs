<?php
// Program objective: Generate Random Hex color code


function random_color_part() {
    $dt = '';
    for($o=1;$o<=3;$o++)
    {
        $dt .= str_pad( dechex( mt_rand( 0, 127 ) ), 2, '0', STR_PAD_LEFT);
    }
    return $dt;
}
echo '#'.random_color_part();
?>
