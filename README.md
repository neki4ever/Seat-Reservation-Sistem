# 🎟️ Seat Reservation System (C++)

A simple **console-based seat reservation program** built in C++.  
It uses a **2D matrix (10x10)** to represent seats and allows the user to view, reserve, cancel, and reset seat bookings through a menu-driven interface.

---

## 🧩 Features
- Display current seat layout  
- Reserve a seat by row and column  
- Cancel existing reservations  
- Show how many seats are still available  
- Reset all seats to available  
- Exit confirmation prompt  

---

## 💻 How It Works
Each seat is represented by:
- `0` → Available  
- `1` → Reserved  

The system keeps track of all seat statuses and updates them based on user actions.  

---

## ⚙️ Usage
1. Compile the program:
   ```bash
   g++ main.cpp -o seat_system
