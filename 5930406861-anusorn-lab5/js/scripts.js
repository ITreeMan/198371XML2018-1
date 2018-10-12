var input = document.getElementById('input'), 
  number = document.querySelectorAll('.key-number'), 
  operator = document.querySelectorAll('.key-operator'), 
  result = document.getElementById('result'), 
  clear = document.getElementById('clear'), 
  toggle = document.getElementById('toggle');

clear.addEventListener("click", function () {
  input.innerHTML = "";
})


for (var i = 0; i < number.length; i++) {
  number[i].addEventListener("click", function (e) {
      input.innerHTML += e.target.innerHTML;
  });
}

for (var i = 0; i < operator.length; i++) {
  operator[i].addEventListener("click", function (e) {
    if (input.innerHTML.length == null) {
      alert("Please enter a number first");
    } 
      else {
      input.innerHTML += e.target.innerHTML;
    }
  });
}

result.addEventListener("click", function () {
  var getInput = input.textContent.replace("×", "*");
  var postResult = eval(getInput);
  input.textContent = postResult;
});


toggle.addEventListener("click", function () {
    input.innerHTML = "-"+b;
    var b = input.innerHTML
});

