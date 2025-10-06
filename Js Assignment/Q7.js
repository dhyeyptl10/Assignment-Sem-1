
var marksPercentage = 82;       
var familyIncome = 1450000;     


if (marksPercentage >= 85 && familyIncome < 300000) {
    console.log("FULL SCHOLARSHIP");
} else if (marksPercentage >= 70 && familyIncome < 500000) {
    console.log("HALF SCHOLARSHIP");
} else {
    console.log("NOT ELIGIBLE FOR SCHOLARSHIP");
}