console.log("Hello from main.js");
var element = document.getElementById('innerTest');
element.innerHTML = '<strong>JavaScript</strong> で書きました';

var buttonElm = document.getElementById('testButton');
buttonElm.addEventListener('click', function() {
    alert('ボタンが押されました');
});
