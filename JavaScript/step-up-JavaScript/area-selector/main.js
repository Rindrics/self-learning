const rootElm = document.getElementById('areaSelector');

class AreaSelector {

    async init() {
        await updatePref();
        await updateCity();
    }
}

async function getPrefs() {
    const prefResponse = await fetch('./prefectures.json');
    return await prefResponse.json();
}

async function getCities(prefCode) {
    const cityResponse = await fetch(`./cities/${prefCode}.json`);
    return await cityResponse.json();
}

async function updatePref() {
    const prefs = await getPrefs();
    createPrefOptionsHtml(prefs);
}

async function updateCity() {
    const prefSelectorElm = rootElm.querySelector('.prefectures');
    const cities = await getCities(prefSelectorElm.value);
    createCityOptionsHtml(cities);
}

function createPrefOptionsHtml(prefs) {
    const prefSelectorElm = rootElm.querySelector('.prefectures');
    prefSelectorElm.innerHTML = toOptionsHtml(prefs);

    prefSelectorElm.addEventListener('change', (event) => {
        updateCity();
    });
}

function createCityOptionsHtml(cities) {
    const citySelectorElm = rootElm.querySelector('.cities');
    citySelectorElm.innerHTML = toOptionsHtml(cities);
}

function toOptionsHtml(records) {
    return records.map((record) => {
        return `
          <option name="${record.name}" value="${record.code}">
            ${record.name}
          </option>
        `;
    }).join('');
}

initAreaSelector();
