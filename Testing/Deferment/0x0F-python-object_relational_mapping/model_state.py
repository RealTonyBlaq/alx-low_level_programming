#!/usr/bin/python3
""" Script uses sqlalchemy module to create a table in a database """

from sqlalchemy import Table, String, MetaData, Integer, Column
from sqlalchemy.ext.declarative import declarative_base

Base = declarative_base()


class State(Base):
    """
    Defining a class State which inherits from Base

    class attributes:
    -----------------

    __tablename__ (str): name of the table
    id (int): An auto-generated column with unique values
    name (string): A column with string values which cannot be null
    """
    __tablename__ = "states"
    id = Column("id", Integer, unique=True, nullable=False,
                primary_key=True)
    name = Column("name", String(128), nullable=False)
