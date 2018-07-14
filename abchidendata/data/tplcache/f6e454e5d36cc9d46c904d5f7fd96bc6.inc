<article class="startbottom">
     <div id="c26" class="csc-default">
      <div class="news-latest-item">
       <div class="news-latest-image"><img src="[field:picname/]" width="64" height="52"   alt="" ></div>
       <div class="news-latest-text">
        <h2><a href="view.php?aid=[field:id/]" title="[field:fulltitle/]">[field:title function='( strlen("@me")>40 ? cn_substr("@me",40)."…" : "@me" )'/]</a></h2>
        <a href="view.php?aid=[field:id/]" title="[field:fulltitle/]"><span class="news-latest-date">[field:pubdate function="MyDate('Y-m-d',@me)"/] &#124;</span>
        <p>[field:description function='( strlen("@me")>170 ? cn_substr("@me",170)."…" : "@me" )'/]</p>
        </a> </div>
      </div>
     </div>
    </article>