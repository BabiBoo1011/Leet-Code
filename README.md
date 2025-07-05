# Leet Code

## 1. Mục đích của repo

Lưu trữ lời giải LeetCode hoàn thành theo ngày.

## 2. Cấu trúc repo 📁

- Nhánh `main` lưu trữ tất cả các code đã hoàn thành.
- Các nhánh khác đặt tên theo ngày hoàn thành problem dưới định dạng `yyyy-mm-dd` và sẽ lưu trữ code đã hoàn thành trong ngày đó.
- Ví dụ: Ngày 04/07/2025 hoàn thành problem 151 và 238. Ngày 05/07/2025 hoàn thành problem 100 và 101. Vậy sẽ có nhánh `2025-07-04` lưu trữ source code của problem 151 và 238. Tương tự với nhánh `2025-07-05`.

```bash
main/
├── 2025-07-04/
│   ├── problem151.cpp
│   └── problem238.cpp
├── 2025-07-05/
│   ├── problem100.cpp
│   └── problem101.cpp
....
```

## 3. Cách sử dụng repo

- Xem các bài giải bằng cách chọn branch theo ngày.
- Toàn bộ bài giải tổng hợp nằm trong nhánh `main`.
- Các bài giải được đánh số theo **số thứ tự trên LeetCode** để dễ tìm kiếm.

## 4. Ngôn ngữ sử dụng

- Chủ yếu C++.
- Sau này có thể mở rộng thêm các ngôn ngữ khác.
