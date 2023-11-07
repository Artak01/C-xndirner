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


11. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ինդեքս և տպել էկրանին Ֆիբոնաչիի հաջորդականության առաջին տարրից մինչև 
    մուտքագրված ինդեքսին համապատասխանող տարրը:

    #include <iostream>

int main(){

    int num = 0;
    int l = 1;
    int r = 1;
    int tmp = l + r;
    

    std::cout << "Enter the number: ";
    std::cin >> num;
   
   int arr[num];
    arr[0] = arr[1] = 1;

    if (num == 1){
        std::cout << "1";
    } 
    else{
        for (int i = 2; i != num ; ++i){
            l = r;
            r = tmp;
            arr[i] = tmp;
            tmp = r + l;
        }   
    
        for(int i = 0; i < num; ++i){
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

12.Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և հաշվել այդ թվի թվանշանների գումարը։


    #include <iostream>

int main()
{
    int num = 0;
    int sum = 0;
    std::cout << "Enter the number: ";
    std::cin >> num;
    
    int x = num;
    while(x != 0){
        sum+=x%10;
        x = x/10;
    }
    std::cout << sum;
    
    return 0;
}


13.Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և էկրանին տպել մուտքագրված թվի reverse տարբերակը (Օր․՝ 1234 -> 4321)։

    #include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter the number: ";
    std::cin >> num;
    int rev = 0;
    while(num != 0){
        rev = rev * 10 + num%10;
        num = num/10;
    }
    std::cout << rev;
    return 0;
}



14.Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և պարզել արդյո՞ք թիվը պարզ է, թե ոչ։

    int num;
    bool parz;
    std::cout << "enter the number: ";
    std::cin >> num;
    for (int i = 2; i < num; i++)
    {
      if(num % i == 0)
      {
          parz = false;
          break;
      }
      else
          parz = true;
    }
    if (parz) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

15.Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և պարզել արդյո՞ք թիվը 3֊ի աստիճան է, թե ոչ։

    #include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num <= 0) {
        std::cout << num << " is not a power of 3." << std::endl;
    } else {
        while (num % 3 == 0) {
            num /= 3;
        }
        if (num == 1) {
            std::cout << "The entered number is a power of 3." << std::endl;
        } else {
            std::cout << "The entered number is not a power of 3." << std::endl;
        }
    }
    return 0;
}

16. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և պարզել արդյո՞ք թվի երկուական տեսքի ավագ և կրտսեր բիթերը համընկնում են, թե ոչ։








    17.Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել 0-ից 7 թվերից որևէ մեկը, և տպել էկրանին մուտքագրված թվին համապատասխանող 
    շաբաթվա օրը։


    #include <iostream>

int main()
{
    int day;
    
    do{
        std::cout << "Enter a number: ";
        std::cin >> day;
    }while(day < 0 || day >= 7);
    switch (day) {
  case 1:
    std::cout << "Monday";
    break;
  case 2:
    std::cout << "Tuesday";
    break;
  case 3:
    std::cout << "Wednesday";
    break;
  case 4:
    std::cout << "Thursday";
    break;
  case 5:
    std::cout << "Friday";
    break;
  case 6:
    std::cout << "Saturday";
    break;
  case 7:
    std::cout << "Sunday";
    break;
    }
    return 0;
}


Խնդիր 7. Զանգվածի հակադարձում
Ստեղծեք ծրագիր, որը հակադարձում է ամբողջ թվային զանգվածի տարրերը և տպում հակադարձ զանգվածը:


    #include <iostream>
void find(int* arr, int size){
    for(int i = 0; i < 5/2; ++i){
        std::swap(arr[i],  arr[5-1-i]);         
    }
}

void print(int* arr, int size){
    for(int i = 0; i < 5; ++i){
        std::cout << arr[i] << " ";     
    }    
    std::cout << std::endl;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    print(arr, 5);
    find(arr, 5);
    print(arr, 5);
    return 0;
}



Խնդիր 8. Զանգվածի կրկնօրինակման ստուգում
Մշակեք ծրագիր, որը ստուգում է, թե արդյոք կան կրկնվող արժեքներ ամբողջ թվային զանգվածում: 
Տպեք հաղորդագրություն, որը ցույց է տալիս կրկնօրինակների առկայությունը, թե ոչ:

    #include <iostream>
void find(int* arr, int size){
    for(int i = 0; i < 4; ++i){
        for(int j = i + 1; j < 5; ++j){
            if (arr[i] == arr[j]){
                std::cout << arr[i] << " ";         
            }
        }
    }
}


int main()
{
    int arr[5] = {3,5,3,8,5};
    find(arr, 5);
    return 0;
}


Խնդիր 9. Պարզ թվեր զանգվածում
Գրեք ծրագիր, որը նույնականացնում և տպում է բոլոր պարզ թվերը տվյալ ամբողջ թվով զանգվածում:

    #include <iostream>
bool find(int n){
    for(int i = 2; i < n/2; ++i){
        if (n % i){
            return 0;
        }
    }
    return 1;
}


int main()
{
    int arr[5] = {3,5,3,8,5};
    for(int i = 0; i < 5; ++i){
        if (find(arr[i])){
        std::cout << arr[i] << "  ";
        }
    }
    return 0;
}



Խնդիր 11. Գտնել կենտ կամ զույգ թվեր
Գրեք ծրագիր, որը ամբողջ թվով զանգվածը բաժանում է երկու զանգվածի. մեկը կենտ թվեր է պարունակում, մյուսը՝ զույգ թվեր։ 
    Տպեք երկու զանգվածները:

    #include <iostream>

void scan(int*, int);
void print(int*, int);
int even(int*, int);
void creat(int*, int, int);
void creat1(int*, int, int);

int main() {
    
    int size = 0;
    std::cout << "Enter the size: ";
    std::cin >> size;
    int* arr = new int[size];
    scan(arr, size);
    print(arr, size);
    int ev = even(arr, size);
    int odd = size - ev;
    creat(arr, size, ev);
    creat1(arr, size, odd);
    
    delete[] arr;
    return 0;
}

void scan(int* arr, int size){
    for(int i = 0; i < size; ++i){
        arr[i] = rand()%10;
    }
}

void print(int* arr, int size){
    for(int i = 0; i < size; ++i){
        std::cout << arr[i] << " ";
    }
     std::cout << std::endl;
}

int even(int* arr, int size){
    int k = 0;
    for(int i = 0; i < size; ++i){
        if (arr[i] % 2 == 0){
            k++;
        }
    }
    return k;
}

void creat(int* arr, int size, int ev){
    int* arr1 = new int[ev];
    int k = 0;
    for(int i = 0; i < size; ++i){
        if (arr[i] % 2 == 0){
            arr1[k++] = arr[i];
        }
    }
    print(arr1, ev);
    delete[] arr1;
}

void creat1(int* arr, int size, int odd){
    int* arr2 = new int[odd];
    int k = 0;
    for(int i = 0; i < size; ++i){
        if (arr[i] % 2 != 0){
            arr2[k++] = arr[i];
        }
    }
    print(arr2, odd);
    delete[] arr2;
}


Problem 12: Second Largest Element
Create a program that finds and prints the second largest element in an integer array.

    #include <iostream>

void scan(int*, int);
void print(int*, int);
int smax(int*, int);

int main() {
    
    int size = 0;
    std::cout << "Enter the size: ";
    std::cin >> size;
    int* arr = new int[size];
    scan(arr, size);
    print(arr, size);
    int x = smax(arr, size);
    std::cout << "Secnd max: " << x;
    delete[] arr;
    return 0;
}

void scan(int* arr, int size){
    for(int i = 0; i < size; ++i){
        arr[i] = rand()%10;
    }
}

void print(int* arr, int size){
    for(int i = 0; i < size; ++i){
        std::cout << arr[i] << " ";
    }
     std::cout << std::endl;
}

int smax(int* arr, int size){
    int max2 = arr[0];
    int max1 = arr[0];
    for(int i = 0; i < size; ++i){
        if (max1 < arr[i]){
            max2 = max1;
            max1 = arr[i];
        }
    }
    return max2;
}


Խնդիր 4. Մատրիցային փոխադրում
Մշակեք ծրագիր, որը փոխադրում է տվյալ մատրիցը: Մատրիցայի փոխադրումը նշանակում է տողերի փոխանակում սյունակներով: Օ
    գտատիրոջը հուշեք մուտքագրել մատրիցա, տեղափոխել այն և տպել փոխադրված մատրիցը:

#include <iostream>

void scan(int**, int, int);
void print(int**, int, int);
int** chenge(int**, int, int);


int main() {
    
    int n = 0;
    int m = 0;
    std::cout << "Enter the n and m: ";
    std::cin >> n >> m;
    int** mat = new int*[n];
    for(int i = 0; i < n; ++i){
        mat[i] = new int[m];
    }
    scan(mat, n, m);
    print(mat, n, m);
    mat = chenge(mat, n, m);
    print(mat, m, n);
    
    for(int i = 0; i < n; ++i){
        delete[] mat[i];
    }
    delete[] mat;
    return 0;
}

void scan(int** mat, int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            mat[i][j] = rand()%10;
        }
    }
}

void print(int** mat, int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
           std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int** chenge(int** mat, int n, int m){
    int** mat1 = new int*[m];
    for(int i = 0; i < m; ++i){
        mat1[i] = new int[n];
    }
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            mat1[j][i] = mat[i][j];
        }
    }
    return mat1;
}

Խնդիր 5. Ինքնության մատրիցայի ստուգում
Գրեք C++ ծրագիր, որը ստուգում է՝ արդյոք տրված քառակուսի մատրիցը նույնական մատրիցա է: 
    Ինքնության մատրիցը քառակուսի մատրից է, որի անկյունագծով միավորներն են, իսկ այլուր՝ զրոները:

#include <iostream>

// Function to check if a matrix is an identity matrix
bool isIdentityMatrix(int matrix[][100], int n) {
    // Check if the matrix is square
    for (int i = 0; i < n; i++) {
        if (n != 100 && matrix[i][i] != 1) {
            return false;
        }
        for (int j = 0; j < n; j++) {
            if (i != j && matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> n;

    int matrix[100][100];

    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    bool isIdentity = isIdentityMatrix(matrix, n);

    if (isIdentity) {
        std::cout << "The matrix is an identity matrix." << std::endl;
    } else {
        std::cout << "The matrix is not an identity matrix." << std::endl;
    }

    return 0;
}


Խնդիր 10. Մատրիցային տողերի տեսակավորում
Գրեք C++ ծրագիր, որը տեսակավորում է մատրիցայի տողերը:


    #include <iostream>

void scan(int**, int, int);
void print(int**, int, int);
void sort(int**, int, int);
void sort_r(int*, int);

int main() {
    
    srand(time(NULL));
    int n = 0;
    int m = 0;
    std::cout << "Enter the n and m: ";
    std::cin >> n >> m;
    int** mat = new int*[n];
    for(int i = 0; i < n; ++i){
        mat[i] = new int[m];
    }
    scan(mat, n, m);
    print(mat, n, m);
    sort(mat, n, m);
    print(mat, n, m);
    
    
    for(int i = 0; i < n; ++i){
        delete[] mat[i];
    }
    delete[] mat;
    return 0;
}

void scan(int** mat, int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            mat[i][j] = rand()%10;
        }
    }
}

void print(int** mat, int n, int m){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
           std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void sort(int** mat, int n, int m){
    for(int i = 0; i < n; ++i){
         sort_r(mat[i], m);
    }
}

void sort_r(int* mat, int m){
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (mat[j] < mat[j + 1]) {
                std::swap(mat[j], mat[j + 1]);
            }
        }
    }
}

















    
