<?php
$z[0]=Array("global","@me=@me;",16,79);
$z[0][4]['name']="itemindex";
$z[0][4]['runphp']="yes";
$z[1]=Array("field","",120,149);
$z[1][4]['name']="typename";
$z[2]=Array("sql","\r\n      <li><a href=\"list.php?tid=[field:id/]\">[field:typename/]</a></li>\r\n      ",180,379);
$z[2][4]['sql']="Select * from dede_arctype where reid=~id~ and ishidden != 1 ORDER BY sortrank limit 0,20";

?>