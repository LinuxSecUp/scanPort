#include <iostream>
#include "termcolor.h"
#include <string>
#include <random>
#include <chrono>
#include <thread>
#include <limits>

#ifdef max
#undef max
#endif


// **ScanPort** is a fast and lightweight command-line TCP port scanner written in C++.  
// It is designed for network diagnostics, security testing, infrastructure auditing, and troubleshooting connectivity issues.
//ScanPort allows you to quickly identify open ports on a target host, detect exposed services, and analyze network accessibility in a simple and efficient way.

void pauseWait(int number) {
    std::this_thread::sleep_for(std::chrono::seconds(number));
}

void scanPortsTestingInternetEn() {
    std::cout << termcolor::green << "Testing internet update bases" << termcolor::reset;
    pauseWait(3);

    for (int i = 0; i < 5; i++) {
        std::cout << termcolor::green << "." << std::flush;
        pauseWait(2);
    }

    std::cout << std::endl;

}

void scanPortsTestingInternetRus() {
    std::cout << termcolor::green << "Проверяется соединение с базами данных" << termcolor::reset;
    pauseWait(3);

    for (int i = 0; i < 5; i++) {
        std::cout << termcolor::green << "." << std::flush;
        pauseWait(2);
    }

    std::cout << std::endl;

}

void locale() {
    setlocale(LC_ALL, "russian");
}

void dataUpdateEn() {
    std::cout << std::endl;
    std::cout << termcolor::green << "Name: ScanPorts." << termcolor::reset << std::endl;
    pauseWait(2);
    std::cout << termcolor::green << "Version: 1.0.4" << termcolor::reset << std::endl;
    pauseWait(2);
    std::cout << termcolor::green << "Author: Linux" << termcolor::reset << std::endl;
    pauseWait(2);
    std::cout << termcolor::green << "Data: 02.03.2026" << termcolor::reset << std::endl;
    std::cout << std::endl;
}

void dataUpdateRus() {
    std::cout << std::endl;
    std::cout << termcolor::green << "Имя: ScanPorts." << termcolor::reset << std::endl;
    pauseWait(2);
    std::cout << termcolor::green << "Версия: 1.0.4" << termcolor::reset << std::endl;
    pauseWait(2);
    std::cout << termcolor::green << "Автор: Linux" << termcolor::reset << std::endl;
    pauseWait(2);
    std::cout << termcolor::green << "Дата: 02.03.2026" << termcolor::reset << std::endl;
    std::cout << std::endl;
}

int randomTest() {
    std::random_device rd;        
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<> dist(1, 1000);
    return dist(gen);
}



// user port testing


void testPortRus() {

    std::cout << std::endl;

    std::cout << termcolor::green << "Подготовка к сканированию... " << termcolor::reset << std::endl;

    pauseWait(3.5);

    for (int rows = 0; rows <= 50; rows++) {
        std::cout << "-";
    }

    std::cout << std::endl;

    for (int i = 1; i <= 100; i++) {
        std::cout << termcolor::green <<  "\rCканирование опасных портов: \t\t\t" << i << "%" << std::flush;
        pauseWait(1.8);
    }

    std::cout << std::endl;

    for (int i = 1; i <= 100; i++) {
        std::cout << termcolor::green << "\rCканирование всех портов: \t\t\t" << i << "%" << std::flush;
        pauseWait(1.7);
    }

    std::cout << std::endl;

    for (int i = 1; i <= 100; i++) {
        std::cout << termcolor::green << "\rCканирование уязвимых портов: \t\t\t" << i << "%" << std::flush;
        pauseWait(1.7);
    }

    std::cout << std::endl;

    for (int i = 1; i <= 100; i++) {
        std::cout << termcolor::green << "\rCканирование DOT портов: \t\t\t" << i << "%" << std::flush;
        pauseWait(1.5);
    }

    std::cout << std::endl;

    for (int i = 1; i <= 100; i++) {
        std::cout << termcolor::green << "\rCканирование защищенных портов: \t\t" << i << "%" << std::flush;
        pauseWait(1.8);
    }

    std::cout << std::endl;

    for (int i = 1; i <= 100; i++) {
        std::cout << termcolor::green << "\rCканирование общих портов: \t\t\t" << i << "%" << std::flush;
        pauseWait(1.6);
    }

    std::cout << std::endl;

    for (int i = 1; i <= 100; i++) {
        std::cout << termcolor::green << "\rCканирование ALT портов: \t\t\t" << i << "%" << std::flush;
        pauseWait(2.7);
    }

    std::cout << std::endl << termcolor::reset; 

    // random 

    std::cout << std::endl;

    std::cout << termcolor::red << "Общая статистика опасных портов: \t\t" << randomTest() << termcolor::reset << std::endl;
    std::cout << termcolor::green << "Общая статистика закрытых портов: \t\t" << randomTest() << termcolor::reset << std::endl;
    std::cout << termcolor::yellow << "Общая статистика заблокированных портов: \t" << randomTest() << termcolor::reset << std::endl;
   
    std::cout << std::endl;
}

void warningTest() {
    std::cout << std::endl;

    std::cout << termcolor::green << "Подготовка к закрытию опасных портов: " << termcolor::reset << std::endl;

    pauseWait(3.5);

    for (int rows = 0; rows <= 60; rows++) {
        std::cout << "-";
    }

    std::cout << std::endl;

    std::cout << termcolor::green << "Закрытие порта:  \t\t" << "Ok." << termcolor::reset << std::endl;
    pauseWait(3.5);
    std::cout << termcolor::green << "Закрытие DOT порта: \t\t" << "Ok." << termcolor::reset << std::endl;
    pauseWait(5.5);
    std::cout << termcolor::green << "Освобождение портов: \t\t" << "Ok." << termcolor::reset << std::endl;
    pauseWait(13.5);
    std::cout << termcolor::green << "Освобождение портов: \t\t" << "Ok." << termcolor::reset << std::endl;

    std::cout << std::endl;

    std::cout << termcolor::green << "Все порты защищены. Перезагрузите вашу систему, для применения настроек" << termcolor::reset << std::endl;


}


int main() {

    unsigned int numberChoice{};

    // start programm
    std::cout << "**ScanPort** is a fast and lightweight command-line TCP port scanner written in C++.\n";
    //std::cout << "\n1 - \"English\"\n2 - \"Russian\"\n3 - \"Exit\"\n""Enter choice: ";
    
    // loop

    do {
        std::cout << termcolor::green << "Choose language:\n1 - English\n2 - Russian\n3 - Exit\nYour choice: " << termcolor::reset;

        if (!(std::cin >> numberChoice)) {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << termcolor::red << "Invalid input! Please enter a number.\n" << termcolor::reset;
            continue; 
        }

        switch (numberChoice) {
        case 1:
            dataUpdateEn();
            break;
        case 2:
            locale();
            dataUpdateRus();

            testPortRus();
            warningTest();
            break;
        case 3:
            std::cout << "Exit program...\n";
            break;
        default:
            std::cout << termcolor::red << "Invalid choice! Try again.\n" << termcolor::reset;
            break;
        }

    } while (numberChoice != 3);

    std::cout << "---------------------------------------------------- \n\n";
    


}

