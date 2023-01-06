function StopWatch(options) {
    function addMessage(message) {
        const messageElm = document.createElement('div');
        const now = new Date();
        messageElm.innerText = now.getHours() + '時' + now.getMinutes() + '分' + now.getSeconds() + '秒 ' + message;
        messageElm.classList = ['message'];
        logElm.appendChild(messageElm);
    }

    options = options || {};
    const color = options.color || 'lightblue';
    const backgroundColor = options.backgroundColor || 'black';
    const displayElm = document.getElementsByClassName('display')[0];
    displayElm.style.color = color;
    displayElm.style.backgroundColor = backgroundColor;

    const logElm = document.querySelector('.log');
    let timer = null;

    const startButton = document.getElementsByClassName('startButton')[0];

    startButton.addEventListener('click', function() {
        if(timer === null) {
            console.log('start');
            let seconds = 0;
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

    const stopButton = document.getElementsByClassName('stopButton')[0];
    stopButton.addEventListener('click', function() {
        if(timer !== null) {
            clearInterval(timer);
            timer = null;

            addMessage('終了');
        }
    })
}

var options = {
    color: 'limegreen',
    backgroundColor: '#333'
};

StopWatch(options);
