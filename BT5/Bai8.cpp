class Queue {
private:
    static const int MAX_SIZE = 100; // Kích thước tối đa của hàng đợi
    int data[MAX_SIZE]; // Mảng lưu trữ các phần tử
    int front; // Chỉ số của phần tử đầu hàng đợi
    int rear; // Chỉ số của phần tử cuối hàng đợi

public:
    // Phương thức thiết lập
    Queue() {
        front = 0; // Khởi tạo hàng đợi rỗng
        rear = -1;
    }

    // Kiểm tra hàng đợi rỗng
    bool IsEmpty() {
        return front > rear;
    }

    // Kiểm tra hàng đợi đầy
    bool IsFull() {
        return rear == MAX_SIZE - 1;
    }

    // Thêm phần tử vào cuối hàng đợi
    void Enqueue(int value) {
        if (!IsFull()) {
            data[++rear] = value;
        }
    }

    // Lấy phần tử từ đầu hàng đợi
    int Dequeue() {
        if (!IsEmpty()) {
            return data[front++];
        }
        return -1; // Giá trị không hợp lệ (hàng đợi rỗng)
    }

    // Lấy giá trị của phần tử ở đầu hàng đợi
    int Front() {
        if (!IsEmpty()) {
            return data[front];
        }
        return -1; // Giá trị không hợp lệ (hàng đợi rỗng)
    }

    // Lấy số lượng phần tử trong hàng đợi
    int Size() {
        return rear - front + 1;
    }
};
