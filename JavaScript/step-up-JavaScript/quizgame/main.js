class WordQuiz {
    constructor(rootElm) {
        this.rootElm = rootElm;
    }

    async init() {
        await this.fetchQuizData();
        this.displayStartView();
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

    displayStartView() {
        const levelStrs = Object.keys(this.quizData);
        const optionStrs = [];
        for (let i = 0; levelStrs.length > i; i++) {
            optionStrs.push(`<option value="${levelStrs[i]}" name="level">レベル${i + 1}</option>`);
        }
        const html = `
          <select class="levelSelector">
            ${optionStrs.join('')}
          </select>
          <button class="startBtn">スタート</button>
        `;
        const parentElm = document.createElement('div');
        parentElm.innerHTML = html;

        const startBtnElm = parentElm.querySelector('.startBtn');
        startBtnElm.addEventListener('click', () => {
            this.displayQuestionView();
        });

        this.rootElm.appendChild(parentElm);
    }

    displayQuestionView() {
        const html = `
        <p>ゲームを開始しました</p>
        `;

        const parentElm = document.createElement('div');
        parentElm.className = 'question';
        parentElm.innerHTML = html;

        this.rootElm.innerHTML = '';
        this.rootElm.appendChild(parentElm);
    }
}
new WordQuiz(document.getElementById('app')).init();
