# 🚀 RFID-Based Attendance System with Database Integration  

### 🎯 Smart Attendance | 💾 Database Logging | ⏱️ Real-Time Monitoring  
## 📝 Project Overview  
This project is a **real-time RFID attendance system** powered by the **LPC2148 ARM7 microcontroller**.  
It records attendance using **RFID cards**, communicates with a **Linux-based application via UART**, and stores data in a **CSV database**.  

- ✅ IN/OUT logging  
- ✅ Admin card for **user management**  
- ✅ Working hours calculation  
- ✅ LCD + Keypad menu-driven interface  
- ✅ Reliable data storage with EEPROM + RTC

## ⚡ Features
✨ **User Management** → Add, Edit, Delete users via Admin card  
✨ **Attendance Logging** → Track IN/OUT with timestamps  
✨ **Database Integration** → Linux app maintains `.csv` file  
✨ **Real-Time Clock** → Accurate date & time entries  
✨ **LCD & Keypad UI** → Simple on-device configuration  
✨ **EEPROM Support** → Securely store admin card data

## 🖼️ System Architecture
    RFID[🔖 RFID Reader] --> LPC[LPC2148 MCU];
    Keypad[⌨️ Keypad] --> LPC;
    EEPROM[💾 EEPROM] --> LPC;
    RTC[⏰ RTC] --> LPC;
    LPC --> UART[🔌 UART Communication];
    UART --> Linux[🐧 Linux Database App]
    Linux --> CSV[📂 Attendance.csv];
    
🛠️ Hardware Requirements
🔹 LPC2148 ARM7 Microcontroller
🔹 RFID Reader & RFID Cards
🔹 LCD (16x2)
🔹 4x4 Keypad
🔹 MAX232
🔹 AT25LC512 EEPROM
🔹 USB-to-UART Converter

💻 Software Requirements
🖥️ Embedded C (Keil µVision)

⚡ Keil C Compiler
🔥 Flash Magic Programmer
🐧 Linux (for database integration & UART communication)

📂 CSV Database Format
S.No	User ID	User Name	Date	IN	OUT	Working Hours	Status
1	1001	Divya	15-09-2025	09:05	17:15	8h 10m	✅ Present

▶️ How It Works
1️⃣ System Init → LCD displays project name, loads Admin card from EEPROM
2️⃣ Card Scan →

Admin Card → Manage Users (Add/Edit/Delete)

User Card → Logs IN/OUT timings
3️⃣ Data Logging → Linux app updates .csv with user info & timings
4️⃣ Acknowledgment → System sends confirmation back to MCU
5️⃣ Reports → Working hours auto-calculated for each entry

📌 Example Workflow
👨‍💼 Admin scans card → Options displayed on LCD:
1. Add User | 2. Delete User | 3. Edit User | 4. Exit

👩‍🎓 User scans card → CSV updated with IN/OUT timestamp.

📊 Attendance tracked with working hours & status.

🔮 Future Enhancements
🌐 Web Dashboard for live attendance monitoring

☁️ Cloud-based storage (Google Sheets / Firebase)

🛡️ Dual Authentication (Biometric + RFID)

📱 Mobile App integration
