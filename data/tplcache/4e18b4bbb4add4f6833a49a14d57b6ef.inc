<!--news_list-->
        <div class="news_list">
          <div class="pic" style="background:url([field:litpic/]) no-repeat center center; background-size:cover;"><a href="[field:arcurl/]"></a></div>
          <ul>
            <li>
              <h1><a href="[field:arcurl/]">[field:title/]</a></h1>
            </li>
            <li>[field:typename/]   [field:pubdate function='strftime("%Y-%m-%d",@me)'/]</li>
            <li>[field:description function='cn_substr(@me,250)'/]... <a href="[field:arcurl/]">查看全文</a></li>
          </ul>
        </div>
        <!--news_list-->