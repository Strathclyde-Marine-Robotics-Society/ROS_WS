from setuptools import find_packages, setup

package_name = 'computer_vision'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='strathvoyager',
    maintainer_email='asa.hopkins@strath.ac.uk',
    description='TODO: Package description',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'camera = computer_vision.camera:main',
            'display = computer_vision.display:main',
            'detect = computer_vision.detect:main',
        ],
    },
)
