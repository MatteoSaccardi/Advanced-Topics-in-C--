#incude <iostream>

//==================================================
int addition(int a, int b)
{
    return a+b;
}

//==================================================
int main()
{
    int z;
    z = addition(5,3);
    std::cout << "The result is " << z << std::endl;
    return 0;
}