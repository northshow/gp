<?php
//$myfile = fopen("/datadrive/logs/wxapi_20180719", "r") or die("Unable to open file!");

$myfile = fopen("/data/home/www/my/wxapi_20180719.log", "a+") or die("Unable to open file!");
fwrite($myfile,$_GET['loginfo']);
fclose($myfile);