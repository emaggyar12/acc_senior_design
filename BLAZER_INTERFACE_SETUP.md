# Blazer Setup

This is a markdown file for setting up the Chevy blazer INTERFACE simulation wrapper for your local computer. If you run into issues setting up the code, reach out to aharsha@vols.utk.edu

‼️‼️‼️‼️VERY IMPORTANT NOTE‼️‼️‼️‼️: 

These are the setup instructions for the Blazer interface, which is the higher level version of the blazer interface code. This will allow you to simulate the car by sending brake and acceleration pedal depression percentages.

IF YOU ARE IN SENIOR DESIGN, THIS IS THE CORRECT SETUP INSTRUCTION TO FOLLOW

IF INSTALLING BLAZER C CODE MAKE SURE THAT IT IS IN ANOTHER VIRTUAL ENVIRONMENT THAN YOUR BLAZER INTERFACE. The import commands differ by a capital letter which can cause serious issues if you mistakenly import the wrong model.

---

## 1. Install Prerequisites:

1. **Python 3.11**

   Link to install Python: https://www.python.org/downloads/

### Verify that Python and Cmake are installed before proceeding:

```zsh
python --version
```

---

## 2. Obtain the Blazer Source code. You will need the entire folder of C code called "blazer-interface2"

---

## 3. Create a Python virtual environment in your working directory. This should not be in the blazer-interface2 folder but in a higher level. If you need the command:

‼️‼️‼️‼️VERY IMPORTANT NOTE‼️‼️‼️‼️: 

IF YOU ARE USING THE BLAZER C CODE FOR WHATEVER REASON THIS SHOULD BE A COMPLETELY SEPARATE VENV YOU ARE CREATING

```zsh
python3.11 -m venv .<virtual environment name>
```

### Activate the virtual environment using one of the following commands depending on your operating system:

**macOS/Linux:**

```zsh
source .<virtual env name>/bin/activate
```

**Windows PowerShell:**

```powershell
.<virtual env name>\Scripts\Activate.ps1
```

> The activation command for Windows may change depending on which type of terminal you are using.

---

## 4. Navigate into the "blazer-interface2" directory and attempt to compile it:

```zsh
python -m pip install -e .
```

> You may be able to just call "pip install" or "pip3 install" depending on how your python env is set up. You may also have to do "python3 -m pip install ..." depending on what sorts of errors you get from your machine.

---

## 5. Downgrade NumPy for Compatibility reasons:

```zsh
python -m pip install "numpy==1.26.4"
```

## 6. Test to see if the model works:

Navigate outside of the blazer interface directory and run:

```zsh
python blazer_interface_test.py
```

You should see the model outputting a speed that is increasing steadily then decreasing after the 100th time step.

The Gym warming is expected and will be resolved soon.
