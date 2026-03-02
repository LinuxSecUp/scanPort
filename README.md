# ScanPort

**ScanPort** is a fast and lightweight command-line TCP port scanner written in C++.  
It is designed for network diagnostics, security testing, infrastructure auditing, and troubleshooting connectivity issues.

ScanPort allows you to quickly identify open ports on a target host, detect exposed services, and analyze network accessibility in a simple and efficient way.

> ⚠️ Use this tool responsibly. Only scan hosts and networks you own or have explicit permission to test.

---

## Features

- 🚀 Fast TCP port scanning
- 🎯 Scan a single host or multiple targets
- 🔢 Custom port range selection
- ⏱ Configurable timeout
- 🧵 Optional multithreading support
- 📄 Clean and readable console output
- 💾 Optional result export to file
- 🐍 Works with Python 3.x

---

## Installation

Clone the repository:

```bash
git clone https://github.com/yourusername/scanport.git
cd scanport
```

Install dependencies (if required):

```bash
pip install -r requirements.txt
```

Or simply run with Python 3 if no external libraries are used.

---

## Usage

Basic command:

```bash
python scanport.py --host <target_host> --ports <port_range>
```

### Required Parameters

- `--host`  
  Target hostname or IP address  
  Example: `192.168.1.1` or `example.com`

- `--ports`  
  Port or port range  
  Examples:
  - `80`
  - `22,80,443`
  - `1-1024`

---

## Optional Parameters

- `--timeout <seconds>`  
  Set connection timeout (default: 1 second)

- `--threads <number>`  
  Number of concurrent threads for faster scanning (default: 10)

- `--output <file>`  
  Save scan results to a file

- `--verbose`  
  Enable detailed output

---

## Examples

### Scan a single port

```bash
python scanport.py --host 192.168.1.1 --ports 80
```

### Scan a port range

```bash
python scanport.py --host 192.168.1.1 --ports 20-100
```

### Scan multiple specific ports

```bash
python scanport.py --host example.com --ports 22,80,443
```

### Scan with custom timeout and threads

```bash
python scanport.py --host 192.168.1.1 --ports 1-1024 --timeout 2 --threads 50
```

### Save results to a file

```bash
python scanport.py --host 192.168.1.1 --ports 1-1024 --output results.txt
```

---

## How It Works

ScanPort attempts to establish TCP connections to specified ports on the target host.  
If a connection is successfully established within the defined timeout, the port is marked as **open**. Otherwise, it is considered **closed or filtered**.

The tool uses socket connections and optional multithreading to increase scanning speed.

---

## Output Example

```
[+] Scanning host: 192.168.1.1
[+] Port 22 is OPEN
[+] Port 80 is OPEN
[-] Port 23 is CLOSED
```

---

## Use Cases

- Network troubleshooting
- Checking firewall rules
- Detecting exposed services
- Basic security auditing
- Lab environment testing

---

## Requirements

- Python 3.7+
- Works on Linux, macOS, and Windows

---

## Legal Disclaimer

ScanPort is intended for educational and authorized security testing purposes only.  
The developer is not responsible for misuse or illegal activities performed with this tool.

---

## Contributing

Pull requests are welcome.  
If you would like to improve ScanPort, feel free to fork the repository and submit changes.

---

## License

Specify your license here (e.g., MIT License).
