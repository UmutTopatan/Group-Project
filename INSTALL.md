# 🛠 Installation Guide

This guide explains how to set up and run the Student Management System. We provide two ways to get the project running: using Docker (Recommended) or manual compilation.

## 📋 Prerequisites
Before you start, make sure you have the following installed:
* **Docker & Docker Compose** (Recommended for the easiest setup)
* For Manual Build:
  * C++17 Compatible Compiler (GCC or Clang)
  * CMake 3.10 or higher
  * PostgreSQL (libpqxx library)

---

## 🚀 1. Fast Setup with Docker (Recommended)
Our project is fully containerized. You can run the entire system (App + Database) without installing any local dependencies.

1. **Clone the Repository:**
   ```bash
   git clone [https://github.com/FurkanKayaFbu/Group-Project](https://github.com/FurkanKayaFbu/Group-Project)
   cd Group-Project


Run with Docker Compose:

docker-compose up --build

(This command will pull the necessary images, set up the network, and connect the application to the database automatically.)

Official Docker Hub Images: You can also find our images directly on Docker Hub:

🗄️ [Database Service](https://hub.docker.com/repository/docker/fatmadoraneyfbu/sis-project-postgres)

🚀[Application Service](https://hub.docker.com/repository/docker/fatmadoraneyfbu/sis-project-app)


2. Manual Compilation (Alternative)
If you prefer to build the source code manually on your local machine:

A)Create Build Directory:

-> mkdir build && cd build

B)Configure with CMake:

-> cmake ..

C)Compile the Project:
->make

✅ Verification

Once the system is running, you should see the following message in the terminal: "Successful connection to the database"
This confirms that the C++ application has successfully established a handshake with the PostgreSQL container.

🆘 Troubleshooting

Port 5432 is Busy: If you already have PostgreSQL installed locally, it might conflict with Docker. Please stop your local PostgreSQL service before running docker-compose up.

Connection Delay: Sometimes the database takes a few seconds to initialize. If the app fails to connect on the first try, please wait 5-10 seconds and try again.
