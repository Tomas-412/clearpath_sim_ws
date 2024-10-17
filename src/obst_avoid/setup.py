from setuptools import find_packages, setup

package_name = 'obst_avoid'

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
    maintainer='tomas-jelinek',
    maintainer_email='tomas-jelinek@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'gazebo_config = obst_avoid.gazebo_config:main'
        ],
    },
)
