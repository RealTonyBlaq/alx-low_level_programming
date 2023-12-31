#!/usr/bin/python3
""" Script uses Module MySQLdb to access mysql database """

import MySQLdb
import sys

if __name__ == "__main__":
    db = MySQLdb.connect(host='localhost', port=3306, user=sys.argv[1],
                         passwd=sys.argv[2], db=sys.argv[3])
    cur = db.cursor()
    cur.execute('SELECT * FROM states ORDER BY states.id ASC;')
    data = cur.fetchall()
    for row in data:
        print(row)
    cur.close()
    db.close()
