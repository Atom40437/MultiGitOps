#pragma once

#include <string>
#include <vector>
#include <memory>

namespace multigitops {

class GitManager {
public:
    GitManager();
    ~GitManager();

    // 禁用拷贝
    GitManager(const GitManager&) = delete;
    GitManager& operator=(const GitManager&) = delete;

    // Git 操作接口
    bool Clone(const std::string& url, const std::string& path);
    bool Pull(const std::string& repoPath);
    bool Checkout(const std::string& repoPath, const std::string& branch);
    bool Fetch(const std::string& repoPath);
    bool Push(const std::string& repoPath);

private:
    class Impl;
    std::unique_ptr<Impl> pImpl_;  // PIMPL 模式
};

} // namespace multigitops