# Blazer Setup

This is a markdown file for setting up the Chevy blazer simulation wrapper for your local computer. If you run into issues setting up the code, reach out to aharsha@vols.utk.edu

---

## 1. Install Prerequisites:

1. **Python 3.11**

   Link to install Python: https://www.python.org/downloads/

2. **CMake**

   Link: https://cmake.org/download/

3. **C/C++ Compiler:**

   - For Mac, you need Apple Command Line Tools
   - For Windows, Chat GPT recommends MSVC

     Install [Visual Studio Build Tools](https://visualstudio.microsoft.com/downloads/) and select the **Desktop development with C++** workload (including the MSVC compiler and Windows SDK). Open **Developer PowerShell for VS** to compile Blazer, and verify that `cl` runs:

     ```powershell
     cl
     ```

     If `cl` is not recognized, use Developer PowerShell rather than an ordinary PowerShell window. Ensure `cmake --version` also works in that terminal.

### Verify that Python and Cmake are installed before proceeding:

```zsh
python --version
cmake --version
```

---

## 2. Obtain the Blazer Source code. You will need the entire folder of C code called "blazer_c_code"

---

## 3. Create a Python virtual environment in your working directory. This should not be in the blazer_c_code folder but in a higher level. If you need the command:

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

## 4. Install the necessary python dependencies:

```zsh
python -m pip install --upgrade pip setuptools wheel
python -m pip install "numpy<2" scipy "gym==0.26.2"
```

---

## 5. Navigate into the "blazer_c_code" directory and attempt to compile it:

```zsh
python -m pip install -e .
```

> You may be able to just call "pip install" or "pip3 install" depending on how your python env is set up. You may also have to do "python3 -m pip3 install ..." depending on what sorts of errors you get from your machine.

---

## The following are troubleshooting steps for various errors that you may receive:

### Pybind11 is not compatible with your version of Python:

Make sure that pybind11 is the correct version and compatible with Python 3.11, or whatever other Python version you are using. Then attempt to reinstall using the above command and see if it work.

If the build fails with errors referencing `pybind11` or Python C API types, replace the **bundled** `pybind11` folder inside `blazer_c_code` (not just the Python package installed with `pip`). Check [pybind11 releases](https://github.com/pybind/pybind11/releases) for a version compatible with your Python version. **Version `v2.13.6` worked with Python 3.11 on macOS; other configurations are not verified.**

From inside `blazer_c_code`, back up the old folder and download the replacement using Git:

**macOS/Linux:**

```bash
mv pybind11 pybind11_old
git clone --depth 1 --branch v2.13.6 https://github.com/pybind/pybind11.git pybind11
```

**Windows PowerShell:**

```powershell
Rename-Item pybind11 pybind11_old
git clone --depth 1 --branch v2.13.6 https://github.com/pybind/pybind11.git pybind11
```

Replace `v2.13.6` with a suitable release tag if necessary. These commands require Git; if `pybind11_old` already exists, choose a different backup name. Then retry `python -m pip install -e .` from `blazer_c_code`.

### Configure CMake Compatibility:

The version of CMake you using to attempt to compile the C code may be too new for the blazer code. In that case, run the following commands (depending on your operating system) that configure your CMake version before attempting to reinstall:

**macOS/Linux:**

```zsh
export CMAKE_POLICY_VERSION_MINIMUM=3.5
```

**Windows PowerShell:**

```powershell
$env:CMAKE_POLICY_VERSION_MINIMUM = "3.5"
```
