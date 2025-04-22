// File: main.cpp
     // Mô tả: Giao diện dòng lệnh cơ bản cho hệ thống quản lý ví điểm thưởng
     // Input: Lựa chọn menu từ người dùng (số 0-5)
     // Output: Hiển thị menu và xử lý lựa chọn

#include <iostream>

// Hiển thị menu cơ bản
void hienThiMenu() {
    std::cout << "=== HỆ THỐNG QUẢN LÝ VÍ ĐIỂM THƯỞNG ===\n";
    std::cout << "1. Đăng nhập\n";
    std::cout << "2. Đăng ký\n";
    std::cout << "3. Thay đổi thông tin\n";
    std::cout << "4. Chuyển điểm\n";
    std::cout << "5. Xem số dư và lịch sử giao dịch\n";
    std::cout << "0. Thoát\n";
    std::cout << "Chọn: ";
}

int main() {
    int luaChon;
    do {
        hienThiMenu();
        std::cin >> luaChon;
        switch (luaChon) {
        case 1: std::cout << "Đang phát triển chức năng đăng nhập...\n"; break;
        case 2: std::cout << "Đang phát triển chức năng đăng ký...\n"; break;
        case 3: std::cout << "Đang phát triển chức năng thay đổi thông tin...\n"; break;
        case 4: std::cout << "Đang phát triển chức năng chuyển điểm...\n"; break;
        case 5: std::cout << "Đang phát triển chức năng xem số dư...\n"; break;
        case 0: std::cout << "Thoát chương trình.\n"; break;
        default: std::cout << "Lựa chọn không hợp lệ!\n";
        }
    } while (luaChon != 0);
    return 0;
}