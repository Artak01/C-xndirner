1.Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը, 
որը լինելու է լատինական այբուբենի մեծատառ։ Տպել էկրանին մուտքագրված տառին համապատասխանող փոքրատառը։
#include <iostream>

int main()
{
    char  sym;
    do{
        std::cout << "Enter the letter: ";
        std::cin >> sym;
        
    }while(sym < 'A' || sym > 'Z');
    sym = sym + 32;
    std::cout << sym;
   return 0;
}


2. Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը։ 
Տպել էկրանին true եթե մուտքագրված սիմվոլը թվանշան է հակառակ դեպքում տպել false:

    #include <iostream>

int main()
{
    char sym;
    int val = 0;
    std::cout << "Enter the value charecter: ";
    std::cin >> val;
    sym = val;
    if(sym >= '0' && sym <= '9'){
    std::cout << "true";
    }else
    std::cout << "false";
    
    return 0;
}

3.Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել թիվ, ստուգել և տպել՝ արդյոք թիվը զույգ է, թե կենտ:

    #include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter the number: ";
    std::cin >> num;
    if (num %2== 0){
        std::cout << num << " is couple!";
    }else
        std::cout << num << " is odd!";
    return 0;
}

4. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել տառ, ստուգել և տպել տառը բաղաձայն է, թե ձայնավոր:

    #include <iostream>

int main()
{
    char ch;
    do{
    std::cout << "Enter the letter: ";
    std::cin >> ch;
    }while((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z'));
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    std::cout << ch << " is a Vowel";
    else
    std::cout << ch << " is a Consonant";
    return 0;
}

5. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երկու թիվ, ստուգել և տպել դրանցից ամենամեծը:

    #include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
    std::cout << "Enter two number: ";
    std::cin >> num1 >> num2;
    if(num1 > num2){
        std::cout << num1 << " is big!";
    }else
        std::cout << num2 << " is small!";
    return 0;
}

6. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր, եթե երեք թվերից 2-ը հավասար են՝ տպել այդ երեք թվերից ամենամեծը։

    #include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    std::cout << "Enter three number: ";
    std::cin >> num1 >> num2 >> num3;
    if((num1 == num2 || num1 == num3 || num2 == num3) && (num1 != num2 || num2 != num3)){
        if(num1 == num2 && num1 > num3)
            std::cout << num1 << " is the biggest";
        else if(num1 < num3)
            std::cout << num3 << " is the biggest";
        else if(num1 == num3 && num1 > num2)
            std::cout << num1 << " is the biggest";
        else if(num1 < num2)
            std::cout << num2 << " is the biggest";
        else if(num2 == num3 && num2 > num1)
            std::cout << num2 << " is the biggest";
        else if(num2 < num1)
            std::cout << num1 << " is the biggest";
        }else
            std::cout << "Folse";
    return 0;
}


7. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել չորս թիվ, եթե այդ թվերի գումարը հավասար է 0-ի՝ տպել նրանցից ամենափոքրը։

    #include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    std::cout << "Enter fore number: ";
    std::cin >> num1 >> num2 >> num3 >> num4;
    if((num1 + num2 + num3 + num4) == 0){
        if ((num1 < num2) && (num1 < num3) && (num1 < num4)){
            std::cout << num1;
        }else if ((num2 < num1) && (num2 < num3) && (num2 < num4)){
            std::cout << num2;
        }else if ((num3 < num1) && (num3 < num2) && (num3 < num4)){
            std::cout << num3;
        }else if ((num4 < num1) && (num4 < num3) && (num4 < num2))
            std::cout << num4;
    }else
        std::cout << "false";
    
    return 0;
}


8. Գրել ծրագիր, որը օգտվողին թույլ է տալիս մուտքագրել տարի, ստուգում և տպում է տարին նահանջ է, թե ոչ:

    #include <iostream>

int main()
{
    int year = 0;
    std::cout << "Enter the year: ";
    std::cin >> year;
    if((year%400 == 0) || ((year % 4 == 0) && (year % 100!= 0))){
        std::cout << year << " is a leap year";
    }else 
    std::cout << "Isn't a leap year";

    return 0;
}

9.Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել երկու սիմվոլները, ստուգեք արդյոք սիմվոլները արտահայտում են նույն տառի 
    մեծատառ և փոքրատառ տեսքերը, թե ոչ։
    
#include <iostream>

int main()
{
    char ch1;
    char ch2;
    std::cout << "Enter two charecter: ";
    std::cin >> ch1 >> ch2;
    if((ch1 == (ch2 + 32)) || (ch2 == (ch1 - 32))){
        std::cout << "Yes";
    }else if((ch1 == (ch2 - 32)) || (ch2 == (ch1 + 32))){
        std::cout << "Yes";
    }else
        std::cout << "No";
    return 0;
}
