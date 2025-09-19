from flask import Flask, render_template

app = Flask(_name_)

@app.route("/")
def dashboard():
    dados = {"imc": 22.5, "saldo": 150, "passos": 8500}
    return render_template("dashboard.html", dados=dados)

if _name_ == "_main_":
    app.run(debug=True)
