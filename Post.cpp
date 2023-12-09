#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Post {
public:
    std::string body;
    std::vector<std::string> topics;

    Post(const std::string& body, const std::vector<std::string>& topics)
            : body(body), topics(topics) {}
};

class User {
public:
    std::string id;
    std::string name;
    std::vector<Post> posts;

    User(const std::string& id, const std::string& name, const std::vector<Post>& posts)
            : id(id), name(name), posts(posts) {}
};

class Graph {
public:
    // Your Graph implementation goes here
    // ...
};