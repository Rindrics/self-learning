var displayElm = document.getElementsByClassName('display')[0];
var startButton = document.getElementsByClassName('startButton')[0];
var timer = null;

startButton.addEventListener('click', function() {
    if(timer === null) {
        console.log('start');
        var seconds = 0;
        displayElm.innerText = seconds;
        timer = setInterval(
            function(){
                seconds++;
                displayElm.innerText = seconds;
                console.log(seconds);
            },
            1000
        );

        var message = '開始';
        var messageElm = document.createElement('div');
        messageElm.innerText = message;
        var logElm = document.querySelector('.log');
        logElm.appendChild(messageElm);
    }
});

var stopButton = document.getElementsByClassName('stopButton')[0];
stopButton.addEventListener('click', function() {
    if(timer !== null) {
        clearInterval(timer);
        timer = null;
    }
})
