<?php
$z[0]=Array("field","",25,53);
$z[0][4]['name']="typeurl";
$z[1]=Array("field","",62,88);
$z[1][4]['name']="currentstyle";
$z[2]=Array("field","",90,119);
$z[2][4]['name']="typename";
$z[3]=Array("field","",147,173);
$z[3][4]['name']="currentstyle";
$z[4]=Array("sql","\r\n     <li><a href=\"[field:typedir function='str_replace(\"{cmspath}\",\"\",@me)'/]\"  class=\"[field:currentstyle/]\">[field:typename/]</a></li>\r\n     ",188,451);
$z[4][4]['sql']="Select * from dede_arctype where reid=~id~ and ishidden != 1 ORDER BY sortrank limit 0,20";

?>