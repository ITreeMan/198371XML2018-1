var request1 = require("request");
var http = require("http");
var url = "https://maps.googleapis.com/maps/api/place/textsearch/json?query=restaurants%20in%20Khon%20Kaen&key=AIzaSyAk7mSHqM-dICaQ-xkm7WPj1P5hVn0lTd0";

request1.get(url, (error, response, body) => {
    if (error) {
        return console.dir(error);
    }
    var resultOBJ = JSON.parse(body);
    var results = resultOBJ.results;
    http.createServer(function (req, res) {
        res.writeHead(200, {
            'Content-Type': 'text/html; charset=utf-8;'
        });

        res.write("<h2>Restuarants in Khon Kaen </h2>");
        res.write("<ol>");
        for (var i = 0; i < results.length; i++) {
            res.write("<li>" + results[i].name + "</li>");
        }
        res.write("</ol>");
        console.log(resultOBJ);
    }).listen(8080, '127.0.0.1');
    console.log('Server running at http://127.0.0.1:8080')
});