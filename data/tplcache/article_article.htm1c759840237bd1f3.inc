<?php
$z[0]=Array("field","",212,231);
$z[0][4]['name']="title";
$z[1]=Array("global","",232,258);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",299,321);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",361,412);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1549,1584);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1726,1745);
$z[5][4]['name']="title";
$z[6]=Array("field","",1869,1891);
$z[6][4]['name']="typename";
$z[7]=Array("field","",1892,1949);
$z[7][4]['name']="pubdate";
$z[7][4]['function']="strftime(\"%Y-%m-%d\",@me)";
$z[8]=Array("type","[field:typelink /]",2647,2705);
$z[8][4]['typeid']="0";
$z[8][4]['row']="1";
$z[9]=Array("field","",2829,2847);
$z[9][4]['name']="body";
$z[10]=Array("arclist","\r\n      <dl >\r\n        <dd style=\"background:url([field:litpic/]) no-repeat center center; background-size:cover;\"><a href=\"[field:arcurl/]\"></a></dd>\r\n        <dt>\r\n          <h2><a href=\"[field:arcurl/]\">[field:title/]</a></h2>\r\n        </dt>\r\n        <dt>[field:typename/]   [field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</dt>\r\n        <dt>[field:description function='cn_substr(@me,100)'/]......<a href=\"[field:arcurl/]\" class=\"bt\">查看全文</a></dt>\r\n      </dl>\r\n      ",3652,4198);
$z[10][4]['row']="3";
$z[10][4]['titlelen']="36";
$z[10][4]['typeid']="2";
$z[11]=Array("type","[field:typelink /]",4245,4303);
$z[11][4]['typeid']="0";
$z[11][4]['row']="1";
$z[12]=Array("global","",4853,4880);
$z[12][4]['name']="cfg_basehost";
$z[13]=Array("field","",4881,4908);
$z[13][4]['name']="arcurl";
$z[14]=Array("include","",5352,5387);
$z[14][4]['filename']="foot.htm";

?>