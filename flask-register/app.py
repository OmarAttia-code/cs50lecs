#register only no table
from flask import Flask, render_template, request

app = Flask(__name__)

SPORTS = ["Basketball", "Soccer", "Ultimate Frisbee"]

@app.route("/")
def index():
    return render_template("register.html", sports=SPORTS)

@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    sport = request.form.get("sport")

    if not name or sport not in SPORTS: #avoid invalid sports using inspect element
        return render_template("error.html", message="Invalid name or sport selection!")

    return render_template("success.html", name=name, sport=sport)

if __name__ == "__main__":
    app.run(debug=True)