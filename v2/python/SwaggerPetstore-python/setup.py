import sys
from setuptools import setup, find_packages



# To install the library, open a Terminal shell, then run this
# file by typing:
#
# python setup.py install
#
# You need to have the setuptools module installed.
# Try reading the setuptools documentation:
# http://pypi.python.org/pypi/setuptools

REQUIRES = []

setup(
    name="SwaggerPetstore",
    version="2.0",
    description="Vestorly API v2",
    author_email="",
    url="success@vestorly.com",
    keywords=["Swagger", "Vestorly API v2"],
    install_requires=REQUIRES,
    packages=find_packages(),
    include_package_data=True,
    long_description="""\
    The Vestorly API provides an open REST API for developers to synchronize various data with Vestorly.
    """
)


