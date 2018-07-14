<nav class="menu{dede:global name=itemindex runphp="yes"}@me=@me;{/dede:global}">
   <ul>
    <p class="bodytext"><li>{dede:field name='typename'/}</p>
     <ul>
      
      {dede:sql sql='Select * from dede_arctype where reid=~id~  and ishidden != 1 ORDER BY sortrank limit 0,20'}
      <li><a href="list.php?tid=[field:id/]">[field:typename/]</a></li>
      {/dede:sql}  
      
     </ul>
     <p class="bodytext"> 
    </li>
    </p>
   </ul>
  </nav>