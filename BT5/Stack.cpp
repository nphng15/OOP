class Stack {
private:
    static const int MAX_SIZE = 100; // Kích thước tối đa của ngăn xếp
    int data[MAX_SIZE]; // Mảng lưu trữ các phần tử
    int top; // Chỉ số của phần tử đầu tiên ở đỉnh ngăn xếp

public:
    // Phương thức thiết lập
    Stack() {
        top = -1; // Khởi tạo ngăn xếp rỗng
    }

    // Kiểm tra ngăn xếp rỗng
    bool IsEmpty() {
        return top == -1;
    }

    // Kiểm tra ngăn xếp đầy
    bool IsFull() {
        return top == MAX_SIZE - 1;
    }

    // Thêm phần tử vào đỉnh ngăn xếp
    void Push(int value) {
        if (!IsFull()) {
            data[++top] = value;
        }
    }

    // Lấy phần tử từ đỉnh ngăn xếp
    int Pop() {
        if (!IsEmpty()) {
            return data[top--];
        }
        return -1; // Giá trị không hợp lệ (ngăn xếp rỗng)
    }

    // Lấy giá trị của phần tử ở đỉnh ngăn xếp
    int Top() {
        if (!IsEmpty()) {
            return data[top];
        }
        return -1; // Giá trị không hợp lệ (ngăn xếp rỗng)
    }

    // Lấy số lượng phần tử trong ngăn xếp
    int Size() {
        return top + 1;
    }
};
