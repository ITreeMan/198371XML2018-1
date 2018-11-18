var http = require('http');
var options = { 
  host: 'maps.googleapis.com',
  path: '/maps/api/directions/json?origin=Toronto&destination=Montreal&avoid=highways&mode=bicycling'
}
callback = function(response) {
   // variable that will save the result
   var result = 'https://maps.googleapis.com/maps/api/place/textsearch/json?query=restaurants%20in%2npm0Khon%20Kaen&key=AIzaSyAk7mSHqM-dICaQ-xkm7WPj1P5hVn0lTd0';

   // every time you have a new piece of the result
   response.on('data', function(chunk) {
      result += chunk;
   });

   // when you get everything back
   response.on('end', function() {
     res.send(result);
   });
}

http.request(options, callback).end();