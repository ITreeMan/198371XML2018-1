        const emailField = document.getElementById('user_email');
        const registBtn = document.getElementById('reg-btn');
        const password = document.getElementById('user_password');
        const repassword = document.getElementById('user_r_password');
        const form_cont = document.getElementById('form_container');

        registBtn.addEventListener ('click',validateSubmit);

        function validateSubmit() {
            if (checkEmail(emailField.value) && checkPassword(password.value, repassword.value)) {
                return true;
            }
            return false;
        }

        function checkEmail(email) {
            var reg = /^([A-Za-z0-9_\-\.])+\@([A-Za-z0-9_\-\.])+\.([A-Za-z]{2,4})$/;
            if (!reg.test(email)) {
                alert("Please enter correct email address");
                return false;
            }
            return true;
        }

        function checkPassword(pass, repass) {
            if (pass.length < 6) {
                alert("Please have at least six characters");
                return false;
            }


            var regIfHaveLetter = /^([0-9])+$/;
            var regIfHaveNumber = /^([A-Za-z])+$/;
            if (regIfHaveLetter.test(pass)) { 
                alert("Please have at least one letter");
                return false;
            }
            else if (regIfHaveNumber.test(pass)) { 
                alert("Please have at least one number");
                return false;
            }

            if (pass != repass) {
                alert("Password and repeat password need to be the same");
                return false;
            }

            return true;
        }