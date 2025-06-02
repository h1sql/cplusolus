Darwin Streaming Server in Visual Studio
仓库介绍
Darwin Streaming Server (DSS) 是 Apple 公司 QuickTime Streaming Server 技术的开源版本。它使用户能够通过互联网发送流媒体，利用行业标准的实时传输协议 (RTP) 和实时流式协议 (RTSP)。

作为 QuickTime Streaming Server 的开源对应产品，DSS 继承了其强大的流媒体功能，允许开发者和机构搭建自己的流媒体服务。它支持多种媒体格式，包括 MP3、MPEG-4 (如 H.264) 和 3GP 等，可以满足广泛的流媒体需求，如视频点播 (VOD)、实时直播以及网络广播。

本仓库为 macosforge/dss 的 Visual Studio 迁移版本。包含：

Visual Studio 2015
Visual Studio 2019
Visual Studio 2022
开发及调试
安装依赖
克隆并进入仓库的 installation 目录：
git clone https://github.com/chrisis58/dss-vs.git
cd dss-vs/installation
安装 Active-Perl：
ActivePerl-5.8.6.811-MSWin32-x86.msi
安装 DarwinStreamingSrvr：
DarwinStreamingSrvr5.5.5-Windows.exe
打开 DarwinStreamingSrvr 的安装目录（例如 c:\DarwinStreamingSrvr5.5.5），执行安装脚本：
cd c:\DarwinStreamingSrvr5.5.5
install.bat
按照安装脚本的提示输入管理员用户名密码即可完成安装，例如 admin:admin。

停用 DarwinStreamingSrvr 的系统服务：
services.msc
使用以上命令打开系统服务管理后，找到 Darwin Streaming Server 的项目，停止该服务，同时可以设置启动类型为手动，避免系统重启后自动启动。

将安装后的 Darwin Streaming Server 文件（例如 C:\Program Files\Darwin Streaming Server 目录）复制到 C:\Darwin Streaming Server 目录。
使用 Visual Studio 调试
以 Visual Studio 2022 为例，打开仓库的 src/WinNTSupport/StreamingServer_2022.sln 项目文件：