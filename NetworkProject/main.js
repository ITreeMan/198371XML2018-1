var pingButt = document.getElementById("pingBtn");
var destination = document.getElementById("destination");
var source = document.getElementById("source");
var destination = document.getElementById("destination");
var table = document.getElementById("table");

var row;
var cell1;
var cell2;
var cell3;
var cell4;


/*function showingUp(){
    var firstVlan = document.getElementById('vlan1');
    firstVlan.innerHTML = 'hello';
}*/

function addTableRow() {
    var i=0;
    row = table.insertRow(i+1);
    cell1 = row.insertCell(i);
    cell2 = row.insertCell(i+1);
    cell3 = row.insertCell(i+2);
    cell4 = row.insertCell(i+3);

}
function addTableData() {
    if (source.value == "192.168.0.1") {
        if (destination.value == "192.168.0.1") {
            addTableRow()
            cell1.innerHTML = "1";
            cell2.innerHTML = "E8-DF-DC-BF-E0-62";
            cell3.innerHTML = "dinamic";
            cell4.innerHTML = "0/1";

        }

        else if (destination.value == "192.168.0.2") {
            addTableRow()
            cell1.innerHTML = "1";
            cell2.innerHTML = "1E-64-20-70-15-D9";
            cell3.innerHTML = "dinamic";
            cell4.innerHTML = "0/2";
            addTableRow();
            cell1.innerHTML = "1";
            cell2.innerHTML = "E8-DF-DC-BF-E0-62";
            cell3.innerHTML = "dinamic";
            cell4.innerHTML = "0/1";

        }

        else if (destination.value == "192.168.0.3") {
            addTableRow()
            cell1.innerHTML = "1";
            cell2.innerHTML = "53-03-B1-3C-51-3B";
            cell3.innerHTML = "dinamic";
            cell4.innerHTML = "0/3";
            addTableRow();
            cell1.innerHTML = "1";
            cell2.innerHTML = "E8-DF-DC-BF-E0-62";
            cell3.innerHTML = "dinamic";
            cell4.innerHTML = "0/1";
        }
    }

}
//row.style.backgroundColor = "red";



function next(next) {
    document.getElementById(next).focus();
  }




  var modal = document.getElementById('myModal');

// Get the button that opens the modal
var btn = document.getElementById("myBtn");

// Get the <span> element that closes the modal
var span = document.getElementsByClassName("close")[0];

// When the user clicks the button, open the modal 
btn.onclick = function() {
    modal.style.display = "block";
}

// When the user clicks on <span> (x), close the modal
span.onclick = function() {
    modal.style.display = "none";
}

// When the user clicks anywhere outside of the modal, close it
window.onclick = function(event) {
    if (event.target == modal) {
        modal.style.display = "none";
    }
}



$(document).ready(function(){
    $('[id^=edit]').keypress(validateNumber);
});

function validateNumber(event) {
    var key = window.event ? event.keyCode : event.which;
    if (event.keyCode === 8 || event.keyCode === 46) {
        return true;
    } else if ( key < 48 || key > 57 ) {
        return false;
    } else {
    	return true;
    }
};



function SetIPOne() {
    var IPOne7 = document.getElementById("7").value;
    var IPOne8 = document.getElementById("8").value;
    var IPOne9 = document.getElementById("9").value;
    var IPOne10 = document.getElementById("10").value;
    var IPOne11 = document.getElementById("11").value;
    var IPOne12 = document.getElementById("12").value;
    document.getElementById("ShowIP1").innerHTML = "192.168."+IPOne7+IPOne8+IPOne9+"."+IPOne10+IPOne11+IPOne12;
}




function SetIPTwo() {
    var IPTwo19 = document.getElementById("19").value;
    var IPTwo20 = document.getElementById("20").value;
    var IPTwo21 = document.getElementById("21").value;
    var IPTwo22 = document.getElementById("22").value;
    var IPTwo23 = document.getElementById("23").value;
    var IPTwo24 = document.getElementById("24").value;

    if (IPTwo19==""||IPTwo20==""||IPTwo21==""||IPTwo22==""||IPTwo23==""||IPTwo24=="")
    {
        document.getElementById("ShowIP2").innerHTML = "Key IP Address again. ";
    }
    else{
    document.getElementById("ShowIP2").innerHTML = "192.168."+IPTwo19+IPTwo20+IPTwo21+"."+IPTwo22+IPTwo23+IPTwo24;
}
}



function SetIPThree() {
    var IPThree31 = document.getElementById("31").value;
    var IPThree32 = document.getElementById("32").value;
    var IPThree33 = document.getElementById("33").value;
    var IPThree34 = document.getElementById("34").value;
    var IPThree35 = document.getElementById("35").value;
    var IPThree36 = document.getElementById("36").value;
    var x = document.getElementById("ShowIP3").value;

    if (IPThree31==""||IPThree32==""||IPThree33==""||IPThree34==""||IPThree35==""||IPThree36=="")
    {
        document.getElementById("ShowIP3").innerHTML = "Key IP Address again. ";
    }
    else{
    document.getElementById("ShowIP3").innerHTML = "192.168."+IPThree31+IPThree32+IPThree33+"."+IPThree34+IPThree35+IPThree36;
}
}



