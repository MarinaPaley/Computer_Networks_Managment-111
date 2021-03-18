#pragma once
#include <string>

/**
 * \brief Класс комплексное число.
 */
class Complex
{
public:
    /**
     * \brief Конструктор по умолчанию.
     */
    Complex();
    /**
     * \brief Параметризованный конструктор.
     * \param re Действительная часть комплексного числа.
     * \param im Мнимая часть комплексного числа.
     */
    Complex(const double re, const double im);
    /**
     * \brief Конструктор копирования.
     * \param other Копируемое комплексное число.
     */
    Complex(const Complex& other);
    /**
     * \brief Деструктор
     */
    ~Complex();

    /**
     * \brief Метод, возвращающий действительную часть комплексного числа.
     * \return Действительную часть комплексного числа.
     */
    double GetRe() const;
    /**
     * \brief Метод, возвращающий действительную часть комплексного числа.
     * \return Мнимую часть комплексного числа.
     */
    double GetIm() const;

    /**
     * \brief Метод, возвращающий алгебраический вид комплексного числа.
     * \return Алгебраический вид комплексного числа в виде строки
     */
    std::string GetAlgebraView() const;
    /**
       * \brief Метод, возвращающий экспоненциальный вид комплексного числа.
       * \return Экспоненциальный вид комплексного числа в виде строки
       */
    std::string GetExponentView() const;
    /**
     * \brief Метод, возвращающий тригонометрический вид комплексного числа.
     * \return Тригонометрический вид комплексного числа в виде строки.
     */
    std::string GetTrigonometryView() const;

    /**
     * \brief Сравнивает на эквивалентность с другим комплексным числом.
     * \param other Сравниваемое комплексное число.
     * \return true, если числа эквивалентны.
     */
    bool AreEqual(const Complex& other) const;
    /**
     * \brief Метод, возвращающий комплексно сопряженное число.
     * \return Комплексно сопряженное число.
     */
    Complex& GetConjugate() const;

    /**
     * \brief Метод сложения с другим комплексным числом.
     * \param other Второе комплексное число.
     * \return Комплексное число.
     */
    Complex& Add(const Complex& other) const;
    /**
     * \brief Метод вычитания с другим комплексным числом.
     * \param other Второе комплексное число.
     * \return Комплексное число.
     */
    Complex& Sub(const Complex& other) const;
    /**
     * \brief Метод деления на другое комплексное число.
     * \param other Второе комплексное число.
     * \return Комплексное число.
     */
    Complex& Div(const Complex& other) const;
    /**
     * \brief Метод умножения  на другое комплексное число.
     * \param other Второе комплексное число.
     * \return Комплексное число.
     */
    Complex& Mul(const Complex& other) const;

private:
    /**
     * \brief Действительная часть комплексного числа.
     */
    double Re;
    /**
     * \brief Мнимая часть комплексного числа.
     */
    double Im;
};
