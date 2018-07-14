<?php
$z[0]=Array("field","",13,41);
$z[0][4]['name']="typeurl";
$z[1]=Array("field","",59,88);
$z[1][4]['name']="typename";
$z[2]=Array("sql","\r\n        <li><a href=\"[field:typedir function='str_replace(\"{cmspath}\",\"\",@me)'/]\">[field:typename/]</a></li>\r\n        ",124,362);
$z[2][4]['sql']="Select * from dede_arctype where reid=~id~ and ishidden != 1 ORDER BY sortrank limit 0,20";

?>