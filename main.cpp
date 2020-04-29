//乐学偶得版权所有，主讲人：William 公众号：乐学Fintech 网站：lexueoude.com
// Created by william from lexueoude.com
//

#include <iostream>

using namespace std;

int main() {
    //hard coding(你需要程序做什么你就打什么)，没有其他程序设计的理念在
    //但是我们可以通过设置variable的方式，多次利用程序
    int numDogs = 3;
    int numCats = 5;
    int totalNum = numDogs + numCats;
    cout << "The number of Dogs is :" << numDogs << endl;
    cout << "The number of Cats is :" << numCats << endl;
    cout << "The number of Animals is :" << numDogs + numCats << endl;
    cout << "The number of Animals_V2 is :" << totalNum << endl;

    //为什么需要用变量，因为可以后续处理
    cout << "I just bought a new dog" << endl;
    numDogs = numDogs + 1;
    cout << "The new number of dog is :" << numDogs << endl;
    cout << "I just bought a new cat" << endl;
    numCats = numCats + 1;
    cout << "The new number of cat is :" << numCats << endl;

    cout << "The new number of Animals is :" << numDogs + numCats << endl;

    return 0;
}
