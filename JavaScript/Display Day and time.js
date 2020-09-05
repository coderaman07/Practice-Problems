// Creating a new Object while getting current time in today Object 
// In JavaScript we use var inplace of int , char , String , float it automatically gets the type of Variable
var today = new Date();

// Getting today's Date it Returns a int type of return Value 
var day = today.getDay();

// So we will create a Array Containing Week Days Name and while Displaying we will pass this Array with the Return Value 
var Day = ['Sunday', 'Monday', 'Tuesday', 'WednesDay', 'Thursday', 'Friday', 'Saturday'];

// Getting the Minutes , Hour , and Seconds with .get Function 
var minutes = today.getMinutes();
var hour = today.getHours();
var seconds = today.getSeconds();

// Declaring the AM or PM variable for getting Diffrent Types of Time 
var AMorPM;

// Getting if Hour is greater than 12 or equal to 12 then it will be PM else AM 
if(hour >= 12){
    AMorPM = 'PM';
}else{
    AMorPM = 'AM';
}

// Adding 0 for Better Display in Seconds 
if (seconds < 10){
    var sec = '0' + String(seconds)
}else{
    var sec = seconds;
}

// Formating Time with the Desired Output Format 
var timeRightNow = String(hour) + ':' + String(minutes) + ':' + String(sec) + ' ' + AMorPM;

// Displaying the OutPuts we Gathered by Doing the Operations
console.log('Today is : '+ Day[day] + '.');
console.log('Current time is : ' + timeRightNow + '.')