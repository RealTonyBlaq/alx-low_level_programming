#!/usr/bin/python3

from flask import Flask, jsonify


app = Flask(__name__)


@app.route('/api/stat', methods=['GET'], strict_slashes=False)
def status():
    """ Returns the api status """
    return jsonify({"status": "OK"}), 200


if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000, debug=True)
