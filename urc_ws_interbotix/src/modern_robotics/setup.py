from setuptools import find_packages, setup

package_name = 'modern_robotics'

long_description = """
# Modern Robotics:  Mechanics, Planning, and Control Code Library

This package contains the Python code accompanying [_Modern Robotics:
Mechanics, Planning, and Control_](http://modernrobotics.org) (Kevin Lynch
and Frank Park, Cambridge University Press 2017).

The primary purpose of the provided software is to be easy to read and educational, reinforcing the concepts in the book. The code is optimized neither for efficiency nor robustness.

For more information, including a user manual, see the [project's GitHub page](https://github.com/NxRLab/ModernRobotics).
"""

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'numpy'],
    zip_safe=True,
    maintainer='Huan Weng, Mikhail Todes, Jarvis Schultz, Bill Hunt',
    maintainer_email='huanweng@u.northwestern.edu',
    description = ("Modern Robotics: Mechanics, Planning, and Control: Code Library"),
    license = "MIT",
    extras_require={
        'test': [
            'pytest',
        ],
    },
    long_description = long_description,
    long_description_content_type='text/markdown',
    keywords = "kinematics robotics dynamics",
    url = "http://modernrobotics.org/",
    classifiers=[
        "Development Status :: 3 - Alpha",
        "Intended Audience :: Education",
        "Intended Audience :: Science/Research",
        "License :: OSI Approved :: MIT License",
        "Natural Language :: English",
        "Programming Language :: Python :: 2",
        "Programming Language :: Python :: 3",
        "Topic :: Education",
        "Topic :: Scientific/Engineering",
    ],
    platforms='Linux, Mac, Windows',
    entry_points={
        'console_scripts': [
        ],
    },
)
