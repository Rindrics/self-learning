class WordQuiz {
    constructor(rootElm) {
        this.rootElm = rootElm;
    }

    async init() {
        await this.fetchQuizData();
    }

    async fetchQuizData() {
        try {
            const response = await fetch('quiz.json');
            this.quizData = await response.json();
        } catch(e) {
            this.rootElm.innerText = 'Failed to load quiz';
            console.log(e);
        }
    }
}
new WordQuiz(document.getElementById('app')).init();
