// 查看系统是否安装git
git

// 设置git用户名和邮箱
git config --global user.name "My Name"
git config --global user.email "email@example.com"

// 查看git用户名和邮箱
git config --list

// 初始化git版本库
git init

// 把文件修改添加到暂存区
git add

// 把所有文件修改添加到暂存区
git add -A

// 强制添加
git add -f

// 把暂存区的内容提交到当前分支
git commit -m "common"

// 查看版本库当前状态
git status

// 查看文件修改内容(与暂存区比较）
git diff <filename>
// 查看文件修改内容(与版本库比较）
git diff HEAD -- <filename>
// 对比暂存区和最近一次提交的不同
git diff --cached

// 显示版本库提交历史
git log
git log --pretty=oneline
git log --graph
git log --graph --pretty=oneline --abbrev-commit

// 显示版本库命令历史
git reflog

// 回退到上一个版本
git reset --hard HEAD^
git reset --hard HEAD~1
git reset --hard <commit id>

// 用暂存区版本替换工作区的版本
git checkout -- <filename>

git checkout . #

// 撤销暂存区的修改
git reset HEAD <filename>

// 删除文件
git rm <filename>

// 检查gitignore
git check-ignore -v <filename>

// 创建SSH
ssh-keygen -t rsa -C "youremail@example.com"

// 与远程仓库关联
git remote add origin git@github.com:<username>/<dirname>.git

// 把本地库的所有内容推送到远程库上
git push -u origin master
git push origin master

// 从远程库克隆一个本地库
git clone git@github.com:<username>/<dirname>.git

// 克隆单分支
git clone git@github.com:<username>/<dirname>.git -b <branchname> --single-branch

// 显示分支
git branch

// 创建分支
git branch <branchname>

// 切换分支
git checkout <branchname>

// 创建并切换分支
git checkout -b <branchname>

// 创建远程分支到本地
git checkout -b <branchname> origin/<branchname>

// 合并指定分支到当前分支
git merge <branchname>
git merge --no-ff -m "comment" <branchname>

// 删除分支
git branch -d <branchname>
git branch -D <branchname>

// 保存工作区状态
git stash

// 查看保存列表
git stash list

// 恢复工作区状态、删除stash
git stash pop

git stash apply
git stash apply stash@{0}
git stash drop

// 查看远程主机
git remote
// 查看远程主机地址
git remote -v
// 查看远程主机信息
git remote show origin

// 指定本地分支与远程分支的链接
git branch --set-upstream <branchname> origin/<branchname>

// 抓取分支
git pull

// 查看远程分支
git branch -r
git branch -a

// 拉取远程分支
git pull origin <branchname>

// 推送远程分支
git push origin <branchname>

// 删除远程分支
git push origin -d <branchname>

// 修改单个文件默认大小
git config --global http.postBuffer 524288000
