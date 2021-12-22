//https://codeforces.com/problemset/problem/591/A
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    //Let's start with determining the position of the first collision. Two impulses converge with a speed p + q, so the first collision will occur after  seconds. The coordinate of this collision is given by the formula .

    //Note, that the distance one impulse passes while returning to it's caster is equal to the distance it has passed from the caster to the first collision. That means impulses will reach their casters simultaneously, and the situation will be identic to the beginning of the duel. Hence, the second collision (third, fourth, etc) will occur at exactly the same place as the first one.
    double l , p ,q;
    cin >> l ;//length
    cin >> p ;//harry
    cin >> q ;//voldemort
    double seconds;
    seconds = l / (p+q);
    cout << p*seconds;
}