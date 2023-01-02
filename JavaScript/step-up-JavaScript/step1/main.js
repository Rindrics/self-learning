function addMessage(message) {
    var messageElm = document.createElement('div');
    messageElm.innerText = message;
    logElm.appendChild(messageElm);
}

var displayElm = document.getElementsByClassName('display')[0];
var logElm = document.querySelector('.log');
var timer = null;

var startButton = document.getElementsByClassName('startButton')[0];

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

        addMessage('開始')
    }
});

var stopButton = document.getElementsByClassName('stopButton')[0];
stopButton.addEventListener('click', function() {
    if(timer !== null) {
        clearInterval(timer);
        timer = null;

        addMessage('終了');
    }
})
