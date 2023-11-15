from setuptools import find_packages
from setuptools import setup

setup(
    name='take_picture_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('take_picture_interfaces', 'take_picture_interfaces.*')),
)
