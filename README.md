# FastCache 🚀

**FastCache** is a fast, in-memory cache similar to Redis, written in C++. Perfect for high-performance applications requiring low latency data access. This project leverages the power of C++ to provide efficient memory usage and optimized performance.

## Features 💡

- **Low Latency**: High-speed data retrieval for real-time applications.
- **Efficient Memory Usage**: Smart memory management to handle large volumes of data.
- **Performance Optimized**: Written in C++ to leverage its strengths in speed and efficiency.
- **Easy to Use API**: Simple and intuitive interface for quick integration.

## Strengths of Using C++ 🔧

- **High Performance**: C++ is known for its execution speed and system-level resource management, making it ideal for developing high-performance applications.
- **Memory Management**: Direct control over memory allocation and deallocation provides an efficient way to handle large datasets.
- **Concurrency**: C++ supports multithreading, allowing FastCache to handle multiple requests simultaneously, increasing throughput.
- **Standard Library**: Utilizes powerful data structures from the C++ Standard Library for optimal performance.

## Data Structures Used 🗃️

FastCache uses a combination of efficient data structures to ensure fast data access and modification:

- **Hash Tables**: For constant time complexity (O(1)) average-case lookups, insertions, and deletions. This is the primary data structure used for storing key-value pairs.
- **Doubly Linked Lists**: Used in conjunction with hash tables for implementing Least Recently Used (LRU) cache eviction policies. This helps in efficiently managing cache entries and ensuring that the most frequently accessed data remains in memory.
- **Binary Search Trees (BSTs)**: Used for ordered data storage, allowing range queries and ordered traversal operations.

## Getting Started 🚀

### Prerequisites

- A C++ compiler that supports C++11 or later.
- CMake for building the project.
