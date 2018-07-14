<li class="act"><a href="{dede:field name='typeurl'/}" class="{dede:field.currentstyle/}">{dede:field name='typename'/}</a>
    <ul class="sub_ul {dede:field.currentstyle/}">
    
     {dede:sql sql='Select * from dede_arctype where reid=~id~  and ishidden != 1 ORDER BY sortrank limit 0,20'}
     <li><a href="[field:typedir function='str_replace("{cmspath}","",@me)'/]"  class="[field:currentstyle/]">[field:typename/]</a></li>
     {/dede:sql}       
     
    </ul>
   </li>