from setuptools import find_packages
from setuptools import setup

setup(
    name='extra_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('extra_interfaces', 'extra_interfaces.*')),
)
