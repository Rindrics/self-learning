from flask import Flask
app = Flask(__name__)       # Flaskの初期化
    
@app.route('/')                 # このURLに関連付けられるルートを作成する．このURLがリクエストされると，関数hello_worldが呼ばれる．
def hello_world():
    return 'Hello Docker!\n'

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0')  # PythonのWebサーバを初期化する．127.0.0.1ではなく0.0.0.0を使うと，全てのネットワークインターフェイスに対してバインドされる．こうすれば，他のホストやコンテナからアクセスできる．
