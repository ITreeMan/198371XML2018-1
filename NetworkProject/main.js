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
