class StopWatch {
    constructor(options = {}) {
        this.options = options;
    }

    init() {
        let {color, backgroundColor} = this.options;
        const displayElm = document.getElementsByClassName('display')[0];
        displayElm.style.color = color || 'lightblue';
        displayElm.style.backgroundColor = backgroundColor || 'black';

        this.logElm = document.querySellector('.log');

        let timer = null;

        const startButton = document.getElementsByClassName('startButton')[0];
        startButton.addEventListener('click', () => {
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

                this.addMessage('開始')
            }
        });

        const stopButton = document.getElementsByClassName('stopButton')[0];
        stopButton.addEventListener('click', () => {
            if(timer !== null) {
                clearInterval(timer);
                timer = null;

                this.addMessage('終了');
            }
        })
    }

    addMessage(message) {
        const messageElm = document.createElement('div');
        const now = new Date();
        messageElm.innerText = `${now.getHours()}時${now.getMinutes()}分${now.getSeconds()}秒 ${message}`;
        messageElm.classList = ['message'];
        this.logElm.appendChild(messageElm);
    }

}

const StopWatch = (options = {}) => {


}

var options = {
    color: 'limegreen',
    backgroundColor: '#333'
};

StopWatch(options);
