#include <iostream>
#include <string>
#include <cmath>
#include <vector>

class Dog {
public:
    // Конструктор класса
    Dog(std::string name, int age) : name(name), age(age) {}

    // Метод для вывода информации о собаке
    void displayInformation() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
    }

private:
    std::string name;
    int age;
};


class БанковскийСчет {
public:
    // Конструктор для инициализации счета балансом и номером счета
    БанковскийСчет(double начальныйБаланс, int номерСчета) : баланс(начальныйБаланс), номерСчета(номерСчета) {}

    // Метод для пополнения счета
    void пополнить(double сумма) {
        if (сумма > 0) {
            баланс += сумма;
            std::cout << "Popolneno $" << сумма << " New Balance: $" << баланс << std::endl;
        } else {
            std::cout << "Incorrect summa." << std::endl;
        }
    }

    // Метод для снятия средств со счета
    void снять(double сумма) {
        if (сумма > 0 && сумма <= баланс) {
            баланс -= сумма;
            std::cout << "Snyato $" << сумма << " so scheta. New balance: $" << баланс << std::endl;
        } else {
            std::cout << "Incorrect summa or nedostatochno sredstv" << std::endl;
        }
    }

    // Метод для получения текущего баланса
    double получитьБаланс() const {
        return баланс;
    }

    // Метод для получения номера счета
    int получитьНомерСчета() const {
        return номерСчета;
    }
private:
    // Приватные атрибуты
    double баланс;
    int номерСчета;
};


// Базовый класс "Фигура"
class Фигура {
public:
    virtual double расчетПлощади() const = 0;
};

class Прямоугольник : public Фигура {
public:
    Прямоугольник(double длина, double ширина) : длина(длина), ширина(ширина) {}
    double расчетПлощади() const override { return длина * ширина; }

private:
    double длина, ширина;
};

class Круг : public Фигура {
public:
    Круг(double радиус) : радиус(радиус) {}
    double расчетПлощади() const override { return M_PI * радиус * радиус; }

private:
    double радиус;
};

// Базовый класс "Фрукт"
class Фрукт {
public:
    virtual void получить_витамины() const {
        std::cout << "Frukt soderjit vitamini." << std::endl;
    }
};

// Подкласс "Яблоко"
class Яблоко : public Фрукт {
public:
    void получить_витамины() const override {
        std::cout << "Yabloko soderjit vitamin C" << std::endl;
    }
};

// Подкласс "Апельсин"
class Апельсин : public Фрукт {
public:
    void получить_витамины() const override {
        std::cout << "Apelsin soderjit vitamin C" << std::endl;
    }
};

// Базовый класс "Транспортное Средство"
class ТранспортноеСредство {
public:
    ТранспортноеСредство(double скорость, const std::string& тип)
        : скорость(скорость), тип(тип) {}

    virtual void информация() const {
        std::cout << "Type: " << тип << ", Speed: " << скорость << " km/h" << std::endl;
    }

private:
    double скорость;
    std::string тип;
};

// Подкласс "Автомобиль"
class Автомобиль : public ТранспортноеСредство {
public:
    Автомобиль(double скорость, const std::string& тип, int количествоДверей)
        : ТранспортноеСредство(скорость, тип), количествоДверей(количествоДверей) {}

    void информация() const override {
        ТранспортноеСредство::информация();
        std::cout << "Kolichetvo dverey: " << количествоДверей << std::endl;
    }

private:
    int количествоДверей;
};

// Подкласс "Велосипед"
class Велосипед : public ТранспортноеСредство {
public:
    Велосипед(double скорость, const std::string& тип, int количествоПередач)
        : ТранспортноеСредство(скорость, тип), количествоПередач(количествоПередач) {}

    void информация() const override {
        ТранспортноеСредство::информация();
        std::cout << "Kolichestvo peredach: " << количествоПередач << std::endl;
    }

private:
    int количествоПередач;
};

// использование наследования и композиции
class House {
public:
    int rooms;
    std::string address;
    House(int rooms, std::string address) : rooms(rooms), address(address) {}
};
class Person {
public:
    std::string name;
    int age;
    Person(std::string name, int age) : name(name), age(age) {}
};
class Resident : public Person {
public:
    House* residence;
    Resident(std::string name, int age) : Person(name, age), residence(nullptr) {}
    void setResidence(House* house) {
        residence = house;
    }
};
int main() {
    // Создание объектов класса "Собака"
    Dog dog1("Rex", 3);
    Dog dog2("Bella", 5);
    Dog dog3("Shariq", 2);

    // Вывод информации о каждой собаке
    std::cout << "Information about Dog 1:" << std::endl;
    dog1.displayInformation();
    std::cout << std::endl;

    std::cout << "Information about Dog 2:" << std::endl;
    dog2.displayInformation();
    std::cout << std::endl;

    std::cout << "Information about Dog 3:" << std::endl;
    dog3.displayInformation();
    std::cout << std::endl;

    std::cout << "\n" << std::endl;

    // Создание объекта БанковскийСчет
    БанковскийСчет мойСчет(1000.0, 123456);

    // Доступ и вывод информации о счете
    std::cout << "Number scheta: " << мойСчет.получитьНомерСчета() << std::endl;
    std::cout << "Nachalniy balance: $" << мойСчет.получитьБаланс() << std::endl;

    // Пополнение и снятие средств
    мойСчет.пополнить(500.0);
    мойСчет.снять(200.0);

    std::cout << "\n" << std::endl;

    Прямоугольник прямоугольник(5.0, 3.0);
    Круг круг(4.0);

    std::cout << "S pryamougolnika: " << прямоугольник.расчетПлощади() << std::endl;
    std::cout << "S kruga: " << круг.расчетПлощади() << std::endl;

    std::cout << "\n" << std::endl;

    // Полиморфизм для класса "Фрукт"
    Яблоко яблоко;
    Апельсин апельсин;

    std::vector<Фрукт*> фрукты = {&яблоко, &апельсин};

    for (const auto& фрукт : фрукты) {
        фрукт->получить_витамины();
    }

    std::cout << "\n" << std::endl;

    // Полиморфизм для класса "Транспортное Средство"
    Автомобиль автомобиль(120.0, "Avtomobil", 4);
    Велосипед велосипед(25.0, "Velosiped", 21);

    std::vector<ТранспортноеСредство*> транспорт = {&автомобиль, &велосипед};

    for (const auto& тс : транспорт) {
        тс->информация();
    }

    std::cout << "\n" << std::endl;

    House h(11, "Kazakova street");
    Resident r("Sergey", 18);
    r.setResidence(&h);
    std::cout << "Jitel: " << r.name << ", Vozrast: " << r.age << std::endl;
    if (r.residence != nullptr) {
        std::cout << "Jitel: " << r.residence->rooms << " komnata, " << r.residence->address << std::endl;
    }

    return 0;
}
