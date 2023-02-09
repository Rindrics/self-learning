class WordQuiz {
    constructor(rootElm) {
        this.rootElm = rootElm;
        this.gameStatus = {
            level: null
        }
    }

    async init() {
        await this.fetchQuizData();
        this.displayStartView();
    }

    async fetchQuizData() {
        try {
            const response = await fetch('quiz.json');
            this.quizData = await response.json();
        } catch (e) {
            this.rootElm.innerText = 'Failed to load quiz';
            console.log(e);
        }
    }

    displayStartView() {
        const levelStrs = Object.keys(this.quizData);
        this.gameStatus.level = levelStrs[0];
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

        const selectorElm = parentElm.querySelector('.levelSelector');
        selectorElm.addEventListener('change', (event) => {
            this.gameStatus.level = event.target.value;
        });

        const startBtnElm = parentElm.querySelector('.startBtn');
        startBtnElm.addEventListener('click', () => {
            this.displayQuestionView();
        });

        this.replaceView(parentElm);
    }

    displayQuestionView() {
        console.log(`選択中のレベル: ${this.gameStatus.level}`);
        const html = `
        <p>ゲームを開始しました</p>
        <button class="retireBtn">ゲームを終了する</button>
        `;

        const parentElm = document.createElement('div');
        parentElm.className = 'question';
        parentElm.innerHTML = html;

        const retireBtnElm = parentElm.querySelector('.retireBtn');
        console.log(retireBtnElm);
        retireBtnElm.addEventListener('click', () => {
            this.displayResultView();
        });

        this.replaceView(parentElm);
    }

    displayResultView() {
        const html = `
          <p>ゲーム終了</p>
          <button class="resetBtn">開始画面に戻る</button>
        `;

        const parentElm = document.createElement('div');
        parentElm.className = 'results';
        parentElm.innerHTML = html;

        const resetBtnElm = parentElm.querySelector('.resetBtn');
        resetBtnElm.addEventListener('click', () => {
            this.displayStartView();
        });

        this.replaceView(parentElm);
    }

    replaceView(elm) {
        this.rootElm.innerHTML = '';
        this.rootElm.appendChild(elm);
    }

}
new WordQuiz(document.getElementById('app')).init();
