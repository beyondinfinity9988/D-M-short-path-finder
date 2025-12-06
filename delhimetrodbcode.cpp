#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <list>
#include <utility>
#include<set>
#include<stack>
//#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
// METRO LINES DATA
vector<string> redline(
    {"Shaheed Sthal (New Bus Adda)",
     "Hindon",
     "Arthala",
     "Mohan Nagar",
     "Shyam park",
     "Major Mohit Sharma",
     "Raj Bagh",
     "Shaheed Nagar",
     "Dilshad Garden",
     "Jhilmil",
     "Mansarovar Park",
     "Shahdra",
     "Welcome",
     "Seelampur",
     "Shastri Park",
     "Kashmere Gate",
     "Tis Hazari",
     "Pul Bangash",
     "Pratap Nagar",
     "Shastri Nagar",
     "Inderlok",
     "Kanhiya Nagar",
     "Keshav Puram",
     "Netaji Subhash Place",
     "Kohat Enclave",
     "Pitam Pura",
     "Rohini East",
     "Rohini West",
     "Rithala"});
vector<string> magentaline(
    {"Janakpuri West",
     "Chirag Delhi",
     "Dabri Mor - South Janakpuri",
     "Greater Kailash",
     "Dashrathpuri",
     "Nehru Enclave",
     "Palam",
     "Kalkaji Mandir",
     "Sadar Bazar Cantonment",
     "Okhla NSIC",
     "Terminal-1 IGI Airport",
     "Sukhdev Vihar",
     "Shankar Vihar",
     "Jamia Millia Islamia",
     "Vasant Vihar",
     "Okhla Vihar",
     "Munirka",
     "Jasola Vihar Shaheen Bagh",
     "RK Puram",
     "Kalindi Kunj",
     "IIT Delhi",
     "Okhla Bird Sanctuary",
     "Hauz Khas",
     "Botanical Garden",
     "Panchsheel Park"});
vector<string> yellowline(
    {"Samaypur Badli",
     "Rohini Sector 18,19",
     "Haiderpur Badli Mor",
     "Jahangirpuri",
     "Adarsh Nagar",
     "Azadpur",
     "Model Town",
     "GTB Nagar",
     "Vishwa Vidyalaya",
     "Vidhan Sabha",
     "Civil Lines",
     "Kashmere Gate",
     "Chandni Chowk",
     "Chawri Bazar",
     "New Delhi",
     "Rajiv Chowk",
     "Patel Chowk",
     "Central Secretariat",
     "Udyog Bhawan",
     "Lok Kalyan Marg",
     "Jor Bagh",
     "INA",
     "AIIMS",
     "Green Park",
     "Hauz Khas",
     "Malviya Nagar",
     "Saket",
     "Qutub Minar",
     "Chhatarpur",
     "Sultanpur",
     "Ghitorni",
     "Arjan Garh",
     "Guru Dronacharya",
     "Sikandarpur",
     "MG Road",
     "IFFCO Chowk",
     "HUDA City Centre"});
vector<string> greenline(
    {"Kirti Nagar",
     "Satguru Ram Singh Marg",
     "Inderlok",
     "Ashok Park Main",
     "Punjabi Bagh",
     "Punjabi Bagh West",
     "Shivaji Park",
     "Madipur",
     "Paschim Vihar East",
     "Paschim Vihar West",
     "Peera Garhi",
     "Udyog Nagar",
     "Surajmal Stadium",
     "Nangloi",
     "Nangloi Railway Station",
     "Rajdhani Park",
     "Mundka",
     "Mundka Industrial Area (MIA)",
     "Ghevra",
     "Tikri Kalan",
     "Tikri Border",
     "Pandit Shree Ram Sharma",
     "Mordern Industrial Estate",
     "Bahadurgarh City",
     "Brigadier Hoshiyar Singh",
     "Bahadurgarh City Park"});
vector<string> orangeline(
    {"New Delhi",
     "Shivaji Stadium",
     "Dhaula Kuan",
     "Delhi Aerocity",
     "IGI Airport",
     "Dwarka Sector 21"});
vector<string> violetline(
    {"Kashmere Gate",
     "Lal Qila",
     "Jama Masjid",
     "Delhi Gate",
     "ITO",
     "Mandi House",
     "Janpath",
     "Central Secretariat",
     "Khan Market",
     "Jawaharlal Nehru Stadium",
     "Jangpura",
     "Lajpat Nagar",
     "Moolchand",
     "Kailash Colony",
     "Nehru Place",
     "Kalkaji Mandir",
     "Govind Puri",
     "Harkesh Nagar",
     "Jasola Apollo",
     "Sarita Vihar",
     "Mohan Estate",
     "Tughlakabad",
     "Badarpur",
     "Sarai",
     "NHPC Chowk",
     "Mewla Maharajpur",
     "Sector 28",
     "Badkhal Mor",
     "Faridabad Old",
     "Neelam Chowk Ajronda",
     "Bata Chowk",
     "Escorts Mujesar",
     "Sant Surdas - Sihi (NCB Colony)",
     "Raja Nahar Singh (Ballabhgarh)"});
vector<string> blueline1(
    {"Noida Electronic City",
     "Noida Sector 62",
     "Noida Sector 59",
     "Noida Sector 61",
     "Noida Sector 52",
     "Noida Sector 34",
     "Noida City Centre",
     "Golf Course",
     "Botanical Garden",
     "Noida Sector 18",
     "Noida Sector 16",
     "Noida Sector 15",
     "New Ashok Nagar",
     "Mayur Vihar Ext",
     "Mayur Vihar-I",
     "Akshardham",
     "Yamuna Bank",
     "Indraprasta",
     "Supreme Court",
     "Mandi House",
     "Barakhamba",
     "Rajiv Chowk",
     "RK Ashram Marg",
     "Jhandewalan",
     "Karol Bagh",
     "Rajendra Place",
     "Patel Nagar",
     "Shadi Pur",
     "Kirti Nagar",
     "Moti Nagar",
     "Ramesh Nagar",
     "Rajouri Garden",
     "Tagore Garden",
     "Subash Nagar",
     "Tilak Nagar",
     "Janak Puri East",
     "Janak Puri West",
     "Uttam Nagar East",
     "Uttam Nagar West",
     "Nawada",
     "Dwaraka Mor",
     "Dwarka",
     "Dwarka Sector - 14",
     "Dwarka Sector - 13",
     "Dwarka Sector - 12",
     "Dwarka Sector - 11",
     "Dwarka Sector - 10",
     "Dwarka Sector - 9",
     "Dwarka Sector - 8",
     "Dwarka Sector - 21"});
vector<string> blueline2(
    {"Yamuna Bank",
     "Laxmi Nagar",
     "Nirman Vihar",
     "Preet Vihar",
     "Karkarduma",
     "Anand Vihar West",
     "Kaushambi",
     "Vaishali"});
vector<string> pinkline(
    {"Majlis Park",
     "Azadpur",
     "Shalimar Bagh",
     "Netaji Subhash Place",
     "Shakurpur",
     "Punjabi Bagh West",
     "Esi - Basaidarapur",
     "Rajouri Garden",
     "Mayapuri",
     "Naraina Vihar",
     "Delhi Cantt.",
     "Durgabai Deshmukh South Campus",
     "Sir M Vishweshwaraiah Moti Bagh",
     "Bhikaji Cama Place",
     "Sarojini Nagar",
     "Dilli Haat - INA",
     "South Extension",
     "Lajpat Nagar",
     "Vinobapuri",
     "Ashram",
     "Sarai Kale Khan - Nizamuddin",
     "Mayur Vihar - 1",
     "Mayur Vihar Pocket - 1",
     "Trilokpuri - Sanjay Lake",
     "East Vinod Nagar - Mayur Vihar - 2",
     "Mandawali - West Vinod Nagar",
     "I.P. Extension",
     "Anand Vihar ISBT",
     "Karkarduma",
     "Karkarduma Court",
     "Krishna Nagar",
     "East Azad Nagar",
     "Welcome",
     "Jafrabad",
     "Maujpur - Barbarpur",
     "Gokulpuri",
     "Johri Enclave",
     "Shiv Vihar"
    });
vector<string> greyline(
    {"Dwarka",
     "Nangli",
     "Najafgarh",
     "Dhansa Bus Stand"});
vector<string> rapidline(
    {"Sector 55 - 56",
     "Sector - 54 Chowk",
     "Sector 53 - 54",
     "Sector 42 - 43",
     "Phase 1",
     "Sikanderpur",
     "Phase 2",
     "Belvedere Towers",
     "Cyber City",
     "Moulsari Avenue",
     "Phase 3"});
// FUNCTIONS
void capitalise(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 32)
            continue; // blank space
        else if (s[i] > 96 and s[i] < 123)
            s[i] -= 32;
    }
}
void capitalise(char &c)
{
        if (c == 32) return; // blank space
        else if (c> 96 and c < 123)
            c-= 32;
}
class node
{
public:
    char data;
    unordered_map<char, node *> children; // child ka naam aur uska address
    bool terminal;
    node(char c, bool t = false) : data(c), terminal(t) {}
};
class trie
{
    node *root;
public:
    trie()
    {
        root = new node('\0');
    }
    void add_word(string word)
    {
        capitalise(word);
        node *temp = root;
        for (int i = 0; word[i]; i++)
        {
            if (temp->children.count(word[i]))
                temp = temp->children[word[i]];
            else
            {
                node *n = new node(word[i]);
                temp->children[word[i]] = n;
                temp = n;
            }
        }
        temp->terminal = true;
    }
    void print_children(node *root, string s)
    {
        // base case
        if (!root)
            return;
        // recursive case
        for (auto pair : root->children)
        {
            s.push_back(pair.first);
            print_children(pair.second, s);
            s.pop_back();
        }
        if (root->terminal)
        {
            cout << s << endl;
            return;
        }
    }
    void find_helper(node *root, string pref, int i = 0, string s = "")
    {
        // base case
        if (i == pref.size())
        {
            print_children(root, s);
            return;
        }
        // recursive case
        int flag = 0;
        for (auto pair : root->children)
        {
            if (pair.first == pref[i])
            {
                flag = 1;
                s.push_back(pair.first);
                find_helper(pair.second, pref, i + 1, s);
                break;
            }
        }
        if (flag == 0)
        {
            cout << pref << " does not exist in the trie" << endl;
            return;
        }
    }
    void find_words_after(string pref)
    {
        capitalise(pref);
        find_helper(root, pref);
    }
    void print_helper(node *root, string s = "")
    {
        // base case
        if (!root)
            return;
        // recursive case
        s.push_back(root->data);
        for (auto pair : root->children)
        {
            print_helper(pair.second, s);
        }
        if (root->terminal)
        {
            cout << s << endl;
            return;
        }
    }
    void print_trie()
    {
        print_helper(root);
    }
};
void print(vector<string> v)
{
    for (auto x : v)
        cout << x << ", ";
    cout << endl;
}
void add_station(string sname)
{
    // ABHI SOCHA NHI
}
void initialise_trie(trie &t)
{
    for (auto s : redline)
        t.add_word(s);
    for (auto s : magentaline)
        t.add_word(s);
    for (auto s : yellowline)
        t.add_word(s);
    for (auto s : greenline)
        t.add_word(s);
    for (auto s : orangeline)
        t.add_word(s);
    for (auto s : violetline)
        t.add_word(s);
    for (auto s : blueline1)
        t.add_word(s);
    for (auto s : blueline2)
        t.add_word(s);
    for (auto s : pinkline)
        t.add_word(s);
    for (auto s : greyline)
        t.add_word(s);
    for (auto s : rapidline)
        t.add_word(s);
}
class graph
{
    unordered_map<string, list<pair<string, int>>> umap;
    unordered_map<string,set<string> > color;
public:
    void add_edge(string v1, string v2, int time = 10)
    {
        capitalise(v1);
        capitalise(v2);
        umap[v1].push_back(make_pair(v2, time));
        umap[v2].push_back(make_pair(v1, time));
    }
    void add_metroline(vector<string> v, string c)
    {
        capitalise(c);
        for (int i = 0; i < v.size() - 1; i++)
        {
            add_edge(v[i], v[i + 1], 10);
            capitalise(v[i]);
            // cout<<"v[i] is "<<v[i]<<endl;
            capitalise(v[i+1]);
            color[v[i]].insert(c);
            color[v[i+1]].insert(c);
        }
    }
    void col_print(){
        for(auto pair: color){
            cout<<"key - "<<pair.first<<" | ";
            for(auto colors: pair.second){
                cout<<colors<<", ";
            }
            cout<<endl;
        }
    }
    string find_same_color(string a, string b){
        for(auto col_a : color[a]){
            auto address = color[b].find(col_a);
            if(address != color[b].end()) return col_a;
        }
        return "";
    }
    void print()
    {
        for (auto pair : umap)
        {
            cout << "key- " << pair.first << " , values- ";
            for (auto pairs : pair.second)
            {
                cout << pairs.first << "( " << pairs.second << " )"
                     << " ";
            }
            cout << endl;
        }
    }
    void dijstra(string src, string dest)
    {
        capitalise(src);
        capitalise(dest);
        // Data Structures
        set<pair<int, string>> s;
        unordered_map<string, int> dist;
        unordered_map<string,string > parent; // key -> parent, color
        // Initialisation
        s.insert(make_pair(0, src));
        for (auto node : umap) dist[node.first] = INT32_MAX;
        dist[src] = 0;
        parent[src] = "god";
        //
        while (!s.empty())
        {
            // sabse aage waale node ko utha lo
            // uske baad uske saare neighbor ka dist dekho
            auto front_add = s.begin();
            string node = front_add->second;
            int node_dist = front_add->first;
            s.erase(s.begin());
            // node ke saare neighbor par visit karo
            for (auto neighbor_pair : umap[node])
            {
                string neighbor = neighbor_pair.first;
                int nbr_node_dist = neighbor_pair.second;
                // check karo ki kya neighbor set mein pada hai ya nahi
                auto neighbor_add = s.find(make_pair(dist[neighbor], neighbor));
                if (neighbor_add != s.end())
                {
                    // check karo ki kya neighbor ke liya naya shortest path mila hai
                    if (dist[node] + nbr_node_dist < dist[neighbor])
                    {
                        // update
                        s.erase(neighbor_add);
                        s.insert(make_pair(dist[node] + nbr_node_dist, neighbor));
                        dist[neighbor] = dist[node] + nbr_node_dist;
                        parent[neighbor] = node;
                    }
                }
                // abh check karo ki kya pehle dist[neighbor] update hua hai ya nahi
                else if (dist[neighbor] == INT32_MAX)
                {
                    s.insert(make_pair(dist[node] + nbr_node_dist, neighbor));
                    dist[neighbor] = dist[node] + nbr_node_dist;
                    parent[neighbor] = node;
                }
            }
        }
        // Print Path
        stack<string> st;
        st.push(dest);
        while(parent[dest]!="god"){
            st.push(parent[dest]);
            dest = parent[dest];
        }
        int i=1;
        st.pop();
        string currmetro = find_same_color(src,st.top());
        cout<<currmetro<<" LINE"<<endl;
        cout<<i++<<". "<<src<<endl;
        while(!st.empty()){
            string curr_station = st.top();
            st.pop();
            string next_station;
            cout<<i++<<". "<<curr_station<<endl;
            if(!st.empty()){
                next_station = st.top();
                string col = find_same_color(curr_station, next_station);
                if(col!=currmetro){
                    cout<<"SWITCH TO "<<col<<" LINE"<<endl;
                    currmetro = col;
                }
            }
        }
    }
};
void initialise_graph(graph &g)
{
    g.add_metroline(redline, "red");
    g.add_metroline(yellowline,"yellow");
    g.add_metroline(magentaline,"magenta");
    g.add_metroline(greenline,"green");
    g.add_metroline(orangeline,"orange");
    g.add_metroline(violetline,"violet");
    g.add_metroline(blueline1,"blue(1)");
    g.add_metroline(blueline2,"blue(2)");
    g.add_metroline(pinkline,"pink");
    g.add_metroline(greyline,"grey");
    g.add_metroline(rapidline,"rapid");
}
int main()
{
    // CONSTRUCT A GRAPH
    graph g;
    initialise_graph(g);
    // g.col_print();
    // g.print();
    // CONSTRUCT A TRIE
    trie t;
    initialise_trie(t);
    // t.print_trie();
    // cout << magentaline.size() + rapidline.size() + orangeline.size() + greyline.size() + blueline1.size()
    // + violetline.size() + greenline.size() + pinkline.size() + yellowline.size() + redline.size() + blueline2.size() << endl;
    //NOW IMPLEMENT AUTOCOMPLETE SEARCHING
    // string prefix_word;
    // cout << "input prefix word(-1 to exit): ";
    // while (1)
    // {
    //     cout<<"--------------------------------------------"<<endl;
    //     cout<<"Enter char: ";
    //     capitalise(prefix_word);
    //     cout<<prefix_word;
    //     char p;
    //     // getline(cin, prefix_word);
    //     cin >> p;// p =getchar();
    //     if(p=='\n') break;
    //     if(p==8){
    //         prefix_word.pop_back();
    //         cout<<endl;
    //     }else{
    //         capitalise(p);
    //         cout<<p<<endl;
    //         prefix_word.push_back(p);
    //     }
    //     // if (prefix_word == "-1") break;
    //     // t.find_words_after(prefix_word);
    //     cout<<"Giving metro stations starting with "<<prefix_word<<endl<<"------"<<endl;
    //     t.find_words_after(prefix_word);
    // }
    
    string prefix_word;
    cout << "Enter prefix (-1 to exit):" << endl;
    while (getline(cin, prefix_word)) {
    if (prefix_word == "-1") break;
    
    capitalise(prefix_word);
    cout << "Stations starting with '" << prefix_word << "':" << endl;
    t.find_words_after(prefix_word);
    cout << "\nEnter next prefix (-1 to exit):" << endl;
}


    // // CHOOSE SRC AND DEST.
    // string src = "Civil Lines";
    // string dest = "Inderlok";
    // Instead of hardcoded:
  string src, dest;
  cout << "Enter source: "; getline(cin, src);
  cout << "Enter destination: "; getline(cin, dest);
    //  g.dijstra(src, dest);
    
    g.dijstra(src, dest);
    // VISUALISE THAT PATH DIAGRAMATICALLY
    cout << endl << 1000000 << endl; // code ended
    return 0;
}
// @beyondinfinity9988 (aka vishal mishra)