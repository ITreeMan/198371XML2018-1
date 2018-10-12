<!DOCTYPE html>
<html>

<head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
    <meta name="viewport" content="width=device-width">
    <title>Simple words generator</title>
</head>

<body>
    <link href="styles/simpleWord.css" rel="stylesheet" type="text/css">
    <div>
        <label for="studentName">Enter student name:</label>
        <input id="studentName" type="text" placeholder="">
    </div>
    <div>
        <label for="en">English</label><input id="en" type="radio" name="enth" value="en" checked>
        <label for="th">Thai</label><input id="th" type="radio" name="enth" value="th">
    </div>
    <div>
        <button class="randomize">Generate random words</button>
    </div>
    <p class="story"></p>
</body>

<script>
    var studentName = document.getElementById('studentName');
    var randomize = document.querySelector('.randomize');
    var story = document.querySelector('.story');

 
    function randomValueFromArray(array) {
        return array[Math.floor(Math.random() * array.length)];
    }

    var storyTextEN = " is :insertEngText:.";
    var storyTextTH = " เป็น:insertThaiText:";

    var insertEngText = ['a good person', 'sleepy', 'happy', 'coming to town'];
    var insertThaiText = ["คนชอบเปย์", "คนหัวร้อน", "ราชาโจรสลัด ให้ได้เลย!", "คลที่ไม่รัวั๊กดี"];



    randomize.addEventListener('click', result);

    function result() {
        var newStoryEN = storyTextEN;
        var newStoryTH = storyTextTH;
        var xItem = randomValueFromArray(insertEngText);
        var yItem = randomValueFromArray(insertThaiText);
        var name = studentName.value;

        var newStoryEN = [newStoryEN.replace(':insertEngText:', xItem)];
        var newStoryTH = [newStoryTH.replace(':insertThaiText:', yItem)];

        if (studentName.value !== '') {
            name = studentName.value;

        }

        if (document.getElementById("en").checked) {
            var weight = Math.round(300);
            var temperature = Math.round(94);
            story.textContent = name + newStoryEN;
            story.style.visibility = 'visible';
        }
        if (document.getElementById("th").checked) {
            var weight = Math.round(300);
            var temperature = Math.round(94);
            story.textContent = name + newStoryTH;
            story.style.visibility = 'visible';
        }
    }
</script>


</html>