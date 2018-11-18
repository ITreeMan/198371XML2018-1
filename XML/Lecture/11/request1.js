var request1 = require("request");
request1.get("https://maps.googleapis.com/maps/api/place/textsearch/json?query=restaurants%20in%2npm0Khon%20Kaen&key=AIzaSyAk7mSHqM-dICaQ-xkm7WPj1P5hVn0lTd0",(error,Response,body)=>{
    if(error){
        return console.dir(error);
    }
    var result = JSON.parse(body);
    var ip = result.origin;
    console.dir(ip);

});