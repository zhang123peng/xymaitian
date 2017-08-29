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
$z[5]=Array("channel","\r\n          <li class=\"\"><a href=\"[field:typelink/]\" class=\"news_category\"><i class=\"t2\"></i>[field:typename/]</a></li>\r\n          ",1947,2218);
$z[5][4]['currentstyle']="<li class='on'><a href='~typelink~' class='news_category'><i class='t2'></i>~typename~</a></li>";
$z[6]=Array("type","</a><a href=\"[field:typelink /]\" class=\"blue_bt\">",2471,2554);
$z[6][4]['typeid']="5";
$z[7]=Array("list","\r\n        <!--news_list-->\r\n        <div class=\"news_list\">\r\n          <div class=\"pic\" style=\"background:url([field:litpic/]) no-repeat center center; background-size:cover;\"><a href=\"[field:arcurl/]\"></a></div>\r\n          <ul>\r\n            <li>\r\n              <h1><a href=\"[field:arcurl/]\">[field:title/]</a></h1>\r\n            </li>\r\n            <li>[field:typename/]   [field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</li>\r\n            <li>[field:description function='cn_substr(@me,250)'/]... <a href=\"[field:arcurl/]\">查看全文</a></li>\r\n          </ul>\r\n        </div>\r\n        <!--news_list-->\r\n       ",2803,3469);
$z[7][4]['pagesize']="5";
$z[7][4]['titlelen']="50";
$z[8]=Array("pagelist","",3582,3648);
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",3730,3765);
$z[9][4]['filename']="foot.htm";

?>