#!/usr/bin/python3

from flask import Flask, jsonify


app = Flask(__name__)

@app.route('/api/stat', methods=['GET'], strict_slashes=False)
def status():
    """ Returns the api status """
    return jsonify({"status": "OK"})
