#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
/*This is a contact management system program for storing contact information
Josh Bricker HW9
Follow the prompts to add, delete, and display the contacts that you have added.
Press 4 to exit the program
*/


class Contact {
public:
    std::string name;
    std::string phoneNumber;
    std::string email;

    Contact(std::string name, std::string phoneNumber, std::string email)
        : name(name), phoneNumber(phoneNumber), email(email) {}
};
class ContactManager {
private:
    std::vector<Contact> contacts;

    void loadContacts() {
        std::ifstream file("contacts.txt");
        std::string line, name, phone, email;
        while (getline(file, line)) {
            std::istringstream iss(line);
            getline(iss, name, ',');
            getline(iss, phone, ',');
            getline(iss, email);
            contacts.emplace_back(name, phone, email);
        }
        file.close();
    }

    void saveContacts() {
        std::ofstream file("contacts.txt");
        for (const auto& contact : contacts) {
            file << contact.name << "," << contact.phoneNumber << "," << contact.email << "\n";
        }
        file.close();
    }

public:
    ContactManager() {
        loadContacts();
    }

    ~ContactManager() {
        saveContacts();
    }

    void addContact(const std::string& name, const std::string& phoneNumber, const std::string& email) {
        contacts.emplace_back(name, phoneNumber, email);
        std::cout << "Contact added successfully!\n";
    }

    void displayContacts() {
        for (const auto& contact : contacts) {
            std::cout << "Name: " << contact.name
                      << ", Phone: " << contact.phoneNumber
                      << ", Email: " << contact.email << std::endl;
        }
    }

    void deleteContact(const std::string& name) {
        auto it = std::remove_if(contacts.begin(), contacts.end(), [&](const Contact& contact) {
            return contact.name == name;
        });
        if (it != contacts.end()) {
            contacts.erase(it, contacts.end());
            std::cout << "Contact deleted successfully!\n";
        } else {
            std::cout << "Contact not found.\n";
        }
    }
};

int main() {
    ContactManager manager;
    int choice;
    std::string name, phone, email;

    do {
        std::cout << "\nContact Management System By Josh Bricker\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Delete Contact\n";
        std::cout << "3. Display Contacts\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                std::cout << "Enter name: ";
                getline(std::cin, name);
                std::cout << "Enter phone number: ";
                getline(std::cin, phone);
                std::cout << "Enter email: ";
                getline(std::cin, email);
                manager.addContact(name, phone, email);
                break;
            case 2:
                std::cout << "Enter name to delete: ";
                getline(std::cin, name);
                manager.deleteContact(name);
                break;
            case 3:
                manager.displayContacts();
                break;
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 4);

    return 0;
}