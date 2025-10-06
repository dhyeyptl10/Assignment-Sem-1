var i = 1200000;

if (250000>=i) { console.log ("NO TAX");}
else if (250001<=i && 500000>=i ) { console.log ("5% TAX");}
else if (500001<=i && 1000000>=i) { console.log ("20% TAX");}
else if (1000001<=i) { console.log ("30% TAX");}
