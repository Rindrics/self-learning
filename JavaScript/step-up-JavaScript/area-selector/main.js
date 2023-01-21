const rootElm = document.getElementById('areaSelector');

async function getPrefs() {
    const prefResponse = await fetch('./prefectures.json');
    return await prefResponse.json();
}

async function displayPrefs() {
    const result = await getPrefs();
    console.log(result);
}

displayPrefs();
