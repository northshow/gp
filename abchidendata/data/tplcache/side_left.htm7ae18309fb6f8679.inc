<?php
$z[0]=Array("field","",44,66);
$z[0][4]['name']="typename";
$z[1]=Array("channelartlist","  \r\n   <li class=\"act\"><a href=\"{dede:field name='typeurl'/}\" class=\"{dede:field.currentstyle/}\">{dede:field name='typename'/}</a>\r\n    <ul class=\"sub_ul {dede:field.currentstyle/}\">\r\n    \r\n     {dede:sql sql='Select * from dede_arctype where reid=~id~  and ishidden != 1 ORDER BY sortrank limit 0,20'}\r\n     <li><a href=\"[field:typedir function='str_replace(\"{cmspath}\",\"\",@me)'/]\"  class=\"[field:currentstyle/]\">[field:typename/]</a></li>\r\n     {/dede:sql}       \r\n     \r\n    </ul>\r\n   </li>\r\n   ",208,781);
$z[1][4]['typeid']="son";
$z[1][4]['currentstyle']="act";

?>