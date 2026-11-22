from setuptools import setup, find_packages


setup(
    name="blazer_model",
    version="2.0.2",
    author="Landon Harris",
    author_email="lharri73@vols.utk.edu",
    description="A python wrapper around the simulink Blazer model",
    long_description="",
    zip_safe=True,
    install_requires=["pysimlink>=1.2.1.dev3", "numpy", "scipy", "tqdm", "matplotlib", "gym"],
    packages=find_packages(),
    include_package_data=True,
    package_data={'blazer_model': ['models/lookup_model.zip', 'models/ext_model.zip', 'data/data.pkl']},
    extras_require={
        "dev": [
            "sphinx_rtd_theme",
            "sphinx",
            "sphinx-toolbox",
            "sphinx-hoverxref",
            "readthedocs-sphinx-search",
        ]
    }
)
