var request1 = require("request");
var http = require("http");
var url = "https://www.kku.ac.th/ikku/api/news/services/topNews.php";

request1.get(url, (error, response, body) => {
    if (error) {
        return console.dir(error);
    }
    var activityOBJ = JSON.parse(body);
    

    var act = activityOBJ.news;
    http.createServer(function (req, res) {
        res.writeHead(200, {
            'Content-Type': 'text/html; charset=utf-8;'
        });

        res.write("<h2 style=\"margin-left: 20px;\">Current KKU News</h2>");
        // res.write("<hr>");
        
        res.write("<table>");
        res.write("<tbody>");
        
        for (var i = 0; i < act.length; i++) {
            res.write("<tr>");
            res.write("<td style=\"padding-left: 20px;\">" +"&nbsp;&nbsp;&nbsp;&nbsp;"+ (i+1) + ". </td>");
            res.write("<td style=\"padding-left: 20px;\"><a href=\"" + act[i].url + "\"target='_blank'>" + act[i].title + "</a> <br/>"+ " </td>");
            res.write("</tr>");
            res.write("<tr>");
            res.write("<td>");
            res.write("<td style=\"padding-left: 20px;\">"  + "</a> <br/>"+ "<img src='"+act[i].picnews[1] +"' alt='Sample Image'/>"  +" </td>");
            res.write("</t>");
            res.write("</tr>");
        }
        res.write("</table>");
        res.write("</tbody>");
        
    }).listen(8082, '127.0.0.1');
    console.log('Server running at http://127.0.0.1:8082')
});