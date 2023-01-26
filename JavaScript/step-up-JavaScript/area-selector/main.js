const rootElm = document.getElementById('areaSelector');

class AreaSelector {
    constructor(rootElm) {
        this.rootElm = rootElm;
        this.prefectures = [];
        this.cities = [];
        this.prefCode = null;
    }

    async init() {
        await updatePref();
        await updateCity();
    }

    async getPrefs() {
        const prefResponse = await fetch('./prefectures.json');
        return await prefResponse.json();
    }

    async getCities(prefCode) {
        const cityResponse = await fetch(`./cities/${prefCode}.json`);
        return await cityResponse.json();
    }

    async updatePref() {
        const prefs = await getPrefs();
        createPrefOptionsHtml(prefs);
    }

    async updateCity() {
        const prefSelectorElm = rootElm.querySelector('.prefectures');
        const cities = await getCities(prefSelectorElm.value);
        createCityOptionsHtml(cities);
    }

    createPrefOptionsHtml(prefs) {
        const prefSelectorElm = rootElm.querySelector('.prefectures');
        prefSelectorElm.innerHTML = toOptionsHtml(prefs);

        prefSelectorElm.addEventListener('change', (event) => {
            updateCity();
        });
    }

    createCityOptionsHtml(cities) {
        const citySelectorElm = rootElm.querySelector('.cities');
        citySelectorElm.innerHTML = toOptionsHtml(cities);
    }

    toOptionsHtml(records) {
        return records.map((record) => {
            return `
              <option name="${record.name}" value="${record.code}">
                ${record.name}
              </option>
            `;
        }).join('');
    }
}

initAreaSelector();
