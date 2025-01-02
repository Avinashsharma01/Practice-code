`Note` :- if you use -03 or -02 flag while compiling the c and c++ then code will be execute very fast

### 1.C run code using CLI

`gcc Ctest.c -o Ctest
./Ctest`

### 2.C++ run code using CLI

`g++ Cpptest.c++ -o Cpptest
./Cpptest`

### 3.Java run code using CLI

`javac Test.java`
`java Test`

### 4.C# run code using CLI

`dotnet Test.cs`
`dotnet run`

### 5. javaScript code run using CLI

`node test.js`

### 6. Go code run using CLI

`go build main.go
./main`

### 7.Kotlin code run using CLI

`kotlinc kotlinTest.kt -include-runtime -d kotlinTest.jar`

`java -jar kotlinTest.jar`

### 8.Python code run using CLI

`python3 PYtest.py`

### 9.Rust Code run using CLI

`rustc rusttest.rs`
`./rusttest`

---

### We can Also measure code time execution with

1. time ./test_c
2. time ./test_cpp
3. time java Test
4. time node test.js
5. time python3 test.py
6. time ./test_cs.exe
7. time go run test.go
8. time java -jar test.jar

---

The speed of a programming language can vary depending on the context in which it's used. Here's a comparison of the languages you mentioned:

### **1. C**

-   **Speed**: Very fast.
-   **Why**: It's a low-level language with minimal runtime overhead. Code is compiled directly to machine code, making it highly efficient.
-   **Use Case**: System programming, embedded systems, performance-critical applications.

---

### **2. C++**

-   **Speed**: Comparable to C, slightly slower due to additional features like object-oriented programming.
-   **Why**: Combines low-level access with advanced features. Highly optimized compilers like GCC and Clang boost performance.
-   **Use Case**: Game development, real-time systems, high-performance computing.

---

### **3. Java**

-   **Speed**: Moderate to fast.
-   **Why**: Uses Just-In-Time (JIT) compilation for better performance, though the Java Virtual Machine (JVM) adds some overhead.
-   **Use Case**: Web applications, enterprise systems, Android development.

---

### **4. JavaScript**

-   **Speed**: Slower than C or C++, but very fast in web environments.
-   **Why**: It's an interpreted language, but modern engines like Google's V8 use JIT compilation for optimization.
-   **Use Case**: Web development, client-side scripting.

---

### **5. Python**

-   **Speed**: Slower than compiled languages.
-   **Why**: It’s interpreted, with significant overhead for its dynamic nature and garbage collection.
-   **Use Case**: Data analysis, machine learning, scripting, web development.

---

### **6. C#**

-   **Speed**: Similar to Java, moderate to fast.
-   **Why**: Compiled to Intermediate Language (IL) and executed by the .NET runtime. JIT optimizations improve performance.
-   **Use Case**: Windows applications, game development (Unity), enterprise systems.

---

### **7. Go**

-   **Speed**: Very fast, close to C/C++.
-   **Why**: Compiled to native machine code and designed for concurrency and performance.
-   **Use Case**: Cloud services, system programming, web servers.

---

### **8. Kotlin**

-   **Speed**: Similar to Java, moderate to fast.
-   **Why**: Runs on the JVM with the same optimizations as Java.
-   **Use Case**: Android development, backend services.

---

### **Summary: Fastest to Slowest**

1. **C**
2. **C++**
3. **Go**
4. **C# / Java**
5. **Kotlin**
6. **JavaScript**
7. **Python**

### **Conclusion**

-   For **raw performance**, C, C++, and Go are the fastest.
-   For ease of use and fast development, Java, C#, Kotlin, and JavaScript are great choices.
-   Python is slower but excels in simplicity and versatility for non-performance-critical applications.

---

```

```
