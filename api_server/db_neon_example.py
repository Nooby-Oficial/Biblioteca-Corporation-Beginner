import os
import psycopg2
from flask import Flask
from endpoints import bp

app = Flask(__name__)
app.register_blueprint(bp)

# Conexão com o banco Neon usando variável de ambiente DATABASE_URL
DATABASE_URL = os.environ.get('DATABASE_URL')

# Exemplo de conexão e consulta simples
@app.route('/dbtest')
def dbtest():
    try:
        conn = psycopg2.connect(DATABASE_URL)
        cur = conn.cursor()
        cur.execute('SELECT version();')
        version = cur.fetchone()
        cur.close()
        conn.close()
        return {'postgres_version': version[0]}
    except Exception as e:
        return {'error': str(e)}

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
