#!/usr/bin/python3
"""
Script updates the State table where id == 2 and sets the
corresponding name column to 'New Mexico'
"""

from model_state import Base, State
from sqlalchemy import create_engine, update
from sys import argv

if __name__ == "__main__":
    engine = create_engine("mysql://{}:{}@localhost:3306/{}"
                           .format(argv[1], argv[2], argv[3]),
                           pool_pre_ping=True)
    conn = engine.connect()
    statement = update(State).where(State.id == 2).values(name='New Mexico')
    conn.execute(statement)
    conn.commit()
    conn.close()
