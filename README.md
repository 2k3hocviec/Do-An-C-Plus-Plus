# 🎮 Mini Game Collection (C++ Console)

Bộ sưu tập **3 mini game viết bằng C++** chạy trên **console**, được xây dựng với mục tiêu:
- Luyện tư duy lập trình
- Rèn thuật toán cơ bản
- Thực hành xử lý logic, mảng, vòng lặp, hàm, OOP cơ bản

---

## 📂 Danh sách project

### 🟦 1. Game XO (Tic Tac Toe)
📁 `Game-XO`

**Mô tả:**
- Game XO (Caro 3x3) chơi trên console
- Hỗ trợ 2 người chơi
- Kiểm tra thắng – thua – hoà
- Có hiển thị bàn cờ trực quan

**Chức năng chính:**
- Nhập nước đi từ bàn phím
- Kiểm tra điều kiện chiến thắng
- Reset / chơi lại ván mới

**Kỹ thuật sử dụng:**
- Mảng 2 chiều
- Hàm
- Điều kiện & vòng lặp
- Xử lý logic game

---

### 🟩 2. Mê Cung (Maze Game)
📁 `MeCung/MeCung`

**Mô tả:**
- Game mô phỏng mê cung trên console
- Người chơi điều khiển nhân vật tìm đường ra
- Có tường, đường đi và lối thoát

**Chức năng chính:**
- Di chuyển bằng phím điều hướng
- Kiểm tra va chạm tường
- Hiển thị bản đồ mê cung

**Kỹ thuật sử dụng:**
- Mảng 2 chiều
- Xử lý tọa độ
- Thuật toán duyệt đường cơ bản
- Điều khiển bằng bàn phím

---

### 🟨 3. Student Management Project
Nhóm thực hiện: Din(C), Duy, Học, Khoa
📁 `Student-management-project`

**Mô tả:**
- Ứng dụng quản lý sinh viên chạy trên console
- Cho phép quản lý danh sách sinh viên

**Chức năng chính:**
- Thêm / xoá / sửa sinh viên
- Tìm kiếm theo mã / tên
- Hiển thị danh sách sinh viên

**Kỹ thuật sử dụng:**
- Struct / Class
- Mảng / Vector
- Menu console
- Xử lý dữ liệu cơ bản

---

## 🛠 Công nghệ sử dụng
- Ngôn ngữ: **C++**
- Môi trường: **Console (Command Line)**
- Compiler khuyến nghị:
  - GCC / MinGW
  - Visual Studio (C++)

---

## ▶️ Cách chạy chương trình
1. Mở thư mục project mong muốn  
2. Compile file `.cpp`
```bash
g++ main.cpp -o game
