// 修改Xcode路径
sudo xcode-select -switch /Applications/Xcode.app/Contents/Developer

// 查看xcode的版本号和build的版本号
xcodebuild -version

// 显示当前系统的SDK、及其版本
xcodebuild -showsdks

// 先 cd 到工程目录下执行此命令 显示target Schemes 等
xcodebuild -list
