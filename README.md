# Coulomb's Law Force Calculator (3D) ⚡️

A C++ application that calculates the electrostatic force between two point charges in 3D space using Coulomb's Law. This tool was developed to assist with Electromagnetics coursework at King Saud University.

## 👥 Authors
* **Fahad Alamri**
* **Fahad Alruwaili**
* **Abdulaziz Alaboudi**

## 🚀 Features
* **3D Vector Analysis:** Calculates Euclidean distance between charges in (x, y, z) coordinate space.
* **Modular Design:** Uses separate header (`fun.h`) and source (`fun.cpp`) files for clean code organization.
* **File I/O:** Automatically saves calculation results to a `report.txt` file for data logging.
* **Interactive Loop:** Allows multiple calculations in a single session.

## 📐 The Physics
The program implements Coulomb's Law:
$$F = k \frac{q_1 q_2}{r^2}$$
Where:
* $k \approx 9 \times 10^9$
* $r$ is the calculated Euclidean distance: $\sqrt{(x_2-x_1)^2 + (y_2-y_1)^2 + (z_2-z_1)^2}$

## 🧾 Test Cases
We verified the code against manual calculations:

| Case | Charge 1 | Charge 2 | Distance | Expected Force | Program Output |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **1** | 1 C | 1 C | 1 m | 9.00e+09 N | [PASS] 9e+09 N |
| **2** | 1 C | 1 C | 2 m | 2.25e+09 N | [PASS] 2.25e09 N |

## 🛠 How to Run
1.  Clone the repository.
2.  Compile using g++:
    ```bash
    g++ main.cpp fun.cpp -o coulomb_calc
    ```
3.  Run the executable:
    ```bash
    ./coulomb_calc
    ```
