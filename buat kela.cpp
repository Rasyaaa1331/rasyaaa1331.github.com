#include <iostream>
#include <thread>
#include <chrono>

bool validateLogin(const std::string& username, const std::string& password) {
    return (username == "Rasya" && password == "keyla");
}

int main() {
    std::string nama, username, password;

    std::cout << "Masukkan nama mu: ";
    std::cin >> nama;

    while (true) {
        std::cout << "Halo, " << nama << "! Silahkan Masukkan Username Dan Password!..\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));

        std::cout << "Username: ";
        std::cin >> username;

        std::cout << "Password: ";
        std::cin >> password;

        if (validateLogin(username, password)) {
            std::cout << "Selamat datang, " << nama << "! Kamu berhasil masuk ke halaman hatiku. 😉\n";
            break;
        } else {
            std::cout << "Ups, " << nama << ". Kayaknya de belum tau pwnya. 😅\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
            std::cout << "Ayo coba lagi 😅\n";
        }
    }

    while (true) {
        std::cout << "de sayang acaa ga?" << std::endl;
        std::cout << "Sayang/Gaaa" << std::endl;

        std::string jawaban;
        std::cin >> jawaban;

        if (jawaban == "sayang") {
            std::cout << "____________________██████\n"
             "_________▓▓▓▓____█████████\n"
             "__ Ƹ̵̡Ӝ̵̨̄Ʒ▓▓▓▓▓=▓____▓=▓▓▓▓▓\n"
             "__ ▓▓▓_▓▓▓▓░●____●░░▓▓▓▓\n"
             "_▓▓▓▓_▓▓▓▓▓░░__░░░░▓▓▓▓\n"
             "_ ▓▓▓▓_▓▓▓▓░░♥__♥░░░▓▓▓\n"
             "__ ▓▓▓___▓▓░░_____░░░▓▓\n"
             "▓▓▓▓▓____▓░░_____░░▓\n"
             "_ ▓▓____ ▒▓▒▓▒___ ████\n"
             "_______ ▒▓▒▓▒▓▒_ ██████\n"
             "_______▒▓▒▓▒▓▒ ████████\n"
             "_____ ▒▓▒▓▒▓▒_██████ ███\n"
             "_ ___▒▓▒▓▒▓▒__██████ _███\n"
             "_▓▓X▓▓▓▓▓▓▓__██████_ ███\n"
             "▓▓_██████▓▓__██████_ ███\n"
             "▓_███████▓▓__██████_ ███\n"
             "_████████▓▓__██████ _███\n"
             "_████████▓▓__▓▓▓▓▓▓_▒▒\n"
             "_████████▓▓__▓▓▓▓▓▓\n"
             "_████████▓▓__▓▓▓▓▓▓\n"
             "__████████▓___▓▓▓▓▓▓\n"
             "_______▒▒▒▒▒____▓▓▓▓▓▓\n"
             "_______▒▒▒▒▒ _____▓▓▓▓▓\n"
             "_______▒▒▒▒▒_____ ▓▓▓▓▓\n"
             "_______▒▒▒▒▒ _____▓▓▓▓▓\n"
             "________▒▒▒▒______▓▓▓▓▓\n"
             "________█████____█████\n"
             "_'▀█║────────────▄▄────────────▄──▄_\n"
             "──█║───────▄─▄─█▄▄█║──────▄▄──█║─█║\n"
             "──█║───▄▄──█║█║█║─▄║▄──▄║█║─█║█║▄█║\n"
             "──█║──█║─█║█║█║─▀▀──█║─█║█║─█║─▀─▀\n"
             "──█║▄║█║─█║─▀───────█║▄█║─▀▀\n"
             "──▀▀▀──▀▀────────────▀─█║\n"
             "───────▄▄─▄▄▀▀▄▀▀▄──▀▄▄▀\n"
             "──────███████───▄▀\n"
             "──────▀█████▀▀▄▀\n"
             "────────▀█▀\n";

            std::cout << "Aaaa,Acaa Sayang dede><" << std::endl;
            break;
        } else if (jawaban == "Gaaa") {
            std::cout << "Aaaaaa, Kenapa gaa sayang aca😠" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            continue;
        } else {
            std::cout << "Input tidak valid. Silakan masukkan 'Sayang' atau 'Gaaa'." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
    }

    return 0;
}