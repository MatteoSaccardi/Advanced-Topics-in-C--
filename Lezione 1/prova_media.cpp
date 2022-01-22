/*
g++ -o prova_media prova_media.cpp
g++ -o prova_media -Wall prova_media.cpp
./prova_media
*/
int main()
{
    double xmean = 0.;
    int n = 10;
    double x[10] = {1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < n; i++)
    {
        xmean += x[i];
    }
    xmean /= n;

    return 0;
}