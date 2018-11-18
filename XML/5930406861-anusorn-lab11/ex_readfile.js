var express = require('express');
var app = express();
var fs = require('fs');

app.get('/', function (req, res) {
    fs.readFile('kaokonlakao.txt', 'utf8', function (err, data) {
        if (err) throw err;
        res.send(data);
    });
});

app.listen(5555);