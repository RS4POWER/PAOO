#pragma once
class Car {
public:
    Car();
    Car(const char* brand, int year, double price); 
    Car(const Car& other); 
    Car(Car&& other) noexcept; 
    ~Car(); 

    void SetBrand(const char* brand);
    const char* GetBrand() const;
    void SetYear(int year);
    int GetYear() const;
    void SetPrice(double price);
    double GetPrice() const;

private:
    char* brand;
    int year;
    double price;

    void CopyData(const Car& other);
    void ReleaseData();
};