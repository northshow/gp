<li><a href="{dede:field name='typeurl'/}" class="has-sub">{dede:field name='typename'/}</a>
       <ul>
       
        {dede:sql sql='Select * from dede_arctype where reid=~id~  and ishidden != 1 ORDER BY sortrank limit 0,20'}
        <li><a href="[field:typedir function='str_replace("{cmspath}","",@me)'/]">[field:typename/]</a></li>
        {/dede:sql}       
        
       </ul>
      </li>