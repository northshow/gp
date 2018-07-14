<?php
function litimgurls($imgid=0)
{
    global $lit_imglist,$dsql;
    //获取附加表
    $row = $dsql->GetOne("SELECT c.addtable FROM #@__archives AS a LEFT JOIN #@__channeltype AS c 
                                                            ON a.channel=c.id where a.id='$imgid'");
    $addtable = trim($row['addtable']);
    
    //获取图片附加表imgurls字段内容进行处理
    $row = $dsql->GetOne("Select imgurls From `$addtable` where aid='$imgid'");
    
    //调用inc_channel_unit.php中ChannelUnit类
    $ChannelUnit = new ChannelUnit(2,$imgid);
    
    //调用ChannelUnit类中GetlitImgLinks方法处理缩略图
    $lit_imglist = $ChannelUnit->GetlitImgLinks($row['imgurls']);
    
    //返回结果
    return $lit_imglist;
}


function getTopId($id,$type,$linktype){
	global $dsql;
	$parentid = getParentIds($id);
	if(is_array($parentid)){
		$len = count($parentid);
		$parentid = $parentid[$len-1];
		$row = $dsql->GetOne("select id,typename,typedir,isdefault,ispart,defaultname,namerule2,moresite,siteurl,sitepath from #@__arctype where id='{$parentid}'");
		if($row){
			if($type == 'link'){
				if($linktype == 'linktype'){
					return $parentid;
				}else{
					return GetOneTypeUrlA($row);
				}
			}else{
				return $row['typename'];
			}
		}
	}
}

function getLevel($id){
	global $dsql;
	$sonid = trim(getSonIds($id));
	$sonid = explode(',',$sonid);
	if(count($sonid) == 1){
		return "none";
	}
}

function Getimgs($aid, $imgwith = 300, $imgheight = 270, $num = 0, $style = ''){
    global $dsql;
    $imgurls = '';
     $row = $dsql -> getone("Select imgurls From`dede_addonimages` where aid='$aid'"); //
     $imgurls = $row['imgurls'];
     preg_match_all("/{dede:img (.*)}(.*){\/dede:img/isU", $imgurls, $wordcount);
     $count = count($wordcount[2]);
     if ($num > $count || $num == 0){
        $num = $count;
    }
    
    for($i = 0;$i < $num;$i++){
        if($style == 'li'){
            $imglist .= "<li><ahref=#" . $i . "><imgsrc=". trim($wordcount[2][$i]) . " width=" . $imgwith . " height=" . $imgheight . "></li></a>";
        }else{
			if($i==0){
				$imglist .= "<img src=". trim($wordcount[2][$i]) . " data-src=". trim($wordcount[2][$i]) . "  class=\"current\">";
			}else{
				$imglist .= "<img src=". trim($wordcount[2][$i]) . " data-src=". trim($wordcount[2][$i]) . " >";
			}
        }
    }
     return $imglist;
     }


     
function Search_addfields($id,$result){

global $dsql;

$row4 = $dsql->GetOne("SELECT * FROM `dede_addonarticle` where aid='$id'");

//dede_addonsoft 请修改为您自己的表名称 

$name=$row4[$result];

return $name;

}