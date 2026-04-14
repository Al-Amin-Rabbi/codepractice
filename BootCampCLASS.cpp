#include <bits/stdc++.h>
using namespace std;
//WEEK1
/// *** VECTOR, STRING, DEQUE ***

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    /// std::vector

    vector<int> vec;
    for (int i = 3; i <= 15; i += 2) {
        vec.push_back(i); /// O(1) amortized
    }
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << "\n";
    /// or using range-based for loop:
    for (int x : vec) {
        cout << x << " ";
    }
    cout << "\n";

    vec.size(); /// O(1)
    vec.pop_back(); /// O(1) amortized
    vec.empty(); /// equivalent to (vec.size() == 0)
    vec.clear(); /// O(vec.size())
    vec.front(); /// equivalent to vec[0]
    vec.back(); /// equivalent to vec[vec.size() - 1]

    vector<int> v1(100);
    v1.assign(200, 3);
    vector<int> v2(100, 5);
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << " ";
    }

    /// std::string
    /// a std::vector<char> with some string-specific functions

    string s = "some_string";
    cout << s << '\n'; /// can be printed
    s[0]; /// access char at index 0; O(1)
    s.pop_back(); /// O(1) amortized
    s.push_back('c'); /// O(1) amortized
    s += 'c'; /// equivalent to s.push_back('c')
    s = s + string("+some_other_string"); /// O(length of the new string)
    s += string("+some_other_string"); /// O(length of the string on the r.h.s)

    /// std::deque
    ///  exactly like vector, except it has two additional functions
    deque<int> dq;
    dq.push_front(1); /// O(1) amortized
    dq.pop_front(); /// O(1) amortized

    return 0;
}
/// *** TIME COMPLEXITY ***

int main()
{
    int n;
    cin >> n; /// O(C) ~ O(1)
    int a[n];
    /// O(n)
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int n, m;
    cin >> n >> m;
    int a[n][m];
    /// O(n * m)
    /// 1 <= n, m <= 1e4
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < m; ++k) {
            cin >> a[i][k];
        }
    }

    /// O(n / 2) ~ O(n * (1 / 2)) ~ O(n)
    for (int i = 0; i < n; i += 2) {

    }

    /// O(n * m + n) ~ O(n * m)

    a[0] = 1;

    /// O(T(n)) = O(log2(n)) ~ O(log(n))
    for (int i = 1; i <= n; i *= 2) {

    }

    /// if it runs x times
    /// 2 * 2 * 2 * ... * 2 = n
    /// 2**x = n
    /// x = log2(n)

    for (int i = n; i >= 1; i /= 2) {

    }

    for (int i = 1; i <= n; i <<= 1) {

    }

    /// Time complexity of sqrt function ~ O(log n)
    /// O(log(n) + sqrt(n)) ~ O(sqrt(n))
    int sqrtn = sqrt(n); /// sqrt(100) -> 10.0000000001343
                         ///           or  9.9999999987987
    for (int i = 0; i < sqrtn; ++i) {

    }

    /// i**2 <= n
    /// i <= sqrt(n)
    for (int i = 1; (i * i) <= n; ++i) {

    }

    /// T(n) = n + (n - 1) + (n - 2) + ... + 1
    ///      = (n * (n + 1)) / 2
    ///      = (n**2 + n) / 2
    ///      = n**2 / 2 + n / 2
    /// O(T(n)) = O(n**2)
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {

        }
    }

    /// T(n) = n + n/2 + n/3 + n/4 + ... + n/n
    ///      = n * (1 + 1/2 + 1/3 + ... + 1/n)
    ///      = n * log(n) ["linearithmic"]
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; j += i) {

        }
    }
}


/// fib: 0, 1, 1, 2, 3, 5, ...
/// O(2**i)
int fib(int i) {
    if (i <= 1) return i;
    return fib(i - 1) + fib(i - 2);
}
/**
 * Notes from Week-2 Class of NSUPS Bootcamp S15
 * Author: Nadman Ashraf Khan
 */

#include <bits/stdc++.h>
using namespace std;

/**
 * List Number, and Sum of Factors/Divisors, and Primality Test in O(sqrt(n))
 * ===============================================================================
 *
 * * Using factor pairs for O(sqrt(n)) computation of the problems
 *   - https://w...content-available-to-author-only...s.org/why-do-we-check-up-to-the-square-root-of-a-number-to-determine-if-that-number-is-prime/
 *   - https://w...content-available-to-author-only...s.org/introduction-to-primality-test-and-school-method/
 *   - https://w...content-available-to-author-only...s.org/count-divisors-n-on13/
 */


/*
36 = 1 * 36
   = 2 * 18
   = 3 * 12
   = 4 * 9
   = 6 * 6

Thus we can get all the divisors of 36 by iterating from 1 up to only 6, which is the
square-root of 36. This is true for all integers.
*/

/// Returns the list of divisors/factors of `n`.
vector<int> divisors(int n) {
    vector<int> res;

    /// Naive solution: O(n)
    /// Uses trial division from 1 to n.

    // for (int i = 1; i <= n; ++i) {
    //     if (n % i == 0) {
    //         res.push_back(i);
    //     }
    // }

    // ---

    /// Better solution: O(sqrt(n))
    /// Uses factor pairs

    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res.push_back(i);

            /// Because `i == n / i` if `n` is a perfect square,
            /// and not checking this will add a duplicate divisor
            /// in the list.
            if (n / i != i) {
                res.push_back(n / i);
            }
        }
    }

    /// Only if the divisors need to be sorted
    sort(res.begin(), res.end());

    return res;
}

bool is_prime(int n) {
    /// Naive solution: O(n)
    /// Uses trial division from 2 to n-1.

    // for (int i = 2; i < n; ++i) {
    //     if (n % i == 0) {
    //         return false;
    //     }
    // }
    // return true;

    // ---

    /// Better solution: O(sqrt(n))
    /// Uses the fact that the smallest factor of n that is
    /// greater than 1, if n is composite, is less than or equal to
    /// the square-root of n.

    // Do not write `i <= sqrt(n)`!!!
    for (int i = 2; (i * i) <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int num_divisors(int n) {
    int res = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res++;
            if (n / i != i) {
                res++;
            }
        }
    }
    return res;
}

int sum_divisors(int n) {
    int res = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            res += i;
            if (n / i != i) {
                res += (n / i);
            }
        }
    }
    return res;
}

/**
 * Introductory Modular Arithmetic
 * ===============================
 *
 * * Properties of modular addition, subtraction, multiplication
 *   - https://u...content-available-to-author-only...o.guide/gold/modular?lang=cpp
 *   - https://w...content-available-to-author-only...s.org/modular-arithmetic/
 *   - https://e...content-available-to-author-only...a.org/wiki/Modular_arithmetic
 *
 * * Modulo of a big "stringified" integer using modular arithmetic properties
 *   - https://w...content-available-to-author-only...s.org/how-to-compute-mod-of-a-big-number/
 */

/// The remainder operator % does not behave like the
/// mathematical modulo (`mod`) operation for negative numbers.
/// For negative numbers, % gives a non-positive (negative or zero)
/// integer in the interval [-modulus+1, 0], but we need a non-negative
/// (positive or zero) integer in the interval [0, modulus-1].
/// This modulo function does that.
int modulo(int n, int m) {
    {
        /// 1st method
        auto res = n % m;
        if (res < 0) res += m;
        return res;
    }

    {
        /// 2nd method
        auto res = ((n % m) + m) % m;
        return res;
    }
}

/*
modular addition:
    (a + b) mod m == ((a mod m) + (b mod m)) mod m

modular subtraction:
    (a - b) mod m == ((a mod m) - (b mod m)) mod m

modular multiplication:
    (a * b) mod m == ((a mod m) * (b mod m)) mod m
*/

/// Example problem using modular arithmetic to compute a number that would otherwise overflow

const int mod = 1e9 + 7; // constant modulus; will be specified by the problem

long long modular_factorial(int n) {
    long long factorial = 1;
    for (long long i = 2; i <= n; ++i) {
        factorial *= i;
        factorial %= mod;
    }
    factorial %= mod;
    return factorial;
}

/// `n` is too long to be represented as a 64-bit integer type (`long long`).
/// So use string to hold its value (e.g. "1234") and compute it modulo `m`
/// using the properties of modular arithmetic learned so far.
int string_modulo(string n, int m) {
    {
        /// 1st method: iterate from right to left
        long long res = 0;
        long long pv = 1; // place value
        for (int i = n.size() - 1; i >= 0; --i) {
            int digit = n[i] - '0'; // numeric value from ascii

            res += (pv * digit) % m;
            res %= m;

            pv *= 10;
            pv %= m;
        }
        return res;
    }

    {
        /// 2nd method: iterate from left to right
        long long res = 0;
        for (auto c : n) {
            int digit = c - '0'; // numeric value from ascii
            res = (((res * 10) % m) + digit) % m;
        }
        return res;
    }
}

/**
 * Notes from Week 3 Class of NSUPS Bootcamp S15
 * Author: Nadman Ashraf Khan
 */

#include <bits/stdc++.h>
using namespace std;

/**
 * Set & Map Variations
 * ====================
 *
 * Most important are std::set and std::map. For faster access, insertion and
 * deletion, std::unordered_set and std::unordered_map can be used.
 *
 * [Documentations on cplusplus.com]
 * - https://cplusplus.com/reference/set/set/ - std::set
 * - https://cplusplus.com/reference/set/multiset/ - std::multiset
 * - https://cplusplus.com/reference/map/map/ - std::map
 * - https://cplusplus.com/reference/map/multimap/ - std::multimap
 * - https://cplusplus.com/reference/unordered_set/unordered_set/ - std::unordered_set
 * - https://cplusplus.com/reference/unordered_set/unordered_map/ - std::unordered_map
 *
 * [Documentations on cppreference.com]
 * - https://en.cppreference.com/w/cpp/container/set - std::set
 * - https://en.cppreference.com/w/cpp/container/multiset - std::multiset
 * - https://en.cppreference.com/w/cpp/container/map - std::map
 * - https://en.cppreference.com/w/cpp/container/multimap - std::multimap
 * - https://en.cppreference.com/w/cpp/container/unordered_set - std::unordered_set
 * - https://en.cppreference.com/w/cpp/container/unordered_map - std::unordered_map
 *
 * [Tutorials on geeksforgeeks.org]
 * - https://www.geeksforgeeks.org/set-in-cpp-stl/ - std::set
 * - https://www.geeksforgeeks.org/multiset-in-cpp-stl/ - std::multiset
 * - https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/ - std::map
 * - https://www.geeksforgeeks.org/multimap-associative-containers-the-c-standard-template-library-stl/ - std::multimap
 * - https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/ - std::unordered_set
 * - https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/ - std::unordered_map
 */

void demo_set() {
    /// -- std::set --

    /// A container that stores unique elements following a specific
    /// order. It is usually implemented using Red-Black Tree.
    ///
    /// Insertion, removal, search/access have logarithmic complexity.
    ///
    /// std::set is usually used to store unique elements in sorted order
    /// for fast insertion of, access to and removal of elements.

    /// Create a set of integers sorted in ascending order
    set<int> st;

    /// Create a set of integers sorted in descending order
    set<int, greater<int>> st2;

    /// Create a set of pairs of integers sorted in ascending order.
    /// Note that pairs, like all other STL containers, are sorted
    /// lexicographically, i.e. first by the first element, then by
    /// the second element.
    set<pair<int, int>> st3;

    st.insert(1); /// O(log(st.size())); inserts an element into the set
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    /// Print the set
    cout << "Set: ";
    for (int x : st) {
        cout << x << " ";
    }
    cout << "\n";

    /// Special iterators
    st.begin();                                       /// O(1); returns an iterator to the first element
    cout << "First element: " << *st.begin() << "\n"; /// O(1); dereference the iterator
    st.end();                                         /// O(1); returns a special iterator that points to the position after the last element
    /// Use prev(iterator) to get the previous element's iterator
    cout << "Last element: " << *prev(st.end()) << "\n";

    /// Iterate using begin and end
    cout << "Set: ";
    for (auto it = st.begin(); it != st.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    /// Check if 3 is present in the set
    if (st.find(3) != st.end()) {
        /// st.find() -- O(log(st.size())) -- searches
        /// for an element and returns an iterator to
        /// it if found, otherwise returns st.end().
        cout << "3 is present in the set\n";
    } else {
        cout << "3 is not present in the set\n";
    }

    st.erase(3); /// O(log(st.size())); removes the element from the set

    st.clear(); /// O(st.size()); removes all elements from the set

    /// Other functions common to all containers
    st.size();  /// O(1); returns the number of elements
    st.empty(); /// O(1); returns true if the container is empty (i.e., st.size() == 0)

    /// -- std::multiset --
    /// Like set, but allows multiple elements with the same value.

    multiset<string> ms;

    ms.insert("xyz");
    ms.insert("abc");
    ms.insert("abc");
    ms.insert("abc");
    ms.insert("pqr");

    cout << "Multiset: ";
    for (auto x : ms) {
        cout << x << " ";
    }
    cout << "\n";

    ms.erase("abc");          /// removes all elements with value "abc"
    ms.erase(ms.find("abc")); /// finds iterator (O(log(ms.size()))) to the element
                              /// and removes the element at that iterator (O(1))
}

void demo_map() {
    /// -- std::map --

    /// std::map is an associative container that stores elements formed by a
    /// pair of **a unique key value** and **a mapped value**, following a specific
    /// order of the key. It is usually implemented using Red-Black Tree.
    ///
    /// Insertion, removal, search/access have logarithmic complexity.
    ///
    /// std::map is generally used in cases where we need to quickly retrieve
    /// the value associated with a particular key. For example, we can use
    /// a map to store the phone numbers of people with their names as keys.
    ///
    /// It is like std::set, but with an additional value associated with each
    /// key. The value can be of any type, and can be modified.

    /// Create a map of integers to strings
    map<int, string> mp; /// Not the same as set<pair<int, string>> !!!
                         /// set<pair<int, string>> would store unique (int, string)
                         /// pairs in sorted order, while map<int, string> would store
                         /// unique int keys in sorted order and associate them with
                         /// string values which can be access (and changed) using
                         /// their keys.

    mp[1];                              /// O(log(mp.size())); returns a read+write reference to the value
                                        /// associated with the key. If the key does not exist, it is created
                                        /// and a default value of the mapped type (string in this case) is
                                        /// inserted.
    cout << "mp[1]: " << mp[1] << "\n"; /// Prints an empty string
    mp[1] = "abc";                      /// Assigns a value to the key 1
    cout << "mp[1]: " << mp[1] << "\n"; /// Prints "abc"

    mp.insert({2, "def"}); /// O(log(mp.size())); inserts a key-value pair into the map
    mp[2] = "def";

    mp[3] = "ghi";
    mp[4] = "jkl";
    mp[5] = "mno";

    /// Print the map
    cout << "Map: ";
    for (auto& x : mp) {
        cout << x.first << " " << x.second << " ";
    }
    cout << "\n";

    {
        /// Problem: Count the frequency (number of occurrences) of each word in
        /// a sentence
        string sentence = "hello world hello hello world";
        map<string, int> cnt;
        stringstream ss(sentence);
        string word;
        while (ss >> word) {
            cnt[word]++; /// if word is not present in the map, it is created and
                         /// initialized to 0 (default value of int), then
                         /// incremented to 1
        }
        for (auto& x : cnt) {
            cout << x.first << " occurs " << x.second << " times\n";
        }
    }

    /// Special iterators
    mp.begin(); /// (1); returns an iterator to the first element
    cout << "First element: " << mp.begin()->first << " " << mp.begin()->second << "\n"; /// O(1); dereference the iterator
    mp.end(); /// O(1); returns a special iterator that points to the position after the last element
    /// Use prev(iterator) to get the previous element's iterator
    cout << "Last element: " << prev(mp.end())->first << " " << prev(mp.end())->second << "\n";

    /// Iterate using begin and end
    cout << "Map: ";
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " " << it->second << " ";
    }
    cout << "\n";

    /// Check if key 3 is present in the map
    if (mp.find(3) != mp.end()) {
        /// mp.find() -- O(log(mp.size())) -- searches
        /// for a key and returns an iterator to
        /// it if found, otherwise returns mp.end().
        cout << "Key 3 is present in the map\n";
    } else {
        cout << "Key 3 is not present in the map\n";
    }

    mp.erase(3); /// O(log(mp.size())); removes the key-value pair from the map

    mp.clear(); /// O(mp.size()); removes all

    /// * Also has other functions common to all containers
    /// * Also has std::multimap (like the set counterpart std::multiset)
}

void demo_unordered_set_map() {
    /// std::unordered_set and std::unordered_map are hash-table based containers
    /// that store unique elements (or key-value pairs) in no particular order.
    ///
    /// Insertion, removal, search/access have constant time complexity on average,
    /// but can go up to linear in the worst case.
    ///
    /// std::unordered_set and std::unordered_map are generally used when we
    /// need even faster access/insertion/removal than std::set and std::map.
    ///
    /// In practice, however, they are only a couple of times faster than
    /// std::set and std::map (but they can be exploited in ways that make
    /// them even slower thant std::set and std::map), and are generally not
    /// worth the trouble. There are tricks to make them faster, and they are
    /// useful in competitive programming.
    ///
    /// In fact, there are better alternatives to std::unordered_set and
    /// std::unordered_map in GNU C++ (e.g., __gnu_pbds::gp_hash_table).
    ///
    /// For more information, see:
    /// https://codeforces.com/blog/entry/62393
    /// https://codeforces.com/blog/entry/60737

    /// The interfaces of std::unordered_set and std::unordered_map are similar
    /// to those of std::set and std::map, except that they don't have the functions
    /// lower_bound(), upper_bound(), etc. which require the elements to be sorted.
    /// They have some additional functions for advanced usage, which we will not
    /// cover here.

    unordered_set<int> st;

    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    cout << "Unordered set: ";
    for (auto x : st) {
        cout << x << " ";
    }
    cout << "\n";
    /// Notice that the elements are not printed in sorted order, nor in the order
    /// in which they were inserted.
}

/**
 * Lower & Upper Bounds
 * ====================
 *
 * - https://www.geeksforgeeks.org/upper_bound-and-lower_bound-for-vector-in-cpp-stl/
 * - https://stackoverflow.com/questions/41958581/difference-between-upper-bound-and-lower-bound-in-stl\
 * - https://cplusplus.com/reference/algorithm/lower_bound/
 * - https://cplusplus.com/reference/algorithm/upper_bound/
 * - https://en.cppreference.com/w/cpp/algorithm/lower_bound
 * - https://en.cppreference.com/w/cpp/algorithm/upper_bound
 */

void demo_upper_lower_bounds() {
    /// lower_bound and upper_bound are functions that are available in
    /// "ordered" set and map (i.e., std::set, std::map, std::multiset, std::multimap)
    /// as member functions, as well as in the global namespace as free functions
    /// that operate on random-access containers (e.g., std::vector) after sorting
    /// them.
    ///
    /// They perform binary search on sorted ranges to return an iterator
    /// in logarithmic time. lower_bound returns an iterator to the first
    /// element in the given range that is not less than (i.e. greater than
    /// or equal to) a value. upper_bound returns an iterator to the first
    /// element in the given range that is strictly greater than a value.

    vector<int> v = {1, 5, 5, 3, 3, 4, 7, 2, 3, 10, 8, 9, 6};

    sort(v.begin(), v.end()); /// vector must be sorted before using
                              /// std::lower_bound and std::upper_bound
    // Now, v == {1, 2, 3, 3, 3, 4, 5, 5, 6, 7, 8, 9, 10}

    auto vec_lb = lower_bound(v.begin(), v.end(), 3); /// O(log(v.size()))
    auto vec_ub = upper_bound(v.begin(), v.end(), 3); /// O(log(v.size()))
    /// v      == {1, 2, 3, 3, 3, 4, 5, 5, 6, 7, 8, 9, 10}
    ///                  ^        ^
    ///                  lb       ub

    /// lower_bound and upper_bound can also be used on "ordered" sets and maps
    /// (std::set, std::map, std::multiset, std::multimap), not on unordered sets
    /// and maps (std::unordered_set, std::unordered_multiset, std::unordered_map
    /// std::unordered_multimap).
    set<int> st = {1, 5, 5, 3, 3, 4, 7, 2, 3, 10, 8, 9, 6};
    auto set_lb = st.lower_bound(3); /// O(log(st.size()))
    auto set_ub = st.upper_bound(3); /// O(log(st.size()))
    /// st     == {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    ///                  ^  ^
    ///                  lb ub

    /// In C++ semantics, a "range" is a pair of iterators, denoting the beginning
    /// and the end of the range. The range is [begin, end), meaning that the
    /// element pointed by "begin" is included in the range, but the element
    /// pointed by "end" is NOT included in the range. That is why we pass in
    /// v.begin() and v.end() as arguments to functions that operate on ranges
    /// (e.g., std::sort, std::reverse, std::min_element, std::lower_bound, etc.).
    /// If you look closely, you will realize that the two iterators returned by
    /// std::lower_bound and std::upper_bound actually denote a range of
    /// equal elements.
    ///
    /// Also, for an iterator of type vector, deque or string (i.e., a random-access
    /// iterator), we can get the index by subtracting the begin iterator.
    /// This will NOT work for iterators of type set, map, etc., as the minus
    /// operator is not defined for them.

    int index_lb = vec_lb - v.begin();
    int index_ub = vec_ub - v.begin();
    cout << "Indexes of elements equal to 3: ";
    for (int i = index_lb; i < index_ub; i++) {
        cout << i << " ";
    }
    cout << "\n";

    {
        // Problem: Given a sorted array of size n, process q queries, each asking
        // the number of elements in the array that are equal to a given value,
        // as well as the first 0-based index where the value appears.
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // remember that v is sorted in the input
        while (q--) {
            int x;
            cin >> x;
            auto from = lower_bound(v.begin(), v.end(), x) - v.begin();
            auto until = upper_bound(v.begin(), v.end(), x) - v.begin();
            cout << (until - from) << " " << from << "\n";
        }
    }
}

int main() {
    // demo_set();
    // demo_map();
    // demo_upper_lower_bounds();
    return 0;
}


/*
 * Notes from Week 4 Class of NSUPS Bootcamp S15
 * Author: Nadman Ashraf Khan
 */

#include <bits/stdc++.h>
using namespace std;

/**
 * Sieve of Eratosthenes
 * =====================
 * 
 * The sieve of Eratosthenes is an algorithm for "sieving" or filtering all prime numbers
 * up to any given limit. It essentially precomputes all prime numbers up to the limit,
 * so we can quickly check if a number is prime or not.
 * 
 * * https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
 * * https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
 * * https://www.geeksforgeeks.org/sieve-of-eratosthenes/
 */

const int nmax = 100;
bool isprime[nmax + 1];

/// Implementation of sieve without optimizations
void sieve_unoptimized(int n) {
    /// 1. Mark all numbers prime
    for (int i = 0; i <= n; ++i) {
        isprime[i] = true;
    }
    
    // Alternate and shorter syntax for static array initialization (that works
    // for vector too) using the `std::fill` function:
    // `fill(isprime, isprime + n + 1, true);`

    /// 2. Handle trivial cases
    isprime[0] = isprime[1] = false;

    /// 3. Main loop: iterate as prime-factors, mark multiples
    ///    of prime-factors as non-prime
    for (int i = 2; i <= n; ++i) {
        if (isprime[i]) {
            /// Since `i` is still marked prime, it must be prime.
            /// Mark all of `i`'s multiples `j` (s.t. `j` > `i`) as non-prime.
            for (int j = 2 * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
}
/// Time complexity: O(n * log(log(n)))
/// Here's how (skip it if you want): https://www.geeksforgeeks.org/how-is-the-time-complexity-of-sieve-of-eratosthenes-is-nloglogn/?ref=rp

/// Implementation of sieve with optimizations
void sieve(int n) {
    for (int i = 0; i <= n; ++i) {
        isprime[i] = true;
    }

    isprime[0] = isprime[1] = false;


    /// Optimization #1 (less important):
    /// Mark even numbers (i.e., multiples of the prime number 2) that area
    /// greater than 2 as non-prime first, so we can iterate only over odd 
    /// numbers afterwards (since 2 is the only even prime number).
    for (int even = 4; even <= n; even += 2) {
        isprime[even] = false;
    }

    /// Because of using optimization #1, we can iterate with i
    /// over odd numbers only.
    /// Optimization #2 (must do):
    /// Iterate while `i * i <= n` instead of `i <= n`, i.e., while
    /// `i` is less than or equal to the square root of `n`.
    for (int i = 3; (long long)i * i <= n; i += 2) {
        if (isprime[i]) {
            /// Optimization #3 (must do):
            /// If `i` is a prime number, what is the smallest composite number
            /// that cannot be factorized by any prime number smaller than `i`?
            /// It's `i * i`.
            for (int j = i * i; j <= n; j += i) {
                isprime[j] = false;
            }
        }
    }
}
/// These optimizations won't affect the time complexity, but will improve the actual
/// running time noticeably.

void demo_sieve() {
    sieve(nmax);

    for (int i = 0; i <= nmax; ++i) {
        cout << i << " -> " << (isprime[i] ? "prime" : "") << "\n";
    }

    vector<int> primes;
    for (int i = 2; i <= nmax; ++i) {
        if (isprime[i]) primes.push_back(i);
    }
}


/// We can use variants of the sieve algorithm to pre-compute other useful 
/// information about a number, such as:
/// - the list, number, or sum of factors/divisors
/// - the list, number, or sum of *prime* factors/divisors (not covered here)


vector<int> divisors[nmax + 1];
void sieve_divisors() {
    for (int i = 1; i <= nmax; ++i) {
        for (int j = i; j <= nmax; j += i) {
            divisors[j].push_back(i);
        }
    }
}

int num_div[nmax + 1];
void sieve_num_div() {
    /// `num_div` is already zero-initialized
    /// as it is a global array.
    for (int i = 1; i <= nmax; ++i) {
        for (int j = i; j <= nmax; j += i) {
            num_div[j] += 1;
        }
    }
}

int sum_div[nmax + 1];
void sieve_sum_div() {
    /// `sum_div` is already zero-initialized
    /// as it is a global array.
    for (int i = 1; i <= nmax; ++i) {
        for (int j = i; j <= nmax; j += i) {
            sum_div[j] += i;
        }
    }
}

/**
 * Euclidean Algorithm: Greatest Common Divisor (GCD) and Least Common Multiple (LCM)
 * ==================================================================================
 * 
 * * https://en.wikipedia.org/wiki/Euclidean_algorithm (observe the first visualization
 *   to gain an intuition about the algorithm)
 * * https://cp-algorithms.com/algebra/euclid-algorithm.html
 * * https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/
 */

/// Applying Euclidean Algorithm to find the GCD of two numbers:
/// gcd(a, 0) = a
/// gcd(a, b) = gcd(b, a mod b)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
/// Time complexity: O(log(min(a, b)))

/// gcd(a, b) * lcm(a, b) = a * b
///             lcm(a, b) = a * b / gcd(a, b)
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; /// Divide first to avoid overflow
}

/// gcd, lcm are both defined for negative integers too:
/// 
/// gcd(a, b) = gcd(-a, b) = gcd(a, -b) == gcd(-a, -b)
/// lcm(a, b) = lcm(-a, b) = lcm(a, -b) == lcm(-a, -b)
///
/// Keep the above in mind before calling gcd, lcm on negative integers.
/// If the arguments can be negative, you can call abs() on them before calling,
/// e.g., `gcd(abs(a), abs(b))`.

/// Some useful things to understand:
/// * gcd(a, 0) = a [0 is the "identity element" for gcd]
/// * lcm(a, 1) = a [1 is the "identity element" for lcm]
/// * gcd(a, 1) = 1
/// * lcm(a, 0) = 0
/// * gcd(a, a) = lcm(a, a) = a
/// * If a and b are coprime, then 
///     - gcd(a, b) = 1
///     - lcm(a, b) = a * b
/// * If a and b are not coprime, then
///     - gcd(a, b) > 1
///     - lcm(a, b) < a * b

void demo_gcd_lcm() {
    cout << gcd(10, 0) << "\n"; /// 10
    cout << gcd(10, 1) << "\n"; /// 1
    cout << gcd(10, 9) << "\n"; /// 1
    cout << gcd(10, 15) << "\n"; /// 5
    cout << gcd(10, 20) << "\n"; /// 10

    cout << lcm(10, 0) << "\n"; /// 0
    cout << lcm(10, 1) << "\n"; /// 10
    cout << lcm(10, 9) << "\n"; /// 90
    cout << lcm(10, 15) << "\n"; /// 30
    cout << lcm(10, 20) << "\n"; /// 20
}

int main() {
    // demo_sieve();
    // demo_gcd_lcm();
    return 0;
}

