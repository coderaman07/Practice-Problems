var today = new Date();
var month = String(today.getMonth());
var date = String(today.getDate());
var year = String(today.getFullYear());
var Month;
var Dat;
var Year;
if(month <= 9){
    Month = '0' + month;
}else{
    Month = month;
}
if(date <= 9){
    Dat = '0' + date;
}else{
    Dat = date;
}
console.log(Month + "-" + Dat + '-' + year);
console.log(Month + "/" + Dat + '/' + year);