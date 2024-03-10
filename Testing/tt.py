#!/usr/bin/python3

from flask import Flask


app = Flask(__name__)

@app.route('/api/stat', methods=['GET'], strict_slashes=False)
