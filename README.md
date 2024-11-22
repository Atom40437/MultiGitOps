# MultiGitOps

**一个高性能的多仓库Git操作工具，支持并行处理多个Git仓库的常见操作。**

---

## 功能特点

- **多线程并行处理多个Git仓库**：显著提高操作效率，适用于批量仓库管理。
- **支持常见Git操作**：
  - `clone` / `pull`
  - `checkout`
  - `fetch`
  - `push`
  - 分支操作 (`branch`)
  - 提交操作 (`commit`)
- **简单易用的命令行界面**：支持快速执行常见任务。
- **灵活的配置文件管理**：集中管理多个仓库。
- **完善的错误处理与日志记录**：实时跟踪问题，确保可靠性。
- **实时进度显示**：直观掌控操作进度。

---

## 技术栈

- **C++17**：现代化的语言特性，提高代码可读性与开发效率。
- **libgit2**：高性能的Git操作库。
- **CLI11**：轻量级命令行参数解析库。
- **spdlog**：高性能日志记录库。
- **yaml-cpp**：简洁的YAML配置解析库。
- **GoogleTest**：强大的单元测试框架。

---

## 构建要求

- **CMake 3.15+**
- **支持C++17的现代编译器**
- **libgit2开发库**
- **pkg-config**

---

## 快速开始

### 构建步骤

```bash
mkdir build && cd build
cmake ..
make
```

### 使用示例

#### 1. 通过配置文件执行操作

```bash
multigitops --config repos.yaml --action pull
```

#### 2. 直接指定仓库和操作

```bash
multigitops --repos "repo1,repo2,repo3" --action checkout --branch main
```

---

## 配置文件示例

以下是一个简单的YAML配置文件示例：

```yaml
repositories:
  - path: /path/to/repo1
    url: https://github.com/user/repo1.git
  - path: /path/to/repo2
    url: https://github.com/user/repo2.git
    default_branch: main
threads: 4
```

- **`repositories`**：列出管理的Git仓库及其相关信息。
- **`threads`**：指定并行操作线程数。

---

## 贡献指南

欢迎贡献代码！我们期待您的 Pull Request 和 Issue！在提交之前，请确保：

1. **代码符合项目的代码规范**。
2. **新功能已包含适当的测试**。
3. **提交信息清晰明确**，便于审阅与合并。

---

## 许可证

本项目使用 **MIT License**。详见 [LICENSE](./LICENSE)。

---

## 待办事项

- [ ]  基础框架搭建
- [ ]  Git操作封装
- [ ]  多线程实现
- [ ]  配置文件支持
- [ ]  命令行界面开发
- [ ]  错误处理机制
- [ ]  进度显示
- [ ]  单元测试完善

---

如果您对项目有任何建议或需求，欢迎联系！让我们一起打造高效的多仓库Git管理工具！
