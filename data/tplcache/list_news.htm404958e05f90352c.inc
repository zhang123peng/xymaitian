<?php
$z[0]=Array("field","",212,231);
$z[0][4]['name']="title";
$z[1]=Array("global","",232,258);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",299,328);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",368,426);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1470,1505);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n      <li><a href=\"[field:typelink/]\"  class=\"case_category\" >[field:typename/]</a></li>\r\n      ",1868,2085);
$z[5][4]['currentstyle']="<li><a href='~typelink~' class='current case_category'>~typename~</a></li>";
$z[6]=Array("list","\r\n        <dl>\r\n          <dd style=\"background:url([field:litpic/]) no-repeat center center; background-size:cover;\"><a href=\"[field:arcurl/]\"></a></dd>\r\n          <dt>\r\n            <h3><a href=\"[field:arcurl/]\">[field:title/]</a></h3>\r\n          </dt>\r\n          <dt>[field:typename/]   [field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</dt>\r\n          <dt>[field:description function='cn_substr(@me,200)'/]...</dt>\r\n        </dl>\r\n       ",2219,2713);
$z[6][4]['pagesize']="9";
$z[6][4]['titlelen']="36";
$z[7]=Array("pagelist","",2800,2866);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[7][4]['listsize']="5";
$z[8]=Array("include","",2942,2977);
$z[8][4]['filename']="foot.htm";

?>