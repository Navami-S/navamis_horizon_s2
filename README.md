# navamis_horizon_s2
Official software recruitment tasks for Team Horizon CUSAT (Mars Rover Team), featuring navigation logic, Arduino hardware simulations, and ROS2 communication nodes


# 🛸 Project Horizon | Software Subteam Recruitment 2026
**Candidate: Navami S** *First Year B.Tech CSE, SOE CUSAT*

This repository contains my technical submissions for the Horizon Mars Rover Software recruitment. It demonstrates proficiency in C++ logic, hardware-software integration via Arduino, and foundational ROS2 (Robot Operating System) architecture, which is just downloaded.

---

## 🛠️ Level 1: Rover Navigation Logic (C++)
A robust mission-planning tool designed to calculate Euclidean distances and travel timelines for a rover across a 2D Martian terrain.
* **Key Features:** Integrated kinematic modeling (Acceleration, Initial Velocity, and Max Speed caps).
* **Safety:** Implemented strict input validation and zero-motion error handling.
* **Tech Stack:** C++.

## 🤖 Level 2: Smart Actuator Control (Arduino/Tinkercad)
Development of a safe-limit servo mechanism for rover arm/steering actuators.
* **Logic:** Real-time potentiometer mapping to a micro-servo.
* **Constraint:** Hard-coded software limit of **68°** to prevent mechanical stress.
* **Telemetry:** Visual LED alert system triggers when the safety threshold is hit.
* **Artifacts:** [Simulation Video](./02_vid.mp4) | [Tinkercad Link](./02_link)

## 🛰️ Level 3: ROS2 Autonomous Telemetry (Python)
Architecting a communication bridge between a simulated distance sensor and a decision-making node.
* **Environment:** VMware Workstation Pro 25H2 | Ubuntu 22.04 (Jammy Jellyfish).


## 📂 Repository Structure
```text
├── Level1_Task/
│   └── 01.cpp
├── Level2_Task/
│   ├── servo_control.ino
│   └── 02_vid.mp4
└── Level3_Task/
    ├── publisher_node.py
    └── subscriber_node.py
(task 3 unfinished)
